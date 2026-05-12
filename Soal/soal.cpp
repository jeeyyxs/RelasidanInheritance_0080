#include <iostream>  //library
#include <vector>
using namespace std;

#include "user.h"
#include "member.h"
#include "admin.h"

int main() {
    cout << "========================================\n";
    cout << "       SISTEM MANAJEMEN USER\n";
    cout << "========================================\n\n";

    cout << "--- >Registrasi Akun< ---\n";
    Admin*  adminUtama = new Admin("ALexa",  "alexa@mail.com");
    Member* m1         = new Member("Naura", "naura@mail.com");
    Member* m2         = new Member("Bella", "bella@mail.com");
    Member* m3         = new Member("Sasa", "sasa@mail.com");

     // Membuat vector berisi semua member
    vector<Member*> semuaMember = { m1, m2, m3 };

    // Menampilkan daftar member awal
    adminUtama->showAllMember(semuaMember);

    // Mengubah status Bella
    adminUtama->toggleActivationMember(m2);

    // Menampilkan daftar setelah status diubah
    adminUtama->showAllMember(semuaMember);

    // Menampilkan profil salah satu member
    cout << "\n--- >showProfile() untuk Naura< ---\n";
    m1->showProfile();

    // mendelete variabel - variabel pointer dari memori
    cout << "\n--- >Menghapus Semua Objek< ---\n";
    delete adminUtama;
    delete m1;
    delete m2;
    delete m3;

    // Menampilkan pesan program selesai
    cout << "\nProgram selesai, Terima kasih!\n";
    return 0;
}