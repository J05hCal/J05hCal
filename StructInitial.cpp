struct Car
{
  char     make[256];
  char     model[256];
  double   mileage;
};

int main()
{
  Car myCar = {"Toyota", "Camry", 217000};

  return 0;
}
