#ifndef MEMBER_H
#define MEMBER_H

#include "user.h"

//membuat class member di file header member.h
class Member : public User {
private:
    bool status;   // Variabel untuk menyimpan status member (aktif/nonaktif)

public:
    //membuat constructor dari class member
    Member(string pNama, string pEmail) : User(pNama, pEmail), status(true) {
        cout << "    --> Terdaftar sebagai Member\n";
    }

    //membuat destructor dari class member
    ~Member() {
        cout << "[-] Member: \"" << getNama() << "\" dihapus\n";
    }

    // Fungsi untuk menampilkan profil member
    void showProfile() {
        cout << "--------------------------+\n";
        cout << "|      PROFIL MEMBER      |\n";
        cout << "|-------------------------+\n";
        cout << "| ID     : " << getId()    << "              |\n";
        cout << "| Nama   : " << getNama()  << "           |\n";
        cout << "| Email  : " << getEmail() << "  |\n";
        cout << "| Status : " << (status ? "Aktif  (*)" : "Nonaktif  ") << "     |\n";
        cout << "---------------------------\n";
    }

    void setStatus(bool s) { status = s; }       // Setter untuk mengubah status member
    bool getStatus()       { return status; }    // Getter untuk mengambil status member
};

#endif