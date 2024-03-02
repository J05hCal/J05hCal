#include <iostream>
#include <cmath>
using namespace std;


// This purpose of this function is to ask the user to input two integers.
void disVal(int &valOne, int &valTwo)
{
  cout << "ENTER TWO INTEGERS SEPERATED BY WHITESPACE: ";

  cin >> valOne >> valTwo;
  
  cout << valOne << valTwo << endl;
}

// This function takes the two integers from the user and prints the SUM.
void addition(int valOne, int valTwo)
{
    int sum = valOne + valTwo;
    cout << valOne << " + " << valTwo << " = " << sum << endl;
}

// This function takes the two integers from the user and prints the DIFFERENCE.
void difference(int valOne, int valTwo)
  {
    int dif = valOne - valTwo;

    cout << valOne << " - " << valTwo << " = " << dif << endl;
  }

// This function takes the two integers from the user and prints the PRODUCT.
void product(int valOne, int valTwo)
{
  int pro = valOne * valTwo;

  cout << valOne << " * " << valTwo << " = " << pro << endl;
}

// This function takes the two integers from the user and prints the QUOTIENT AND THE REMANDER.
void divison(int valOne, int valTwo)
{
  int div = valOne / valTwo;

  int divTwo = valOne % valTwo;

    if(valTwo < 0 || valTwo > 0)
    {
      cout << valOne << " / " << valTwo << " = " << div
       << "with a remainder of " << divTwo << endl;
    }

    else if(valTwo == 0)
    {
      cout << "DIVISION BY ZERO IS UNDEFINED.\n";
    }
}

// This function asks the user if they would like to input different numbers. 
void choice(char resp)
{
  if(resp == 'N' || resp == 'n')
  {
    break;
  }

  else if(resp == 'Y' || resp == 'y')
  {
    continue;
  }
}

int main(int argc, char* argv[]) {
  int valOne;
  int valTwo;
  char response;
  while(true) {
    std::cout << "Would you like to input different numbers?\nY/N: "
    std::cin >> response;
    choice(response);
    std::cout << "ENTER TWO INTEGERS SEPERATED BY WHITESPACE: ";
    sdt::cin >> valOne >> valTwo;
    addition(valOne, valTwo);
    difference(valOne, valTwo);
    product(valOne, valTwo);
    division(valOne, valTwo);
  }
  return 0;
}
