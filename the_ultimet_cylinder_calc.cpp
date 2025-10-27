#include <iostream>
using namespace std;


int main() {

    const string programVersion = "\nCylinder Volume v1.0 by @GhaziRoot\n";
    cout << programVersion << endl;

    double radius, height, volume;
    const double pi = 3.14159;

    cout << "Enter the radius: ";
    cin >> radius;

    cout << "Enter the height : ";
    cin >> height;

    volume = pi * radius * radius * height;
    cout << "\nThe volume of the cylinder is: " << volume << endl;

    cout << "\nThank you for using the program! " << endl;
    return 0;
}


