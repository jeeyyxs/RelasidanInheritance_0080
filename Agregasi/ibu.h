#ifndef IBU H
#define IBU H

#include <iostream>
#include <vector>
using namespace std;
#include "anak.h"

//membuat class ibu  di file header ibu.h
class ibu {
public:
    //deklarasi member variabel pada class ibu
    string nama;
    vector<anak*> daftar_anak;

    //membuat constructor pada class ibu
    ibu(string pNama) :nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }

    //membuat destructor pada class ibu
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }

    //deklarasi prosedur tambahAnak() dan ceatakAnak()
    void tambahAnak(anak* pAnak);
    void cetakAnak();
 };

 //pendefinisian prosedur · prosedur pada class ibu diluar class
void ibu ::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}

void ibu :: cetakAnak() {
    cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
    for (auto& a : daftar_anak)
    {
        cout << a->nama << "\n";
    }
    cout << endl;
}

#endif
    
