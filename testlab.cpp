#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
int num;

cout << mystery(num) << endl;

}

int mystery(int num)
{
int y = 1;
if (num == 0)
return 1;
else if (num < 0)
return -1;
else
for(int count = 1; count < num; count++)
y = y * (num - count);
return y;
}
