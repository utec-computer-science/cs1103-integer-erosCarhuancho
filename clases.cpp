#include "clases.h"

Integer::Integer(){};

Integer::Integer(int value)
: value(value) {}  ;

Integer::Integer(const Integer& other)
{
  value= other.value;
};

Integer::operator int()
{
  return this->value;
}

Integer Integer :: operator=(const Integer& other)
{
  this->value= other.value;
  return *this;
};


Integer Integer:: operator+(int value)
{
  return this->value+value;
};

std::ostream& operator <<(std::ostream& os, const Integer& a)
 {
  os << a.value;
  return os;
 }

std::istream& operator >>(std::istream& os, Integer& b)
 {
   os >>b.value;
   return os;
 }
