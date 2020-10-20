#include "Customer.h"
#include"Kaviarnia.h"
#include"Command.h"
#include"Brandfood.h"
#include"Human.h"
#include"Deliverler.h"
#include"Barista.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

void Command::KaviarniaFile() {
    ifstream fin("Kaviarnia.txt");
    string nazva;
    string address;
    int avprice;
    int rate;

    if (!fin)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin) {

        if (fin >> nazva >> address >> avprice >> rate)
        {
            Kaviarnia kv;

            kv.InfKaviarnia(nazva, address, avprice, rate);
            KaviarniaCommand.push_back(kv);
        }

    }
    fin.close();
}

void Command::BrandfoodFile() {
    ifstream fin2("Brandfood.txt");
    string cafe;
    string brfood;
    int price;

    if (!fin2)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin2) {

        if (fin2 >> cafe >> brfood >> price)
        {
            Brandf bf;

            bf.InfBrandfood(cafe, brfood, price);
            BrandfCommand.push_back(bf);
        }

    }
    fin2.close();

}


void Command::BaristaFile() {
    ifstream fin4("Barista.txt");
    string work;
    string fname;
    string sname;
    int rate;

    if (!fin4)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin4) {

        if (fin4 >> work >> fname >> sname >> rate)
        {
            Barista br;

            br.Information(work, fname, sname, rate);
            BaristaCommand.push_back(br);
        }

    }
    fin4.close();
}


void Command::Writekaviarnia() {
    for (int i = 0; i < KaviarniaCommand.size(); i++) {
        KaviarniaCommand[i].WritetoCons();
        cout << endl;
    }
}
void Command::Writebrandf() {
    for (int i = 0; i < BrandfCommand.size(); i++) {
        BrandfCommand[i].WritetoCons();
        cout << endl;


    }
}
void Command::Writebarista() {
    for (int i = 0; i < BaristaCommand.size(); i++) {
        BaristaCommand[i].WritetoCons();
        cout << endl;
    }
}


void Command::Delivery() {
    string cafe;

    cout << "Write the name of cafe in which you want to make an offer: " << endl;
    cin >> cafe;
    for (int i = 0; i < KaviarniaCommand.size(); i++) {

        if (cafe == KaviarniaCommand[i].nazva) {
            KaviarniaCommand.erase(KaviarniaCommand.begin() + i);
        }
    }
    ofstream fout("Customer.txt", ios_base::app);


    if (!fout)
    {
        cout << ("file is not openned ");
        exit(1);
    }
    else {
        string firstName;
        string secondName;
        string address;
        string offer;
        cout << "Enter your Name: " << endl;
        cin >> firstName;
        fout << firstName;
        fout << " ";
        cout << "Enter your Second Name: " << endl;
        cin >> secondName;
        fout << secondName;
        fout << " ";
        cout << "Enter your Address: " << endl;
        cin >> address;
        fout << address;
        fout << " ";
        cout << "Please, make your offer: " << endl;
        cin >> offer;
        fout << offer;
        fout << " ";
        fout << endl;
        cout << "\n-----Your order has been successfully accepted----\n " << endl;
    }

    fout.close();
}

void Command::DeliverlerFile() {
    ifstream fin3("Deliverler.txt");
    string FirstName;
    string SecondName;
    int maxtime;

    if (!fin3)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin3) {

        if (fin3 >> FirstName >> SecondName >> maxtime)
        {
            Deliverler d;

            d.Information(FirstName, SecondName, maxtime);
            DeliverlerCommand.push_back(d);
        }

    }
    fin3.close();
}

void Command::Writedeliverler() {
    for (int i = 0; i < DeliverlerCommand.size(); i++) {
        DeliverlerCommand[i].WritetoCons();
        cout << endl;
    }
}

void Command::Rating() {
    int max = KaviarniaCommand[0].rate;
    int ind = 0;
    for (int i = 1; i < KaviarniaCommand.size(); i++) {
        if (max < KaviarniaCommand[i].rate) {
            max = KaviarniaCommand[i].rate;
            ind = i;
        }

    }
    cout << "A cafe with the highest rating is: " << endl << endl;

    KaviarniaCommand[ind].WritetoCons();
    cout << endl;
}
void Command::changeRating() {
    cout << "Enter the cafe which rating you want to change : " << endl;
    int rating;
    string name;
    cin >> name;
    for (int i = 0; i < KaviarniaCommand.size(); i++) {
        if (KaviarniaCommand[i].nazva == name) {
            cout << "Your mark from 1-5 for this cafe: " << endl;
            cin >> rating;
            KaviarniaCommand[i].rate = rating;
            break;
        }
    }
}