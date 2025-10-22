#include <iostream>
#include <math.h>

using namespace std;

double rectangleperimeter(double side1, double side2)
{
    return 2 * (side1+side2);
}

int main()
{
    double side1;
    double side2;

    cout << "Enter side1: " << endl;
    cin >> side1;

    cout << "Enter side2: " << endl;
    cin >> side2;

    cout << "rectangleperimeter: "<< rectangleperimeter(side1, side2) <<endl;

}
