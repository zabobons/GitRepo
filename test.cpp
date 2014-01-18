#include "add.h"
#include<iostream>
#include"multiply.h"
#include "pow.h"
using namespace std;
void areEquals(double expexted, double get)
{
	if (expexted != get)
	{
		cout << "Expected was " << expexted << " but is " << get << endl;
	}
}
int main()
{
	areEquals(4, add(2, 2));
	areEquals(8,mnozenie(4,2));
	areEquals(16,pow(2,4));
	
	 cout<< "Test end" <<endl;
	return 0;
}
