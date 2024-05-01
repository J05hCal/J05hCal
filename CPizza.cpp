class CPizza
{
  //order numbers
  int order1[large, med, small];
  int order2[large, med, small];
  int order3[large, med, small];

  //sizes
  int large = 20;
  int med = 15;
  int small = 10;

  double tax = 0.0775; //tax: %7.75

  int deliFee = 5;     //delivery fee
};

main()
{
  cout << "Enter the number of sizes for each order: \n";
  CPizza order1;

  CPizza order2(2, 1, 3);

  CPizza order3(order2);
}
