#include <iostream>
#include <cmath>
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
    __int128_t kmax = 1'000'000'000;
    __int128_t k = 1;
    __int128_t x = 2;
    __int128_t amin = 0; __int128_t bmin = 0;
    for (__int128_t a=amin; a<kmax; a++){
        for (__int128_t b=(a / sqrt(x) - 1); b<=(a / sqrt(x) + 1); b++){
            if (abs(a*a - x*b*b) == 1){
                cout << a << " " << b << endl;
                amin = a;
                bmin = b;
            }
        }
    }
}