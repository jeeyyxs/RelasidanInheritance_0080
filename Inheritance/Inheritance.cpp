#include <iostream>
#include <string>
using namespace std;

//pembuatan class orang
class orang {
public:
    //deklarasi member variabel dari class orang
    string nama;

    //pembuatan constructor dari class orang
    orang(string pNama) :
    nama (pNama) {
        cout << "orang dibuat\n" << endl;
    }

    //pembuatan destructor dari class orang
    ~orang() {
        cout << "orang dihapus\n" << endl;
    }

    //pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};