int main()
{
  char myArray[] = "Steve Rogers";

  Disp(myArray, strlen(myArray) + 1);

  Disp("Steve Rogers", 13);
}

void Disp(char arr[], int num)
{
  //When working with char array
  cout << arr << endl; //Steve Rogers

  //For all other cases
  for (int i = 0; i < num; ++i)
  {
    cout << arr[i];
  }
}
