#include <iostream>

using namespace std;

bool is_a_triangulate ( short a ) {

    for ( int i = 1; i <= a; i ++ ) {

        if ( a == i * ( i + 1 ) / 2 )
            return true;
    }
    
    return false;
}

int main () {

    short a;

    cin >> a;

    if ( is_a_triangulate( a ) ) {

        cout << "YES";
    }

    else {

        cout << "NO";
    }
}