#include <QString>
#include <fstream>
#include "md5.h"

using namespace std;

// определить хэш
QString hash( QString message )
{
    MD5_CTX c;
    const unsigned int size_max = 1024;
    unsigned char i[ size_max ] = {0};
    unsigned char o[ 16 ];

    unsigned int size = message.size();
    strcpy( ( char* )i, message.toStdString().c_str() );

    MD5_Init( &c );
    MD5_Update( &c, i, size );
    MD5_Final( o, &c);

    string str;
    for ( unsigned int i = 0; i < 16 ; i++ ) str += o[ i ] % 10 + '0';

    return QString::fromStdString( str );
}
