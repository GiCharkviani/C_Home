#include <iostream>
// Function Prototype

using namespace std;
// Function prototypes -- order doesn't matter
double calc_area_circle(double radius);
double calc_volume_cylinder(double radius, double height);
void area_circle();
void volume_cylinder();
// Prototypes above -- usually they are in .h (header) files

const double pi{3.14159};

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}

double calc_area_circle(double radius)
{
    return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height)
{
    double area = calc_area_circle(radius);
    return area * height;
}

void area_circle()
{
    double radius{};
    cout << "\nEnter the radius of the circle: ";
    cin >> radius;
    cout << "The area of circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder()
{
    double height{};
    double radius{};
    cout << "\nEnter the radius of the cylinder: ";
    cin >> radius;
    cout << "\nEnter the height of the cylinder: ";
    cin >> height;

    cout << "The valume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}