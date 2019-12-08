//stdlib
#include <fstream>


//header
#include "omg8str.h"


using namespace std;




//Test
int main()
{
	//1) ����������� �� ��������� std::string
	omg8str s("c plus plus");
	cout << "1) " << s << endl;


	//2) ��������
	omg8str a;
	cin >> a;
	cout << "2) " << a << endl;


	//3) ������ i-�� �������
	char c = s[3];
	cout << "3) " << c << endl;


	//4) ��������� �������
	s.del(2, 6);
	cout << "4) " << s << endl;


	//5) ������� �������
	s.insert(omg8str("plus"), 2);
	cout << "5) " << s << endl;


	//6) ��������� �������
	cout << "6) " << s.slice(0, 3) << endl;


	//7) ����� �������
	cout << "7) " << s.isin(omg8str("plus")) << endl;


	//8) ������������
	omg8str e(" plus");
	cout << "8) " << s + e << endl;


	//9) �� � �����?
	omg8str s1("10101");
	omg8str s2("A4F6");
	cout << "9)" << endl;
	cout << "10101 in base 2: " << isnum(s1, 2) << endl;
	cout << "A4F6 in base 2: " << isnum(s2, 2) << endl;
	cout << "A4F6 in base 16: " << isnum(s2, 16) << endl;



	//10) �����������
	omg8str s3("1995");
	cout << "10)" << endl;
	cout << "10101 from 2 to 16: " << convert(s1, 2, 16) << endl;
	cout << "A4F6 from 16 to 10: " << convert(s2, 16, 10) << endl;
	cout << "1995 16 to 2: " << convert(s3, 16, 2) << endl;


	//11) ����� �������
	s.change(2, '+');
	cout << "11) " << s << endl;


	//12) ��������� �� ���� � �������
	s.insert('a');
	s.insert('a', s.length());
	cout << "12) " << s;
}


