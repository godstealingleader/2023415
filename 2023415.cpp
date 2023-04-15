#include <iostream>
//#include <cstring>

int main()
{
	using namespace std;
	const int name_lenth = 20;
	char First_name[name_lenth]{ 0 };
	char Last_name[name_lenth]{ 0 };
	cout << "please enter your frist name:"; cin.getline(First_name,name_lenth);
	cout << "please enter your last name:"; cin.getline(Last_name,name_lenth);
	cout << "hello! " << Last_name << ", " << First_name;
	return 0;
}