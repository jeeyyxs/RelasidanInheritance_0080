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
    
