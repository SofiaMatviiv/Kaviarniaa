#include"HumanRepository.h"
#include <fstream>
#include <string>
using namespace std;


bool HumanRepository::Add(Deliverler& der)
{
    return Repository::Add(&der);
}

void HumanRepository::ReadFromFile()
    {
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
                Deliverler* d= new Deliverler(FirstName,SecondName,maxtime);
                Add(*d);
            }

        }
        fin3.close();
    }

void HumanRepository::WriteToFile()
{
    ofstream fout("Deliverler.txt", ios::out);
    for (int i = 0;i < en.size();i++) {
        fout << ((Deliverler*)en[i])->StrData();

    }
    fout.close();
}

HumanRepository::HumanRepository(bool info):Repository(info)
{
    ReadFromFile();
}
