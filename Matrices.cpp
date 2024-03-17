#include <iostream>
#include <cmath>
#include <array>
using namespace std;

//void InitMatrix(int i, int intVal[][9], int numRows) //User enter's values
//{
  //int row;
  //int col;
  
  //cout << "ENTER 9 INTEGER VALUES FOR THE FIRST MATRIX: " << endl;
  //cin >> intVal[][0];
  
  //for (row = 0; row < numRows; ++row)
  //{
  //  for (col = 0; col < 3; ++col)
  //    {
  //      cout << setw(3) << intVal[row][col];
  //    }
  //  cout << endl;
  //} 
//}
//void DispMatrix() //Displays values
//void AddMatrix() //Adds up values
//void TMatrix()
//int DetMatrix()

int main(int argc, char* argv[])
{
  int array[3][3];
  cout << "ENTER 9 INTEGER VALUES FOR THE FIRST MATRIX: " << endl;
  for(int i = 0; i < 9; i++) {
    int intVal;
    cin >> intVal;
    if(i < 3) {
      array[0][i] = intVal;
    }
    if(i < 6 && i >= 3) {
      array[1][i - 3] = intVal;
    }
    if(i < 9 && i >= 6) {
      array[2][i - 6] = intVal;
    }
  }
  cout << "Your array consists of:\n";
  for(int row = 0; row < 3; row++) {
    for(int col = 0; col < 3; col++) {
      cout << array[row][col];
    }
    cout << "\n";
  }
  cout << "Done!";
return 0;
}
