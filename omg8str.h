#ifndef OMG8STR_H //������ �� ����������
#define OMG8STR_H //�������������� ��'����


//stdlib
#include <iostream>
#include <vector>
#include <string>
#include <bitset>
#include <sstream>




//class (����� � �������� omg8)
class omg8str
{
private:
	//attributes
	int len; //�������
	std::vector <unsigned long int> INT; //������ 128-�������


	//methods
	static std::vector <unsigned long int> to128(std::string); //������������ ����� � ������ 128-�������
	std::string tostring() const; //������������ �����
	omg8str(std::vector <unsigned long int>); //�����������, �� ������� ����� omg8 �� ����� ������� 128-�������


public:
	omg8str (std::string s = ""); //�����������, �� ���� string �� ��������� omg8
	int length() const; //�����, �� ������� ������� �����
	void change (int, unsigned char);
	omg8str slice (int, int b = -1); //������� ��������� ����
	void insert (omg8str, int position = 0); //������� ������� �������
	void insert(unsigned char, int position = 0); //������� ������� �������
	void del (int, int); //������� ��������� ����
	int isin (omg8str); //������� ������ ������� (������� ����� �������, � ��� ���������� ������� �������)


	//overloading
	friend std::ostream& operator << (std::ostream&, const omg8str&); //�������������� << ��� ���������
	friend std::istream& operator >> (std::istream&, omg8str&); //�������������� >> ��� ��������
	unsigned char operator [] (int); //�������������� [] ��� ������ �-�� ��������
	friend bool operator == (const omg8str&, const omg8str&); //�������������� == ��� ���������
	friend omg8str operator + (const omg8str&, const omg8str&); //�������������� + ��� ������������
	friend omg8str& operator += (omg8str&, const omg8str&); //�������������� += ��� ������������ � ������
	friend omg8str& operator += (omg8str&, const unsigned char&); //�������������� += ��� ��������� �������
	friend omg8str operator * (int, const omg8str&); //�������������� * ��� �������� ������ �� ���� �����
	operator int() const; //�������������� int()
}; 




//functions
bool isnum(omg8str, int base = 10);
omg8str convert(omg8str, int from, int to = 10);
#endif