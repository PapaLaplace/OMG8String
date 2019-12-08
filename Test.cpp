//stdlib
#include <fstream>


//header
#include "omg8str.h"


using namespace std;




//Test
int main()
{
	//1) Ініціалізація за допомогою std::string
	omg8str s("c plus plus");
	cout << "1) " << s << " (prints string s)" << endl;


	//2) Введення
	omg8str a;
	cout << "2) Enter a string: ";
	cin >> a;
	cout << a << endl;


	//3) Взяття i-го символу
	char c = s[3];
	cout << "3) " << c << " (3rd symbol)" << endl;


	//4) Видалення підрядку
	s.del(2, 6);
	cout << "4) " << s << " (deleted substring of elements 3 to 6)" << endl;


	//5) Вставка підрядку
	s.insert(omg8str("plus"), 2);
	cout << "5) " << s << " (added string \"plus\" )" << endl;


	//6) Копіювання підрядку
	cout << "6) " << s.slice(0, 3) << " (taken slice of elements 1 to 3)" << endl;


	//7) Пошук підрядку
	cout << "7) " << s.isin(omg8str("plus")) << " (show the position of substring \"plus\" ocurring in s)" << endl;


	//8) Конкатенація
	omg8str e(" plus");
	cout << "8) " << s + e << " (concatenates s with \"plus\")" << endl;


	//9) Чи є чисом?
	omg8str s1("10101");
	omg8str s2("A4F6");
	cout << "9)" << endl;
	cout << "10101 in base 2: " << isnum(s1, 2) << endl;
	cout << "A4F6 in base 2: " << isnum(s2, 2) << endl;
	cout << "A4F6 in base 16: " << isnum(s2, 16) << endl;



	//10) Переведення
	omg8str s3("1995");
	cout << "10)" << endl;
	cout << "10101 from 2 to 16: " << convert(s1, 2, 16) << endl;
	cout << "A4F6 from 16 to 10: " << convert(s2, 16, 10) << endl;
	cout << "1995 16 to 2: " << convert(s3, 16, 2) << endl;


	//11) Заміна символу
	s.change(2, '+');
	cout << "11) " << s << " (changes 3rd symbol to \"+\")" << endl;


	//12) Додавання до кінця і початку
	s.insert('a');
	s.insert('a', s.length());
	cout << "12) " << s << " (adds \"a\" to both sides of the string)" << endl;


	//13) Запис у файл
	ofstream writter;
	writter.open("Out.txt");


	writter << s;
	writter.close();
	cout << "13) string s has been written into file" << endl;


	//14) Читання з файлу
	ifstream reader;
	reader.open("In.txt");


	omg8str str;


	reader >> str;
	reader.close();
	cout << "14) " << str << " (string \"OMG8string!\" read from file)" << endl;
}


