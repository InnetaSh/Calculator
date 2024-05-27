#include "Train.h"

Train::Train(const int& num, const int& h, const int& min, const string& station) :NumberTrain(num)
{
	time.Hour = h;
	time.Minut = min;
	Station = station;
}

void Train::Print()
{
	cout << "Nomer poizda: " << NumberTrain << "\n";
	cout << "Chas vidpravlennia: " << time.Hour << " god, " << time.Minut << "hv\n";
	cout << "Stancia: " << Station << "\n";
}

int Train::getNumber()
{
	return NumberTrain;;
}

string Train::getStation()
{
	return Station;
}
