#include <iostream>

using namespace std;

bool czyLiczbaPierwsza(int liczba)
{
    if (liczba <= 1)
        return false;

    for (int i = 2; i * i <= liczba; ++i)
    {
        if (liczba % i == 0)
            return false;
    }
    return true;
}


int main()
{
    int liczba;

    cout << "Podaj liczbe calkowita: "; cin >> liczba;

    if (czyLiczbaPierwsza(liczba))      cout << liczba << " jest liczba pierwsza." << endl;
    else                                cout << liczba << " nie jest liczba pierwsza." << endl;

    return 0;
}
