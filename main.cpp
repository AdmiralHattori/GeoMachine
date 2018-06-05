#include <iostream>
#include "functions.h"

using namespace std;

// This program is designed to compute geometric problems
int main()
{
  // Variables declarations
  double tri_base;
  double tri_height;
  double tri_area;

  // Finding the area of the triangle
  cout << endl;
  cout << "--------------------------" << endl;
  cout << "Area of Triangle" << endl;
  cout << "--------------------------" << endl;
  cout << "Enter the base: ";             // Prompt user for the base of the triangle
  cin >> tri_base;                        // Store the entered base into tri_base
  cout << "Enter the height: ";           // Prompt user for the height of the triangle
  cin >> tri_height;                      // Store the entered height into tri_height
  tri_area = A_tri(tri_base, tri_height); // Calls the A_tri function
  cout << "Computed area of triangle: " << tri_area << endl;

  // PROGRAM TERMINATES
  return 0;
}
