#include <iostream>
#include <cstdlib>

using namespace std;
int main(){
	float a,b;
	int kode;
	menu:
	cout<<"kalkulator sederhana c++ \n";
	cout<<"xry-cs.d\n\n";
	cout<<"pilihan menu: \n";
	cout<<"1.penjumlahan (+)\n";
	cout<<"2.pengurangan (-)\n";
	cout<<"3.perkalian (*)\n";
	cout<<"4.pembagian (/)\n\n";
	cout<<"silahkan masukan kode menu:";cin>>kode;
	if (kode > 4|| kode < 1){
		cout<<"\n kode yg anda masukan tidak ada\n silakan masukan ulang kode.";
		system ("pause");
		system ("cls");
		goto menu;
	}
	else{
		cout<<"masukan angka pertama:";cin>>a;
		cout<<"masukan angka kedua:";cin>>b;
		if (kode==1){
			cout<<"\nhasil penjumlahan dari "<<a<<"+"<<b<<" adalah:"<<a+b<<endl;
		}
		else if (kode==2){
			cout<<"\nhasil penguranagn dari"<<a<<"-"<<b<<" adalah:"<<a-b<<endl;
		}
		else if (kode==3){
			cout<<"\nhasil perkalian dari"<<a<<"*"<<b<<"adalah:"<<a*b<<endl;
		}
		else if (kode==4){
			cout<<"\nhasil pembagian dari"<<a<<"/"<<b<<"adalah:"<<a/b<<endl;
		}
	}
	return 0;
}
