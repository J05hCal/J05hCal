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
  int arrayA[3][3];
  
  cout << "ENTER 9 INTEGER VALUES FOR THE FIRST MATRIX: " << endl; //first matrix
  
  for(int a = 0; a < 9; a++) 
  {
    int intValA;
    cin >> intValA;
    
    if(a < 3) 
    {
      arrayA[0][a] = intValA;
    }
    if(a < 6 && a >= 3) 
    {
      arrayA[1][a - 3] = intValA;
    }
    if(a < 9 && a >= 6) 
    {
      arrayA[2][a - 6] = intValA;
    }
  }

for(int rowA = 0; rowA < 3; rowA++)
    {
    for(int colA = 0; colA < 3; colA++) 
    {
      cout << arrayA[rowA][colA];
    }
    cout << "\n";
  }
  int arrayB[3][3];
  
  cout << "ENTER 9 INTEGER VALUES FOR THE SECOND MATRIX: " << endl; //second matrix
  
  for(int b = 0; b < 9; b++) 
  {
    int intValB;
    cin >> intValB;
    
    if(b < 3) 
    {
      arrayB[0][b] = intValB;
    }
    if(b < 6 && b >= 3) 
    {
      arrayB[1][b - 3] = intValB;
    }
    if(b < 9 && b >= 6) 
    {
      arrayB[2][b - 6] = intValB;
    }
  }
  cout << "THE MATRICES YOU'VE ENTERED ARE: \n";
  //output of user's matrices
  for(int rowB = 0; rowB < 3; rowB++)
  {
    for(int colB = 0; colB < 3; colB++) 
    {
      cout << arrayA[rowA][colA] << endl << arrayB[rowB][colB] << endl;
    }
  }
//the sum of matrices
  cout << "THE SUM OF THE MATRICES ARE: \n";
    
  for(int rowC = 0; rowC < 3; rowC++)
  {
    for(int colC = 0; colC < 3; colC++) 
    {
      int addMatrix = intValA + intValB;
      arrayA = addMatrix;

      cout << arrayA[rowC][colC] << endl;
    }
  }
  return 0;
}
