#include "clases.h"

Integer::Integer(){};

Integer::Integer(int value)
: value(value) {}  ;

Integer::Integer(const Integer& other)
{
  value= other.value;
};

Integer Integer :: operator=(const Integer& other)
{
};


Integer Integer:: operator+(int value)
{
}
;

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
