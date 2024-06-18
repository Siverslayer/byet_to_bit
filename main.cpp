#include <iostream>
using namespace std;

int main()
{
	// متغيرات
	/*
	استخدمت
	short
	بدلاً من
	int
	لتوفير مساحة الذاكرة التي تستهلكها المعالجة؛
	حيث أن
	short = 2 بايت
	و
	int = 4 بايت
	*/
	short bit = 8, byte;
	while (true)
	{
		// طلب إدخال عدد البايتات
		cout << "enter the byte: ";
		cin >> byte;

		// التحقق من نطاق قيمة byte
		if (byte > 32767)
		{
			cout << "error: out of range\n";
		}
		else if (byte == 0)
		{
			cout << "error: you can not use 0\n";
		}
		else if (byte <= -1)
		{
			cout << "error: you can not use -1 or lower\n";
		}

		else
		{
			// التحويل إلى عدد البتات
			cout << "the byte " << byte << " = " << " bit " << bit * byte << "\n";
		}
	}


	return 0;
}
