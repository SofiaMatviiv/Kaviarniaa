//#include "KaviarniaRepository.h"
//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//bool KaviarniaRepository::Add(Kaviarnia& kv)
//{
//    return Repository::Add(&kv);
//}
//
//void KaviarniaRepository::ReadFromFile()
//{
//    ifstream fin3("Kaviarnia.txt");
//      string nazva; 
//      string address;
//      int avprice;
//    int rate;
//
//    if (!fin3)
//    {
//        cout << (" file is not open ");
//        exit(1);
//    }
//
//    while (fin3) {
//
//        if (fin3 >>nazva>>address>>avprice>>rate)
//        {
//            Kaviarnia* d = new Kaviarnia(nazva, address,avprice,rate);
//            Add(*d);
//        }
//
//    }
//    fin3.close();
//}
//
//void KaviarniaRepository::WriteToFile()
//{
//    ofstream fout("Kaviarvia.txt", ios::out);
//    for (int i = 0;i < en.size();i++) {
//        fout << ((Kaviarnia*)en[i])->StrData();
//
//    }
//    fout.close();
//}
//
//KaviarniaRepository::KaviarniaRepository(bool info) :Repository(info)
//{
//    ReadFromFile();
//}
//void KaviarniaRepository::Rate() {
//    int max = KaviarniaRep[0].rate;
//    int ind = 0;
//    for (int i = 1; i < KaviarniaRep.size(); i++) {
//        if (max < KaviarniaRep[i].rate) {
//            max = KaviarniaRep[i].rate;
//            ind = i;
//        }
//
//    }
//    cout << "A cafe with the highest rating is: " << endl << endl;
//
//    KaviarniaRep[ind].WritetoCons();
//    cout << endl;
//}
//void KaviarniaRepository::ChangeRate() {
//    cout << "Enter the cafe which rating you want to change : " << endl;
//    int rating;
//    string name;
//    cin >> name;
//    for (int i = 0; i < KaviarniaRep.size(); i++) {
//        if (KaviarniaRep[i].nazva == name) {
//            cout << "Your mark from 1-5 for this cafe: " << endl;
//            cin >> rating;
//            KaviarniaRep[i].rate = rating;
//            break;
//        }
//    }
//}