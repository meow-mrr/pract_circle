#include <iostream>
#include <math.h>

using namespace std;

double squareradius(double radius)
{
    return radius = M_PI * (radius*radius);
}

int main()
{
    double radius;
    cout << "Enter radius: " << endl;
    cin >> radius;

    cout << "Len: "<<squareradius(radius)<<endl;

}
