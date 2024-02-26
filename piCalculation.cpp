#include <iostream>
#include <cctype>
#include <cmath>
using namespace std;

void Iterate (int iter);
void DecimalApprox (int approx);
void DisplayPi (int signif, double pi);

int main()
{
  //variables
  int iter_amount{0};
  string input{"default"};
  int decimal_aprox{0};

  // Prompt the user if they want to iterate or have a decimal approx.
  cout << "\nThis program calculates the number Pi.\n\n";

  // Create a do while loop to prompt the user for Iteration or Approx.
  // Loop until the user enters the correct selection
  while(input != "I" || input != "A" || input != "i" || input != "a")
  {
    cout << "Would you like to calculate it through Iteration or ";
    cout << "Approximation: ";
    cin >> input;
  

    // If it is iteration, ask how many iterations and call the Iterate function.
    if (input == "I" || input == "i")
    {
      cout << "How many interations would you like?  ";
      cin >> iter_amount;
      Iterate(iter_amount);

    }

    // If it is approximation, ask the number of approximation and call thw DecimalApprox function
    if (input == "A" || input == "a")
    {
      // Prompt the user of decimal approximation
      cout << "How many decimals of approximation: ";
      cin >> decimal_aprox;

      // Call the DecimalApprox function
      DecimalApprox(decimal_aprox);
    }

  }

  return 0;
} // end of "main"
/*=================================================================================================*/
void Iterate (int iter)
{

  // variable
  double pi{0.0};

  // do a loop to calculate pi based on the number of iterations
  for (size_t i{0}; i < iter; i++)
  {
    double pi{pow(-1, iter)/(2 * iter + 1)};
  }

  // Call the DisplayPi function.
  // default to 5 digit significance for iteration
  DisplayPi(5, pi);

} // end of "Iterate"

void DecimalApprox(int approx)
{
  double pi{0.0};
  int i{0};
  double piVal{3.14}; // Pi value
  double previousPi{0.0}; // Previous pi value

  // loop to calculate pi based on the approx value of signif. digits.
  do{
      double pi{pow(-1, approx)/(2 * approx + 1)}; // calculate PI

      // check if the significance has changed within 1 decimal approx.
      //if so break out of the loop
      if (abs(piVal - previousPi) <= pow(10.0, -1.0 * approx))
      {
        break;
      }

      // update previousPi and increment i
      
      i++;
      double previousPi{pi};
  } while (i <= approx);

  // Call the DisplayPi function.
  // default to approx digit significance for iteration
  DisplayPi(approx, previousPi);

} // end of "DecimalApprox"

void DisplayPi (int signif, double pi)
{
  // settings for digit precision
  cout.setf(ios::showpoint);
  cout.setf(ios::fixed);
  cout.precision(signif);

  //display the value of pi
  cout << "The value of Pi is: " << pi << endl << endl;
} // end of "DisplayPi"
