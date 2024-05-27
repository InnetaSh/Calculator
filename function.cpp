#include<iostream>
#include"function.h"

using namespace std;


void WriteFile(char* str)
{

	FILE* pf1;
	fopen_s(&pf1, "Text.txt", "wt");
	if (pf1)
	{
		fputs(str, pf1);
		fclose(pf1);
	}
	else
	{
		cout << "Error";
	}


}

void ReadFile(int n)
{
	
	FILE* pf1;
	fopen_s(&pf1, "Text.txt", "rt");
	FILE* pf2;
	fopen_s(&pf2, "CezarShifr.txt", "wt");

	if (pf1 && pf2)
	{
		char ch;
		while ((ch = fgetc(pf1)) != EOF)
		{
			if (isalpha(ch) != 0)
				ch += n;

			fputc(ch, pf2);
		}
		fclose(pf1);
		fclose(pf2);
	}
	else
	{
		cout << "Error";
	}
}