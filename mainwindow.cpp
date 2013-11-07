#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bigint/BigIntegerLibrary.hh"
#include "bigint/BigIntegerUtils.hh"
#include "md5.h"
#include <QFile>
#include <QTextStream>
#include <fstream>
#include <QTime>

using namespace std;

#define size_max 2048

// ��������� �������

void MainWindow::Subscribe()
{
    Inicialization(); // ������������� � ��������� ������� ����������

    string str;

    // ������������� ����������
    BigInteger m, p, g, k, x, y, r, s, p1, k1, temp;
    m = stringToBigInteger( ui->lineEdit_m->text().toStdString() );
    p = stringToBigInteger( ui->lineEdit_p->text().toStdString() );
    g = stringToBigInteger( ui->lineEdit_g->text().toStdString() );
    k = stringToBigInteger( ui->lineEdit_k->text().toStdString() );
    x = stringToBigInteger( ui->lineEdit_x->text().toStdString() );

    // ��������� �������

    // **************************************************************************

    // �������� ���� y
    y = BigInteger( modexp( g, x.getMagnitude(), p.getMagnitude()));

    // ��������� ��� r
    r = BigInteger( modexp(g, k.getMagnitude(), p.getMagnitude()));

    // ��������� ��� s = k^-1 * ( x * r - m ) ( mod p )
    p1 = BigInteger(p - 1);
    k1 = BigInteger(modinv(k, p1.getMagnitude()));//k1 = evklid_ext_x( k, p1 ); // ������� �������� ������� k � ������ p-1
    temp = x * r;
    m %= p1;
    if ( m < temp ) {
        temp = p1 - ( temp - m ) % p1;
    }
    else {
        temp -= m;
    }
    s = k1 * temp;
    s %= p1;

    // **************************************************************************

    // ����� ����������� �� �����

    ui->lineEdit_y->setText( bigIntegerToString(y).c_str() );

    ui->lineEdit_r->setText( bigIntegerToString(r).c_str() );

    ui->lineEdit_s->setText( bigIntegerToString(s).c_str() );
}

// �������� ������� �� �����������

void MainWindow::Verify()
{
    // ������������� ����������
    BigInteger m, p, g, k, x, y, r, s, v1, v2;
    m = stringToBigInteger( ui->lineEdit_m->text().toStdString() );
    p = stringToBigInteger( ui->lineEdit_p->text().toStdString() );
    g = stringToBigInteger( ui->lineEdit_g->text().toStdString() );
    k = stringToBigInteger( ui->lineEdit_k->text().toStdString() );
    x = stringToBigInteger( ui->lineEdit_x->text().toStdString() );
    r = stringToBigInteger( ui->lineEdit_r->text().toStdString() );
    y = stringToBigInteger( ui->lineEdit_y->text().toStdString() );
    s = stringToBigInteger( ui->lineEdit_s->text().toStdString() );

    // �������� ������� �� �����������

    // **************************************************************************

    if ( r < 1 || r == p - 1 ) {
        ui->lineEdit->setText( QString::fromLocal8Bit("������� ���������!") );
    }
    else {
        v1 = modexp( g, m.getMagnitude(), p.getMagnitude() );
        v2 = (modexp( y, r.getMagnitude(), p.getMagnitude() ) *  modexp( r, s.getMagnitude(), p.getMagnitude() )) % p.getMagnitude();
        if ( v1 == v2 ) ui->lineEdit->setText( QString::fromLocal8Bit("������� ���������!") );
        else ui->lineEdit->setText( QString::fromLocal8Bit("������� �����������!") );
    }

    // **************************************************************************
}

// ������������� � ��������� ������� ����������
void MainWindow::Inicialization() {
    if ( ui->lineEdit_M->text().isEmpty() ) ui->lineEdit_M->setText( "MESSAGE" );
    generate_m();
}

// ��������� ��� ��������� M
void MainWindow::generate_m()
{
    QString str = ui->lineEdit_M->text();
    //str = hash( str );
    ui->lineEdit_m->setText( str );
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  /*  QPalette *palette = new QPalette();
    palette->setColor(QPalette::Base,Qt::white);
    ui->lineEdit_p->setPalette(*palette);
    ui->lineEdit_g->setPalette(*palette);
    ui->lineEdit_y->setPalette(*palette);
    palette->setColor(QPalette::Base,Qt::white);
    ui->lineEdit_r->setPalette(*palette);
    ui->lineEdit_s->setPalette(*palette);
*/
    connect(ui->pushButton_Subscribe, SIGNAL( clicked() ), SLOT( Subscribe() ));
    connect(ui->pushButton_Verify, SIGNAL( clicked() ), SLOT( Verify() ));
    connect(ui->pushButton_m, SIGNAL( clicked() ), SLOT( generate_m() ));

    string str;

    // ��������� ��������� �� �����
    ifstream M_file("M.txt");
    M_file >> str;
    ui->lineEdit_M->setText( QString::fromStdString( str ) );
    M_file.close();

    // ��������� ������ �� �����
    ifstream data_file("data.txt");
    data_file >> str;
    ui->lineEdit_p->setText( QString::fromStdString( str ) );
    data_file >> str;
    ui->lineEdit_g->setText( QString::fromStdString( str ) );
    data_file >> str;
    ui->lineEdit_k->setText( QString::fromStdString( str ) );
    data_file >> str;
    ui->lineEdit_x->setText( QString::fromStdString( str ) );
    data_file.close();

    // �������������� random
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
