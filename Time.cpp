#include "Time.h"

Time::Time()
{
	hour = 12;
	minut = 30;
	sec = 0;
}

void Time::Set_hour(int h)
{
	if (h >= 0 && h < 24)
		hour = h;
	else
		hour = 12;
}

int Time::Get_hour()
{
	return hour;
}

void Time::Set_minut(int m)
{
	if (m >= 0 && m < 60)
		minut = m;
	else
		minut = 30;
}

int Time::Get_minut()
{
	return minut;
}

void Time::Set_sec(int s)
{
	if (s >= 0 && s < 60)
		sec = s;
	else
		sec = 0;
}

int Time::Get_sec()
{
	return sec;
}