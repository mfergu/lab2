#include "Polynomial.h"
#include <iostream>
#include <iomanip>
using namespace std;

Polynomial::Polynomial()
{
  cout << " Polynomial default constructor\n";
}

void Polynomial::incrementBy(int c, int p)
{
  arrPairs[p].power += p;
  arrPairs[p].constant += c;
}
  
Polynomial::~Polynomial()
{
  cout << " Polynomial default destructor\n";
  delete [] arrPairs;
}

int Polynomial::pairCount = 0;

Polynomial* Polynomial::arrPairs = new Polynomial [100];
