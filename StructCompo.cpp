Struct Time
{
  int hours;
  int mins;
  int secs;
};


struct Date
{
  int month;
  int day;
  int year;
};

struct Tstamp
{
  Date dateVal;
  Time timeVal;
}

int main()
{
  Tstamp now;

  now.dateVal.month = 3;
  now.dateVal.day = 18;
  now.dateVal.year = 2024;
  now.timeVal.hours = 15;
  now.timeVal.mins = 9;
  now.timeVal.secs = 53;

  return 0;
}



int main()
{
  Tstamp bdays[25];

  for(int index = 0; index < 25; ++index)
  {
    cout << bdays[index].dateVal.month;
    //...
  }
  return 0;
}



struct File
{
  char   fname[256];
  Tstamp stamp;
  int    size;
};



int main()
{
  File directory[512] = {
                          { //beginning of [0]
                            "foo.txt",          //fname
                            { //beginning of stamp
                              {3, 27, 2012},  //dateVal
                              {13, 42, 52}    //timeVal
                            }, //end of stamp
                            3                 //size
                          } //end of [0]
                        };
  return 0;
}
