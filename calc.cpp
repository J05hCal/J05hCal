
#include <iostream>
#include <cmath>
using namespace std;

void disVal(int &valOne, int &valTwo)
{
  cout << "ENTER TWO INTEGERS SEPERATED BY WHITESPACE: ";
  cin >> valOne >> valTwo;
  
  cout << valOne << valTwo << endl;
}

int main()
{
  void add(valOne, valTwo);
  {
    int add = valOne + valTwo;
    cout << valOne << " + " << valTwo << " = " << add << endl;
  }
  
  void dif(valOne, valTwo)
  {
    int dif = valOne - valTwo;
    cout << valOne << " - " << valTwo << " = " << dif << endl;
  }
  
  void pro(valOne, valTwo
  {
    int pro = valOne * valTwo;
    cout << valOne << " * " << valTwo << " = " << pro << endl;
  }

  void div(valOne, valTwo)
  {
    int div = valOne / valTwo;
    int divTwo = valOne % valTwo;
    cout << valOne << " / " << valTwo << " = " << div
    << "with a remainder of " << divTwo << endl;
    if(valTwo == 0)
    {
      cout << "DIVISION BY ZERO IS UNDEFINED.\n"
    }
  }
  void choice(char resp)
  {
    if(resp == 'N' || resp == 'n')
    {
      break;
    }
    else if(resp == 'Y' || resp == 'y')
    {
      return disVal;
    }
  }
  return 0;
}
