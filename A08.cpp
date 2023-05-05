/*
Sean Harrington
CS161
*/


#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;

typedef struct stTemperature
{
	string month;
	double low;
	double high;
}Temperature;

int averageHigh(Temperature aTemperature[], int how_many)
{
	int high = aTemperature[0].high;
	for (int i = 1; i < how_many; i++)
	{
            if (aTemperature[i].high > high)
                high = aTemperature[i].high;
	}
	return high;
}

int averageLow(Temperature aTemperature[], int how_many)
{
	int low = aTemperature[0].low;
	for (int i = 1; i < how_many; i++)
	{
		if (aTemperature[i].low < low)
            low = aTemperature[i].low;
	}
	return low;
}

void loadData(ifstream &infile, Temperature aTemperature[], int &size)
{
	int i = 0;
	if (infile)
	{
		while (i < size)
		{
			infile >> aTemperature[i].month;
			infile >> aTemperature[i].low;
			infile >> aTemperature[i].high;
			i++;
		}
	}

	else
	{
		cout << "File not exist" << endl;
		exit(1);
	}
}

int main()
{
	Temperature aTemperature[12];
	int size = 12;

	ifstream infile("temps.txt");
	loadData(infile, aTemperature, size);

    int high = averageHigh (aTemperature, size);
	cout << "Highest temperature in current year : " << high << endl;
	for (int i = 0; i < size; i++)
        if (aTemperature[i].high == high)
            cout << aTemperature[i].month << endl;

    int low = averageLow (aTemperature, size);
	cout << "Lowest temperature in current year : " << low << endl;
	for (int i = 0; i < size; i++)
        if (aTemperature[i].low == low)
            cout << aTemperature[i].month << endl;
}
