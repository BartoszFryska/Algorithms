#include <iostream>

using namespace std;

int main () {

    int n, sum;

    cin >> n >> sum;

    int min_hours [ n ], max_hours [ n ];

    int min_hours_sum = 0 , max_hours_sum = 0;

    for ( int i = 0 ; i < n; i++ ) {

        cin >> min_hours [ i ] >> max_hours [ i ];

        min_hours_sum += min_hours [ i ];
        max_hours_sum += max_hours [ i ];
    }

    if ( min_hours_sum > sum || max_hours_sum < sum ) {

        cout << "NO";
        return 0;
    }
    else {

        cout << "YES\n";
    }

    int to_make_up;
    int day;

    for ( int i = 0; i < n; i ++ ) {

        to_make_up = max( sum - min_hours_sum, 0) ;

        day = min ( min_hours [ i ] + to_make_up, max_hours [ i ] );

        sum -= day;

        min_hours_sum -= min_hours [ i ];
        max_hours_sum -= max_hours [ i ];
        
        cout << day << " ";
    }
}