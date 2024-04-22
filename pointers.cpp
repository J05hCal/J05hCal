//A pointer variable stores an address
//It has a data type associated with it
  //int pointer, double pointer, etc...

//Useful Operators
//&  The address operator    "The address of..."
//*  The reference operator  "Whatever is pointed by..."


//Ex 1:
  int main()
  {
    int intOne = 21;
    int intTwo;
    int *ptr;    //Pointer to an int

    ptr = &intOne;

    intTwo = *ptr;

    cout << intOne << ", " << intTwo << ", " << *ptr << endl;

    return 0;
  }



//Ex 2:
  int main()
  {
    char chVal = 'Q';
    char *chPtr;

    chPtr = &chVal;

    cout << chVal << ' ' << *chPtr << endl;  //stdout: Q Q

    chVal = 'A';

    cout << chVal << ' ' << *chPtr << endl;  //stdout: A A

    *chPtr = 'Z';

    cout << chVal << ' ' << *chPtr << endl;  //stdout: Z Z

    return 0;
  }



//Ex 3:
  int main()
  {
    int *intPtr;
    int index;
    int array[5] = {11, 22, 33, 44, 55};

    for (index = 0; index < 5; ++index)
    {
      cout << array[index] << ' ';
    }

    cout << endl;

    intPtr = &array[0];  //stdout: 11 22 33 44 55

    //OR

    intPtr = array;

    for (index = 0; index < 5; ++index)
    {
      cout << intPtr[index] << ' ';

      //OR

      cout << *(intPtr + index) << ' ';
    }


    DisplayArray(array, 5);

    return 0;
  }



  void DisplayArray(int index = 0; index < 5; ++index)
  {
    for (int index = 0; index < 5; ++index)
    {
      cout << myArray[index] << ' ';
    }
  }

  void DisplayArray(const int *myArray, int numElems)  //int *myArray = array
  {
    for (int index = 0; index < 5; ++index)
    {
      cout << myArray[index] << ' ';
    }
  }
