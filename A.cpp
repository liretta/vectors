#include "A.h"

A::A(int a):ma(a)
{/* std::cout << "Constructor A for " << this << std::endl;*/ }

A::~A()
{
	/*std::cout << "Destructor A for " << this << std::endl;*/
}

std::ostream & operator<<(std::ostream &out, const A&a)
{
	out << a.ma;
	return out;
};

bool A::operator==(const A&a)
{
	return(this->ma == a.ma);
}

bool A::operator<(const A&a)
{
	return(this->ma < a.ma);
}