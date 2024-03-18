struct Date
{
  int month;
  int day;
  int year;
};

int main()
{
  // Old Way
  Date stud1;
  Date stud2;
  //...
  Date stud25;

  //New Way
  Date bdays[25];

  bdays[0].month = 11;
  bdays[0].day = 30;
  bdays[0].year = 1997;

  //...

  bdays[24].month = 7;
  bdays[24].day = 21;
  bdays[24].year = 2005;

  for (int index = 0; index < 25; ++index)
  {
    cout << bdays[index].month << '/'
          << bdays[index].day << '/'
          <<bdays[index].year << endl;
  }
  return 0;
}

//Initializing a structure array

int main()
{
  Date bdays[25] = {
                      {11, 30, 1997}; //[0]
                      {7, 21, 2005}   //[1]
                    }
};
