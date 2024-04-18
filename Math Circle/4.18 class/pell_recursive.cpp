#include <iostream>
using namespace std;
ostream&
operator<<( ostream& dest, __int128_t value )
{
    ostream::sentry s( dest );
    if ( s ) {
        __uint128_t tmp = value < 0 ? -value : value;
        char buffer[ 128 ];
        char* d = end( buffer );
        do
        {
            -- d;
            *d = "0123456789"[ tmp % 10 ];
            tmp /= 10;
        } while ( tmp != 0 );
        if ( value < 0 ) {
            -- d;
            *d = '-';
        }
        int len = end( buffer ) - d;
        if ( dest.rdbuf()->sputn( d, len ) != len ) {
            dest.setstate( ios_base::badbit );
        }
    }
    return dest;
}
int main(){
    freopen("pell_solutions.cpp", "w", stdout);
    __int128_t a = 1; 
    __int128_t b = 0;
    for (int i=0; i<1000; i++){
        cout << a << " " << b << endl;
        a = a + 2*b;
        b = a - b;
    }
}
