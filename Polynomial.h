#ifndef Polynomial_h
#define Polynomial_h
#include <iostream>
    
class Polynomial
{
  public:
    Polynomial(); //initialize the polynomial to zero
    void incrementBy(int, int); //increment the current polynomial by cx^p
    
    ~Polynomial();
  private:
    int constant, power;
    static int pairCount;
    static Polynomial *arrPairs;
};

#endif
