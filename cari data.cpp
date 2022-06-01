#include <iostream>    //analisis praktikum
#include <string.h>
#include <conio.h>
using namespace std;

int main(){
	char cari, kalimat[100];
	int a, total = 0;
	cout << "Program mencari data pada kalimat \n";
	cout << "=========================================\n";
	cout << "Masukan kalimat :";
	gets(kalimat);   //mengambil input
	cout << "---------------------------------------\n";
	a = strlen(kalimat);  //menghitung panjang string
	cout << "\nMasukan data yang ingin di cari : ";cin >> cari;
	cout << "-----------------------------------\n";
	
	for(int i =0; i < a; i++){
		if(kalimat[i] == cari)
		     cout << "Data " <<cari<< " di temukan pada urutan ke-" <<i+1 <<endl; //pencarian data 
		    // total +=1;
	}
	cout << "=================================\n";
//	if(total != 0){
//		cout << "Banyak data berjumlah "<<total;  //cetak panjang kalimat jika total != 0
//	}
//	else{
//		cout << "Data tidak di temukan!!";
//	}
	getch();
}
