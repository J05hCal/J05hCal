#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

void Iterate (int iter;
void DecimalApprox (int approx);
void DisplayPi (int signif, double pi);

int main()
{
  ??? //variables

  // Prompt the user if they want to iterate or have a decimal approx.
  cout << "\nThis program calculates the number Pi.\n\n";

  // Create a do while loop to prompt the user for Iteration or Approx.
  // Loop until the user enters the correct selection
  ???
  {
    cout << "Would you like to calculate it through I>teration or ";
    cout << "A>pproximation: ";
    cin >> ???;
  }

  ???

  // If it is iteration, ask how many iterations and call the Iterate function.
  ???
  {   
    // Prompt the user of many iterations
    cout << "How many iterations?: ";
    cin >> ???;

    // Call the Iterate function
    Iterate(???);

  // If it is approximation, ask the number of approximation and call thw DecimalApprox function

    // Prompt the user of decimal approximation
    cout << "How many decimals of approximation: ";
    cin >> ???

    // Call the DecimalApprox function
    DecimalApprox(???);
  }
  return 0;
} // end of "main"

void Iterate (int iter)
{
  ??? // variables

  // do a loop to calculate pi based on the number of iterations
  ???
  {
    ???
  }

  // Call the DisplayPi function.
  // default to 5 digit significance for iteration
  DisplayPi(5, ???);

} // end of "Iterate"

void DecimalApprox(int approx)
{
  ??? // variables
  double piVal ??? // Pi value
  double previousPi = piVal; // Previous pi value

  // loop to calculate pi based on the approx value of signif. digits.
  do{
      ??? // calculate PI

      // check if the significance has changed within 1 decimal approx.
      //if so break out of the loop
      if (abs(piVal - previousPi) <= pow(10.0, -1.0 * approx))
      {
        ???
      }

      // update previousPi and increment i
      ???
      ???
  } while (???);

  // Call the DisplayPi function.
  // default to approx digit significance for iteration
  DisplayPi(???, ???);

} // end of "DecimalApprox"

void DisplayPi (int signif, double pi)
{
  // settings for digit precision
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(???);

  //display the value of pi
  cout << "The value of Pi is: " << ??? << endl << endl;
} // end of "DisplayPi"
