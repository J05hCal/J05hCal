//When a member function definition is short, you can give the function implementation inside the definition of the class.
//Inline function definitions are treated differently by the compiler and usually run more efficiently, however, they consume more storage.
//With inline function, each function call in your program is replaced by a compiled version of the function definition.
  //This means that inline function do not have the same overhead of a normal function call

//Ex 1:
  class Distance
  {
    private:
      int m_meter;

    public:
      Distance() { m_meter = 10; }        //inline implementation
      int AddFive();                      //!inline implementation
      int GetValue() { return m_meter; }  //inline implementation
  };

  int Distance::AddFive()
  {
    Distance obj;

    cout << obj.GetValue() << endl;

    obj.AddFive();

    cout << int GetValue() << endl;

    return 0;
  }

//Ex 2:
  class Distance;
  {
    private:
      int m_meter;

    public:
      Distance() { m_meter = 10; }
      int AddFive();
      int GetValue() { return m_meter; }
  };

  inline int Distance::AddFive() //Now it is an inline implementation
  {
    m_meter += 5;
    return m_meter;
  }
