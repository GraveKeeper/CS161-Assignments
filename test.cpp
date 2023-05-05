#include <iostream>
#include <string>
using namespace std;
const int PRIME_NUM = 11;
int main()
{
const int SECRET = 17;
string name;
int id;
int num;
int mysteryNum;
cout << "Enter last name: ";
cin >> name;
cout << endl;
cout << "Enter a two digit number: ";
cin >> num;
cout << endl;
id = 100 * num + SECRET;
cout << "Enter a positive integer less than 1000: ";
cin >> num;
cout << endl;
mysteryNum = num * PRIME_NUM - 3 * SECRET;
cout << "Name: " << name << endl;
cout << "Id: " << id << endl;
cout << "Mystery number: " << mysteryNum << endl;
return 0;
}
