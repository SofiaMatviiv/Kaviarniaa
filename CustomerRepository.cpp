#include"CustomerRepository.h"
#include <fstream>
#include <string>
using namespace std;


bool CustomerRepository::Add(Customer& cust)
{
    return Repository::Add(&cust);
}

void CustomerRepository::ReadFromFile()
{
    ifstream fin3("Customer.txt");
    string FirstName;
    string SecondName;
    string address;
    string offer;

    if (!fin3)
    {
        cout << (" file is not open ");
        exit(1);
    }

    while (fin3) {

        if (fin3 >> FirstName >> SecondName >> address>>offer)
        {
            Customer* d = new Customer(FirstName, SecondName, address,offer);
            Add(*d);
        }

    }
    fin3.close();
}

void CustomerRepository::WriteToFile()
{
    ofstream fout("Customer.txt", ios::out);
    for (int i = 0;i < en.size();i++) {
        fout << ((Customer*)en[i])->StrData();

    }
    fout.close();
}

CustomerRepository::CustomerRepository(bool info) :Repository(info)
{
    ReadFromFile();
}