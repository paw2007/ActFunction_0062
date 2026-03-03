//Library
#include <iostream>
using namespace std;
//Deklarasi Variabel
    float alas,tinggi;

//Implementasi Fungsi
    void input () {
    cout << "masukan alas : ";
    cin >> alas;
    cout << "masukan tinggi : ";    
    cin >> tinggi;
}

float LuasSegitiga () {
    return 0.5 * alas * tinggi;
}

void Output() {
    cout << "Hasilnya : " << LuasSegitiga() << endl;
}


int main() 
{//start
    input();
    Output();
    cout << "Hasil luas segitiga: " << LuasSegitiga();
}