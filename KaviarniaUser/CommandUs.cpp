#include"CommandUs.h"

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

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
    else if (all == "Brandfood") {
        for (int i = 0;i < brfd.enti().size();i++) {
            (brfd.enti()[i])->WritetoCons();
        }
    }

}
void Command::AddCustomer(Customer& customer)
{
    cr.Add(customer);
}






//void Command::MaxRating() {
//    int max = bars[0].mark;
//    int ind = 0;
//    for (int i = 1; i < bars.size(); i++) {
//        if (max < bars[i].mark) {
//            max = bars[i].mark;
//            ind = i;
//        }
//
//    }
//    cout << "A barista with the highest rating is: " << endl << endl;
//
//    bars[ind].WritetoCons();
//    cout << endl;
//}
//
//void Command::ChangeRating()
//{   int rating;
//    string name;
//    cout << "Enter the name of worker which rating you want to change : " << endl;
//    cin >> name;
//    for (int i = 0; i < bars.size(); i++) {
//        if (bars[i].FirstName == name) {
//            cout << "Your mark from 1-5 for this worker: " << endl;
//            cin >> rating;
//            bars[i].mark = rating;
//            break;
//        }
//    }
//}