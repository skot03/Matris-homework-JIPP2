Zadanie domowe JIPP2- proszę nie kopiować odpowiedzi. Zadanie udostępnione po otrzymaniu zgody od prowadzącego !
# Matris-homework-JIPP2
description on readme
Stwórz klasę Matrix. Jej zadaniem będzie przechowywanie tablicy z wartościami typu double. Będzie ona posiadać tylko jeden konstruktor przyjmujący dane typu int liczbę kolumn i liczbę wierszy (w takiej kolejności) oraz konstruktor kopiujący.

Klasa będzie posiadać następujące metody:

    insertValue(numer kolumny, numer wiersza, nowa wartość) - ustawianie wartości na podanym indeksie
    getValue(numer kolumny, numer wiersza) - pobieranie wartości z kolumny. Próba pobrania wartości spoza tablicy będzie zwracać wartość 0.
    fail() - metoda zwracająca informację, czy wystąpił jakiś błąd (próba dostania się poza zakres tablicy)
    resetFail() - wyzerowywanie flagi błędu
    rand() - metoda ustawiająca losowe wartości w tablicy.

Doprecyzowanie

    W zadaniu nie można używać kontenerów (w żadnym pliku .cpp i .h).
    Konstruktor powinien wypełnić tablicę wartościami 0.
    Zadanie powinno zostać wykonane w podziale na pliki .cpp i .h
