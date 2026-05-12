#ifndef ADMIN_H  //library
#define ADMIN_H

#include "user.h"
#include "member.h"

//membuat class admin di file header admin.h
class Admin : public User {
public:
    //membuat constructor dari class admin
    Admin(string pNama, string pEmail) : User(pNama, pEmail) {
        cout << "    --> Terdaftar sebagai Admin\n";
    }

    //membuat destructor dari class admin
    ~Admin() {
        cout << "[-] Admin : \"" << getNama() << "\" dihapus\n";
    }

    // Fungsi untuk menampilkan semua member
    void showAllMember(vector<Member*>& daftarMember) {
        cout << "\n=======================================\n";
        cout << "  DAFTAR SEMUA MEMBER";
        cout << " (" << daftarMember.size() << " terdaftar)\n";
        cout << "==========================================\n";
        if (daftarMember.empty()) {
            cout << "  (Belum ada member terdaftar)\n";
            cout << "========================================\n";
            return;
        }
        for (size_t i = 0; i < daftarMember.size(); i++) {
            cout << "  [" << (i + 1) << "] ";
            cout << "ID:" << daftarMember[i]->getId()
                 << "  " << daftarMember[i]->getNama()
                 << "  <" << daftarMember[i]->getEmail() << ">"
                 << "  [" << (daftarMember[i]->getStatus() ? "Aktif" : "Nonaktif") << "]\n";
        }
        cout << "========================================\n";
    }

    // Fungsi untuk mengubah status aktif/nonaktif member
    void toggleActivationMember(Member* m) {
        bool statusBaru = !m->getStatus();
        m->setStatus(statusBaru);
        cout << "\n[*] Toggle Status\n";
        cout << "    Member  : " << m->getNama() << "\n";
        cout << "    Status  : " << (!statusBaru ? "Aktif" : "Nonaktif")
             << " --> " << (statusBaru ? "Aktif" : "Nonaktif") << "\n";
    }
};