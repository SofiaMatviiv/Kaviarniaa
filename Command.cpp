#include"Command.h"

#include <iostream>

#include <fstream>
#include <string>
using namespace std;

void Command::AddBarista(Barista& barista)
{
    br.Add(barista);
}

void Command::AddDeliverler(Deliverler& deliver)
{
    hr.Add(deliver);
}
void Command::AddCustomer(Customer& customer)
{
    cr.Add(customer);
}



void Command::AddBrandfood(Brandfood& brandfood)
{
    brfd.Add(brandfood);
}


void Command::ShowAll(string all)
{
    if (all == "Barista") {
        for (int i = 0;i < br.enti().size();i++) {
            (br.enti()[i])->WritetoCons();
        }
    }

    else if (all == "Deliverler") {
        for (int i = 0;i < hr.enti().size();i++) {
            (hr.enti()[i])->WritetoCons();
        }
    }
    else if (all == "Customer") {
        for (int i = 0;i < cr.enti().size();i++) {
            (cr.enti()[i])->WritetoCons();
        }
    }
    else if (all == "Brandfood") {
        for (int i = 0;i < brfd.enti().size();i++) {
            (brfd.enti()[i])->WritetoCons();
        }
    }
}
void Command::MaxRating() {
    int max = caf[0].rate;
    int ind = 0;
    for (int i = 1; i < caf.size(); i++) {
        if (max < caf[i].rate) {
            max = caf[i].rate;
            ind = i;
        }

    }
    cout << "With the highest rating is: " << endl << endl;

    caf[ind].WritetoCons();
    cout << endl;
}
void Command::ChangeRating()
{
    cout << "Enter the name which rating you want to change : " << endl;
    int rating;
    string name;
    cin >> name;
    for (int i = 0; i < caf.size(); i++) {
        if (caf[i].nazva == name) {
            cout << "Your mark from 1-5: " << endl;
            cin >> rating;
            caf[i].rate = rating;
            break;
        }
    }
}
//void Command::KaviarniaFile() {
//    KaviarniaRepository kr;
//    kr.ReadFromStorage();
//}
//void Command::AddKaviarnia() {
//    KaviarniaRepository kr;
//    kr.WriteToStorage();
//}
//void Command::Writekaviarnia() {
//    KaviarniaRepository kr;
//    kr.Writekaviarnia();
//}
//
//void Command::Rating() {
//    KaviarniaRepository kr;
//    kr.Rate();
//}
//void Command::changeRating() {
//    KaviarniaRepository kr;
//    kr.ChangeRate();
//
//}
//
//void Command::BaristaFile() {
//    HumanRepository hr;
//    hr.ReadFromStorage();
//}
//void Command::Writebaristas() {
//    HumanRepository hr;
//    hr.Writebarista();
//}
//void Command::AddBarista() {
//    HumanRepository hr;
//    hr.WriteToStorage();
//}
//
//
//void Command::DeliverlerFile() {
//    HumanRepository hr;
//    hr.DeliverlerRead();
//}
//
//void Command::Writedeliverler() {
//    HumanRepository hr;
//    hr.Writebarista;
//}
//
//
//
//void Command::BrandfoodFile() {
//    ifstream fin2("Brandfood.txt");
//    string cafe;
//    string brfood;
//    int price;
//
//    if (!fin2)
//    {
//        cout << (" file is not open ");
//        exit(1);
//    }
//
//    while (fin2) {
//
//        if (fin2 >> cafe >> brfood >> price)
//        {
//            Brandf bf;
//
//            bf.InfBrandfood(cafe, brfood, price);
//            BrandfCommand.push_back(bf);
//        }
//
//    }
//    fin2.close();
//
//}
//
//
//
//void Command::Writebrandf() {
//    for (int i = 0; i < BrandfCommand.size(); i++) {
//        BrandfCommand[i].WritetoCons();
//        cout << endl;
//
//
//    }
//}
//
//
//
////void Command::Delivery() {
////    string cafe;
////
////    cout << "Write the name of cafe in which you want to make an offer: " << endl;
////    cin >> cafe;
////    //for (int i = 0; i < KaviarniaRep.size(); i++) {
////
////    //    if (cafe == KaviarniaRep[i].nazva) {
////    //        KaviarniaRep.erase(KaviarniaRep.begin() + i);
////    //    }
////    //}
////    ofstream fout("Customer.txt", ios_base::app);
////
////
////    if (!fout)
////    {
////        cout << ("file is not openned ");
////        exit(1);
//    }
//    else {
//        string firstName;
//        string secondName;
//        string address;
//        string offer;
//        cout << "Enter your Name: " << endl;
//        cin >> firstName;
//        fout << firstName;
//        fout << " ";
//        cout << "Enter your Second Name: " << endl;
//        cin >> secondName;
//        fout << secondName;
//        fout << " ";
//        cout << "Enter your Address: " << endl;
//        cin >> address;
//        fout << address;
//        fout << " ";
//        cout << "Please, make your offer: " << endl;
//        cin >> offer;
//        fout << offer;
//        fout << " ";
//        fout << endl;
//        cout << "\n-----Your order has been successfully accepted----\n " << endl;
//    }
//
//    fout.close();
//}