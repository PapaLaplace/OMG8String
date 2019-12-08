#ifndef OMG8STR_H //Захист від небажаного
#define OMG8STR_H //перевизначення об'єктів


//stdlib
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <sstream>




//class (рядок у кодуванні omg8)
class omg8str
{
private:
	//attributes
	int len; //довжина
	std::vector <unsigned long int> INT; //вектор 128-розрядів


	//methods
	static std::vector <unsigned long int> to128(std::string); //перетворення рядка у вектор 128-розрядів
	std::string tostring() const; //розкодування рядка
	omg8str(std::vector <unsigned long int>); //конструктор, що визначає рядок omg8 на основі вектора 128-розрядів


public:
	omg8str (std::string s = ""); //конструктор, що кодує string за допомогою omg8
	int length() const; //метод, що повертає довжину рядка
	void change (int, unsigned char);
	omg8str slice (int, int b = -1); //функція отримання зрізу
	void insert (omg8str, int position = 0); //функція вставки підрядка
	void insert(unsigned char, int position = 0); //функція вставки символа
	void del (int, int); //функція видалення зрізу
	int isin (omg8str); //функція пошуку підрядка (повертає першу позицію, з якої починається шуканий підрядок)


	//overloading
	friend std::ostream& operator << (std::ostream&, const omg8str&); //перевантаження << для виведення
	friend std::istream& operator >> (std::istream&, omg8str&); //перевантаження >> для введення
	unsigned char operator [] (int); //Перевантаження [] для взяття і-го елемента
	friend bool operator == (const omg8str&, const omg8str&); //Перевантаження == для порівняння
	friend omg8str operator + (const omg8str&, const omg8str&); //Перевантаження + для конкатенації
	friend omg8str& operator += (omg8str&, const omg8str&); //Перевантаження += для конкатенації з рядком
	friend omg8str& operator += (omg8str&, const unsigned char&); //Перевантаження += для приєднання символа
	friend omg8str operator * (int, const omg8str&); //Перевантаження * для множення стрічки на ціле число
	operator int() const; //Перевантаження int()
}; 




//functions
bool isnum(omg8str, int base = 10);
omg8str convert(omg8str, int from, int to = 10);
#endif