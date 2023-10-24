#include <iostream>
#include <vector>

using namespace std;


int main () {

    int n, m;

    cin >> n;

    long long A [ n ];

    for ( int i = 0; i < n; i++) {

        cin >> A [ i ];
    }

    cin >> m;

    long long B [ m ];

    for ( int i = 0; i < m; i++) {

        cin >> B [ i ];
    }

   int L = 0;
   int P = 0;
   long long L_sum = A [ L ];
   long long P_sum = B [ P ];
   int number_of_rows = 1;

   while ( L < n || P < m ) {

        if ( L_sum > P_sum ) {
            P ++;

            if ( !( P < m ) ) break;
            P_sum += B [ P ]; 
        }

        else {

            if ( L_sum < P_sum ) {
                
                L ++;
                if ( !( L < n ) ) break;

                L_sum += A [ L ];
            }

            else {

                L ++;
                P ++;
                number_of_rows ++;

                if ( L < n ) L_sum = A [ L ];
                if (  P < m ) P_sum = B [ P ];
            }
        }
   }

    number_of_rows --;
   

   if ( L < n || P < m || L_sum != P_sum ) {

        cout << -1;
   }

   else {

    cout << number_of_rows;
   }
}