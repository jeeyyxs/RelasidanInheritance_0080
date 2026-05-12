#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
using namespace std;

//membuat class user di file header user.h
class User {
private:
    static int globalId;
    int id;
    string nama;
    string email;

public:
    //membuat constructor dari class user
    User(string pNama, string pEmail) : nama(pNama), email(pEmail) {
        id = generateId();
        cout << "[+] User  : \"" << nama << "\" | ID: " << id << "\n";
    }

    //membuat destructor dari class user
    ~User() {
        cout << "[-] User  : \"" << nama << "\" dihapus\n";
    }

    // Fungsi untuk membuat ID baru
    int generateId() { return ++globalId; } // Menambah globalId lalu mengembalikannya
    int getId() { return id; } 
    string getNama() { return nama; }
    string getEmail() { return email; }
};

//Inisialisasi awal variabel static globalId dengan nilai 0
int User::globalId = 0;

#endif