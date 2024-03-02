#pragma once
#include <iostream>
using namespace std;
class Matrix
{
private:
    int liczba_kolumn;
    int liczba_wierszy;
    bool flag = false;
    double** tablica;
  
public:
   void insertValue(int, int, double);
   double getValue(int, int);
   bool fail();
   void resetFail();
   void rand(int min=-10,int max=10);
   void wypisz_tablice();


   Matrix(int liczba_kolumn, int liczba_wierszy) : liczba_kolumn(liczba_kolumn), liczba_wierszy(liczba_wierszy)
   {
       if (liczba_kolumn > 0 && liczba_wierszy > 0)
       {
           tablica = new double* [liczba_kolumn];
           for (int i = 0; i < liczba_kolumn; i++)
           {
               tablica[i] = new double[liczba_wierszy](); // Inicjalizacja zerami
           }
       }
       else
       {
           flag = true;
           tablica = nullptr;
       }
   }
   Matrix(const Matrix& other) : liczba_kolumn(other.liczba_kolumn), liczba_wierszy(other.liczba_wierszy) {
       if (liczba_kolumn > 0 && liczba_wierszy > 0)
       {
           tablica = new double* [liczba_kolumn];
           for (int i = 0; i < liczba_kolumn; i++) {
               tablica[i] = new double[liczba_wierszy];
               for (int j = 0; j < liczba_wierszy; j++) {
                   tablica[i][j] = other.tablica[i][j];
               }
           }
       }
       else
       {
           flag = true;
           tablica = nullptr;
       }
   }
   ~Matrix() {
       if (tablica != nullptr) {
           for (int i = 0; i < liczba_kolumn; i++) {
               delete[] tablica[i];
           }
           delete[] tablica;
       }
   }

};

