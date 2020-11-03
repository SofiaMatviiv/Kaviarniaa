#include"BrandfoodRepository.h"
#include <fstream>
#include <string>
#include<iostream>
using namespace std;


bool BrandfoodRepository::Add(Brandfood& brf)
{
    return Repository::Add(&brf);
}

void BrandfoodRepository::ReadFromFile()
{
    ifstream fin3("Brandfood.txt");
    string nazva;
    int rate;

    int price;
    string root;
    if (!fin3)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin3) {

        if (fin3 >>nazva>>price>>root>>rate)
        {
            Brandfood* d = new Brandfood(nazva,price,rate,root);
            Add(*d);
        }

    }
    fin3.close();
}

void BrandfoodRepository::WriteToFile()
{
    ofstream fout("Brandfood.txt", ios::out);
    for (int i = 0;i < en.size();i++) {
        fout << ((Brandfood*)en[i])->StrData();

    }
    fout.close();
}
BrandfoodRepository::BrandfoodRepository(bool info) :Repository(info)
{
    ReadFromFile();
}