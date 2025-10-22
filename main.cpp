#include <iostream>
#include <math.h>

using namespace std;

double lenradius(double radius)
{
    return radius = 2 * M_PI * radius;
}

int main()
{
    double radius;
    cout << "Enter radius: " << endl;
    cin >> radius;

    cout << "Len: "<<lenradius(radius)<<endl;

}
