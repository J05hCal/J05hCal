#include <iostream>
using namespace std;

void range(int lowInt, int upInt);

int main()
{
  int dispVal;
  
  cout << "ENTER A LOWER AND UPPER INTEGER BOUNDARIES AND DIVISOR OF THE RANGE SEPARATED BY WHITE SPACE: \n";
  cin >> range;
  
  if(lowInt > upInt)
  {
    cout << "LOWER NUMBER IS BIGGER THAN UPPER NUMBER.\n" << endl;
    cout << "EXITING...\n"
    break;
  }
  //range with no arguments
  for(range = 1; range <= 24; ++range)
  {
    cout << endl << "CALLING THE RANGE FUNCTION WITH NO ARGUMENTS" << range << endl;
  }
  //range with lower & upper
  for(range = 1; range <= 24; ++range)
  {
    cout << endl << "CALLING THE RANGE FUNCTION WITH UPPER AND LOWER ARGUMENTS" << endl;
  }
  
}
