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
};