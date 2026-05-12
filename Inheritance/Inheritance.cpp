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

//pembuatan class pelajar sebagai pewaris dari class orang 
class pelajar : public orang {
public:
    //deklarasi member variabel dari class pelajar
    string sekolah;

    //pembuatan constructor dari class pelajar
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "pelajar dibuat\n" << endl;
    }

    //pembuatan destructor dari class pelajar
    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }

    //pembuatan function perkenalan()
    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main() {
    //deklarasi dan pemberian nilai untuk variabel objek siswa1
    pelajar siswa1("andi laksono", "SMAN 1 Bantul");
    //pemanggilan function perkenalan dari class pelajar
    cout << siswa1.perkenalan();
    //pemanggilan function warisan dari class orang kepada class objek
    cout << "Hasil=" << siswa1.jumlah(10,90) << endl;

    return 0;
}