#include <iostream>
using namespace std;


class Buku {
private:
    string judul;
    string penulis;
    bool statusDipinjam;

public:
    Buku(string j = "", string p = "") : judul(j), penulis(p), statusDipinjam(false) {}

    // method setter chain function
    Buku* setJudul(const string& j) 
    {
        judul = j;
        return *this;
    }

    Buku& setPenulis(const string& p)
    {
        penulis = p;
        return *this;
    }

    void tampilkanInfo() const
    {
        cout << "Judul: " << judul << ", Penulis: " << penulis << ", Status: ";
        cout << (statusDipinjam ? "Dipinjam" : "Tersedia") << endl;
    }

    friend class Petugas;
    friend void lihatStatusBuku(const Buku& b);
};

class Peminjam {
private:
    string nama;
    int id;
    int totalDipinjam;

public:
    Peminjam(string n = "", int i = 0) : nama(n), id(i), totalDipinjam(0){}
    
    Peminjam& setNama(const string& n)
    {
        nama = n;
        return *this;
    }

    Peminjam& setId(int i)
    {
        id = i;
        return *this;
    }

    void tampilkanInfo() const
    {
        cout << "Nama: " << nama << ", ID: " << id << ", Total Dipinjam: " << totalDipinjam << endl;
    }

    friend class petugas;
    friend void lihatStatusPeminjam(const Peminjam& p);
};