#pragma once
#include <iostream>


class A
{
private:
	int ma;
public:
	A(int a = 0);
	~A();
	friend std::ostream & operator<<(std::ostream &out, const A&a);
	bool operator==(const A&a);
	bool operator<(const A&a);

};
