// GenMatr.cpp : Defines the entry point for the console application.
//

// GenMatr.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>


using namespace std;
const int n = 10000;
int GM[n][n];
int main()
{
	int p = 0;
	ofstream fout("matr10000.txt");
	
	srand(1);
	for (int i = 0; i<n; i++)
	{
		for (int j = i; j<n; j++)
		{
			if (i != j)
				p = rand() % 2;
			else p = 0;
			GM[i][j]= p;
			GM[j][i] = p;
	
		}
	
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{	
			fout << GM[i][j]<< " ";
		}
		fout << endl;
	}
	fout.close();
	system("pause");
	return 0;

}


