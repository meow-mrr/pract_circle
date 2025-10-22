#include <iostream>
#include <math.h>

using namespace std;

double capacityeradius(double radius)
{
    return radius = 3.0/4.0 * M_PI * (radius*radius*radius);
}

int main()
{
    double radius;
    cout << "Enter radius: " << endl;
    cin >> radius;

    cout << "capacity: "<<capacityeradius(radius)<<endl;

}
