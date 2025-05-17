#include <iostream>
using namespace std;


class Buku {
private:
    string judul;
    string penulis;
    bool statusDipinjam;

public:
    Buku(string j = "", string p = "") : judul(j), penulis(p), statusDipinjam(false) {}
};