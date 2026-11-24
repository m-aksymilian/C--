#include <iostream>
using namespace std;

int main(){
    int a{};         //zainicjowanie zmiennej a
    int *aPtr{&a};   //stworzenie wskaźnika o nazwie "aPtr" i przypisanie mu adresu do zmienner a
    cin >> *aPtr;    //wprowadzenie wartosci z klawiatury do zmiennej a poprzez urzycie wskaźnika
    cout << a;       //wypisanie a (sprawdzenie czy wszystko działa poprawnie)
}