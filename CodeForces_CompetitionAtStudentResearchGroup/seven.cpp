#include <iostream>
#include <math.h>
#include <iomanip>
#include <limits>
#include <numbers>
const double pi = std::acos(-1);

using namespace std;

int main () {

    int l1, l2, l3;

    cin >> l1 >> l2 >> l3;

    double volume = 0.0;

    double aa = l3 / sin ( 2*  pi * 72 / 360 );

    volume += sqrt ( l1*l1 - l1*l1/3 ) * l1*l1*sqrt(3) / 6;
    volume += sqrt ( l2*l2 - l2*l2/2 ) * l2 * l2 / 3;  
    volume += l3 / 2 / tan ( 2*  pi * 72 / 360) * l3 / 2 * sqrt ( l3 * l3 - aa * aa );
    
    cout << std::setprecision(19) << volume;
}