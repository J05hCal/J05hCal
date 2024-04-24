int main()
{
  char myChar = 'M';

  Disp(myChar); // Pass by value

  Disp(myChar); // Pass by reference

  Disp(&myChar); //Pass by pointer
}

//Pass by value
void Disp(char charVal)
{
  cout << charVal << endl;
}

//Pass by reference
void Disp(char &charVal)
{
  cout << charVal << endl;
}

//Pass by pointer
void Disp(char *charVal)
{
  //0 x 15
  cout << charVal << endl;

  //Display the character 
  cout << *charVal << endl;
}
