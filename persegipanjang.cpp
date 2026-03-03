//library
#include<iostream>
using namespace std;
//Deklarasi variabel
    float p,l;

//implementasi fungsi
void input () {
    cout << "masukan panjang : ";
    cin >> p;
    cout << "masukan lebar : "; 
    cin >> l;
}
    float LuasPersegi(){
        return p*l;
}    

int Jumlah(t a, int b, int c){
    return a + b + c;
}

void output() {
  cout << "luas persegi panjang : " << LuasPersegi() << endl;
} 

int main() 
{//start
    input();
    output();
    cout << "Hasil Penjumlahan: " << Jumlah(8,6,9) << endl;
}//selesai
//end