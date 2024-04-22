//Heap is a region of memory that satisfies dynamic requests
//Heap is under programmer control
  //If you allocated it (memory), you must release it
  //You can think of it as opening a file and making sure you close the file
//"new" is used to allocate space in the heap
  //Ex: new <data type>;
  //It returns a pointer to dynamic memory
//"delete" releases dynamic memory
  //Ex: delete <pointer to dynamic memory>;
  //It releases the memory reserved so another program can use it

//Ex:
  int main()
  {
    int *intPtr;

    intPtr = new int;

    *intPtr = 15;

    cout << *intPtr << endl;  //stdout: 15

    
    
    delete intPtr;

    //cout << *intPtr << endl; (You can still go back to intPtr even when it is deleted)

    intPtr = nullptr; //intPtr = NULL;
    
    return 0;
  }



//Ex:
  int main()
  {
    int *intPtr;
    int index;
    int numElems;

    //Get the number of elements from the user
    cout << "How many elements?";
    cin >> numElems;

    //Allocate space of numElems in the heap;
    intPtr = new int[numElems];  //int myArray[numElems];

    for (index = 0; index < numElems; ++index)
    {
      cin >> intPtr[index];
    }

    //...

    delete [] intPtr;

    intPtr = nullptr;

    return 0;
  }



//Ex:
  const int LEN = 256;

  int main()
  {
    char buff[LEN];
    char *strPtr;

    cout << "Enter a string: ";
    cin.getline(buff, LEN);

    strPtr = new char[strlen(buff) + 1]; //+1 for the null

    strcpy(strPtr, buff);

    cout << strPtr << endl;

    delete [] strPtr;

    strPtr = nullptr;

    return 0;
  }
