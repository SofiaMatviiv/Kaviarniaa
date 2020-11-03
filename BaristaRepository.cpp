#include"BaristaRepository.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool BaristaRepository::Add(Barista& bar)
{
    return Repository::Add(&bar);
}

void BaristaRepository::ReadFromFile()
{
    ifstream fin2("Barista.txt");
    string work;
    string FirstName;
    string SecondName;
    int mark;

    if (!fin2)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin2) {

        if (fin2 >> work >>FirstName >> SecondName >> mark)
        {
            Barista* d = new Barista(work, FirstName, SecondName, mark);
            Add(*d);
        }

    }
    fin2.close();
}

void BaristaRepository::WriteToFile()
{
    ofstream fout("Barista.txt", ios::out);
    for (int i = 0;i < en.size();i++) {
        fout << ((Barista*)en[i])->StrData();

    }
    fout.close();
}

BaristaRepository::BaristaRepository(bool info) :Repository(info)
{
    ReadFromFile();
}