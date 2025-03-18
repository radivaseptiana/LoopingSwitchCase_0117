#include <iostream>
using namespace std;

int main(){
    //Pencacah Naik
    int i;
    for (i = 0; i < 5; i++){
        cout << "Nilai i = "<< i <<"Lari keliling lapangan" << endl;
    }
    cout << "Nilai i Terakhir : " << i << endl;

    //Pencacah Turun
    for (i = 5; i > 0; i--){
        cout << "Nilai i= "<< i <<" Lari Keliling lapangan" << endl;
    }
    cout << "Nilai i terakhir : " << i << endl; 
}