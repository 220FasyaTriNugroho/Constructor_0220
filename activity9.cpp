#include <iostream>
using namespace std;

class Mahasiswa{
    private:
        static int totalMahasiswa;
    public:
        string nama;
        string status;
        int umur;
        
        Mahasiswa(string pNama, int pUmur) {
            nama = pNama;
            umur = pUmur;
            status = "Mahasiswa Baru";
            ++totalMahasiswa;
            cout << nama << " Dibuat " << endl;
            cout << endl;
        }

        Mahasiswa(){
            cout << nama << " Dihancurkan " << endl;
            --totalMahasiswa;
        }
};

int main(){

}