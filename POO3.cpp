#include "pch.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int nume_persoana;

    // pt citirea nr de persoane
    cout << "Numar persoane: ";
    cin >> nume_persoana;

    // pentru stocarea datelor
    vector<pair<string, int>> memorie;

    // introducere nume si varsta
    for (int i = 0; i < nume_persoana; i++) {
        string nume;
        int varsta;

        cout << "Nume: " ;
        cin >> nume;

        cout << "Varsta: " ;
        cin >> varsta;

        memorie.push_back(make_pair(nume, varsta));
    }

    // pt afisare date introduse
    cout << "Afisare rezultate:" <<endl;
    for (int i = 0; i < nume_persoana; i++) {
        cout  << memorie[i].first << " are " << memorie[i].second << " ani." << endl;
    }

    return 0;
}
