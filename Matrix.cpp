#include "Matrix.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void Matrix::wypisz_tablice() // do celow sprawdzania poprawnosci dzialani programu 
{
	for (int i = 0; i < liczba_kolumn; i++)
	{
		cout << endl;
		for (int j = 0; j < liczba_wierszy; j++)
		{
			cout << tablica[i][j] <<" " ;

		}
	}
}


void Matrix::insertValue(int numer_kolumny_wpisany, int numer_wiersza_wpisany, double wartosc)
{
    if (numer_wiersza_wpisany >= 0 && numer_kolumny_wpisany >= 0 && numer_wiersza_wpisany < liczba_wierszy && numer_kolumny_wpisany < liczba_kolumn)
    {
        tablica[numer_kolumny_wpisany][numer_wiersza_wpisany] = wartosc;
    }
    else
    {
        flag = true; 
    }
}
void Matrix::resetFail()
{
    flag = false;

}
bool Matrix::fail()
{
    return flag;
}

double Matrix::getValue(int numer_kolumny_wpisany, int numer_wiersza_wpisany)
{
	if (numer_wiersza_wpisany>=0 && numer_kolumny_wpisany>=0 && numer_wiersza_wpisany<liczba_wierszy && numer_kolumny_wpisany<liczba_kolumn)
	{
		return tablica[numer_kolumny_wpisany][numer_wiersza_wpisany];
	}
	else
	{
		flag = true;
		return 0;
	}
}
void Matrix::rand(int min, int max) 
{
	for (int i = 0; i < liczba_kolumn; i++)
		for (int j = 0; j < liczba_wierszy; j++)
		{
			tablica[i][j] = min + (std::rand() / (double)RAND_MAX) * (max - min);
		}


}