/* This program stores data about a Sphere in a structure.
/ Noah Lindon
/ CSCI 230
/ 9-3-19
*/
#include <iostream>
#include <cmath>  // For the pow function
#include <iomanip>
using namespace std;

// Constant for Pi.
const double PI = 3.14159;

// Structure declaration
struct Sphere
{
	double radius;				// A Sphere's radius
	double diameter;			// A Sphere's diameter
	double SurfaceArea;         // A Sphere's SurfaceArea
	double volume;				// A sphere's volume
};

int main()
{
	Sphere sphere1;    // Define a structure variable

	// Get the Sphere's radius.
	cout << "Enter the radius of the Sphere: ";
	cin >> sphere1.radius;

	// Calculate the Sphere's diameter.
	sphere1.diameter = sphere1.radius * 2;

	// Calculate the Sphere's Surface Area.
	sphere1.SurfaceArea = PI * 4.0 * pow(sphere1.radius, 2.0);

	// Calculate the sphere's volume.
	sphere1.volume = (4.0 / 3.0) * PI * pow(sphere1.radius, 3.0);

	// Display the Sphere data.
	cout << fixed << showpoint << setprecision(2);
	cout << "The diameter, radius, surface area, and the volume of the Sphere are:\n";
	cout << "Diameter: " << sphere1.diameter << endl;
	cout << "Radius: " << sphere1.radius << endl;
	cout << "Surface area: " << sphere1.SurfaceArea << endl;
	cout << "Volume: " << sphere1.volume << endl;

	system("pause");
	return 0;
}