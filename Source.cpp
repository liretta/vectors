#include "A.h"
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

void Mem();

int main()
{
	{
		vector <A> vA;

		///initialize and show
		for (int i = 0; i < 25; ++i)
			vA.push_back(A(rand() % 20));

		vector <A>::iterator iter, itEnd;
		for (iter = vA.begin(), itEnd = vA.end(); iter < itEnd; ++iter)
			std::cout << setw(3) << *iter;
		cout << endl;

		//search
		vector <A>::iterator it15, it7;
		it15 = std::find(vA.begin(), vA.end(), 15);
		if (it15 != vA.end())
			cout << "Founded = " << *it15 << endl;
		else
			cout << "Not founded, sorry(" << endl;

		//for test - trying to find another number and cheking: is left-operand reali on left side
		
		it7 = std::find(vA.begin(), vA.end(), 7);
		if (it7 != vA.end())
			cout << "Founded = " << *it7 << endl;
		else
			cout << "Not founded, sorry(" << endl;

		vector <A>::iterator itLeft=it7, itRight=it15;
		if (it7 > it15)
		{
			itLeft = it15;
			itRight = it7;
		}

		//looking for distance
		int nCount = itRight - itLeft + 1;
		cout << "nCount= " << nCount << endl;
		nCount = std::distance(itLeft, itRight) + 1;
		cout << "nCount from function = " << nCount << endl;
		
		//create new vector
		vector <A> vA2(nCount);
		cout << "VA-2" << endl;
		for (iter = vA2.begin(), itEnd = vA2.end(); iter < itEnd; ++iter)
			cout << ' ' << *iter;
		cout << endl;

		cout << "VA size: " << vA.size() << " VA capacity: " << vA.capacity() << endl;
		cout << "VA2 size = " << vA2.size() << " VA2 capacity = " << vA2.capacity() << endl;

		//copy to new vector
		cout << "copy" << endl;
		std::copy(it7, it15 + 1, vA2.begin());
		cout << "VA2 after copy" << endl;

		for (iter = vA2.begin(), itEnd = vA2.end(); iter < itEnd; ++iter)
			cout << ' ' << *iter;
		cout << endl;
		cout << "VA2 after copy: " << vA2.size() << " VA2 after copy: " << vA2.capacity() << endl;

		//sort
		std::sort(vA2.begin(), vA2.end());
		cout << "VC2 after sort" << endl;

		for (iter = vA2.begin(), itEnd = vA2.end(); iter < itEnd; ++iter)
			cout << ' ' << *iter;
		cout << endl;
		cout << "VC2 after sort: " << vA2.size() << " VC2 after sort: " << vA2.capacity() << endl;

		cout << endl;

	}

	Mem();
	system("pause");
	return 0;
}



void Mem()
{

	if (_CrtDumpMemoryLeaks())
		std::cout << "Memory leaks!" << std::endl;
	else
		std::cout << "mem ok :-)" << std::endl;
}