#include <iostream>
#include "stonewt1.h"

int main()
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double p_wt = poppins;
	cout << "double������ ��ȯ =>";
	cout << "Poppins: " << p_wt << "�Ŀ��\n";
	cout << "int������ ��ȯ => ";
	cout << "Poppins: " << int(poppins) << "�Ŀ��\n";
	return 0;
}