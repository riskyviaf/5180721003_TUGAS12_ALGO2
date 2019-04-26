#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace::std;
int  b[10],temp, jumlah, ganti, hapus, cari, ketemu = 0,indeks=-1, hasil[10];
bool status=false;

void insertData(){
cout << "Masukkan Jumlah Nilai UAS : ";
cin >> jumlah;
cout<<endl;
for (int i = 0; i<jumlah; i++)
	{
	cout << "Masukkan Nilai UAS ke-" << i + 1 << " : ";
	cin >> b[i];
    }}

void cariData(){
cout<<"\n\nMasukkan Nilai UAS Yang Dicari :";
cin>>cari;
for(int i=0;i<jumlah;i++){
    if(cari ==b[i]){
        status=true;
        indeks++;
        hasil[indeks]=i;
    }
}
if(status){
    cout<<"Nilai UAS Ditemukan di Indeks ke-";
    for(int i=0;i<=indeks;i++){
        cout<<hasil[i]<<' '<<endl;
    }
}
else cout<<"Nilai UAS Tidak Ditemukan";}

void ubahData(){
//EDIT ELEMEN ARRAY
	//user memasukan nilai data yang akan diedit
cout << "\n\nMasukkan Nilai UAS yang akan diubah = "; cin >> ganti;
	// Perulangan untuk mencari niai data yang sesuai dengan yang dimaksud user
for (int i= 0; i<jumlah; i++)
{
    if (b[i] == ganti)
	{
	//Jika nilai data yang dimasukkan user ada di salah satu index array
	//Maka minta user menuliskan data baru sebagai penggantinya
	cout << "Masukka Nilai UAS baru = ";cin>>b[i];
	cout<<endl;
    }
}
//Menampilkan semua data baru setelah diedit/ dirubah
cout << "Data Nilai UAS setelah diubah";
for (int j = 0; j<jumlah; j++)
{
    cout << "\nNilai UAS ke-"<<j+1<< " : " <<b[j];
}}

void perubahan(){
cout << "\nSorting Ascending Data Nilai UAS yang telah dimasukkan : ";
for(int i=1;i<jumlah;++i)
{
    for(int j=0;j<(jumlah-1);++j)
        if(b[j]>b[j+1])
    {
        temp=b[j];
        b[j]=b[j+1];
        b[j+1]=temp;
    }
}
for(int i=0;i<jumlah;++i)
    cout<<" "<<b[i];}

void hapusData(){//MENGHAPUS ELEMEN ARRAY
// User memasukkan nilai data yang akan dihapus
cout << "\n\nMasukkan nilai data yang akan dihapus = ";
cin >> hapus;
    //Perulangan untuk mencari data yang di inputkan user di index array
	for (int i = 0; i < jumlah; i++){
		if (hapus == b[i]){
			//Jika nilai yang di masukkan user sesuai dengan salah satu
			//Nilai data di index array
			for (int j = i /* dimulai dari index nilai yang ditemukan */ ; j< jumlah; j++){
				//Menggeser niali data pada index array sampai jumlah maksimal data array
				b[j]/* Nilai index saat ini */ = b[j + 1] /* Nilai index selanjutnya */;
			}
			// Mengurangi jumlah array karena saah satu datanya telah dihapus
			jumlah -= 1;
			break;
		}
	}
	//Menampilkan data baru setelah salah satu index dihapus
	cout << "Data Nilai UAS Setelah Dihapus";
	for (int j = 0; j<jumlah; j++)
	{
		cout << "\nNilai UAS ke-"<<j<< " : "<<b[j];
	}}

int main(){
    cout<<"\t++++++++++++++  Tugas 12  +++++++++++++++++"<<endl<<endl;
    cout<<"\t== Input,Sorting,Searching,Edit dan Hapus =="<<endl<<endl;
    cout<<"\t[[[[[[  Data Sheet Nilai UAS Pelajar  ]]]]]"<<endl<<endl<<endl;
insertData();
perubahan();
cariData();
ubahData();
perubahan();
hapusData();
perubahan();
}
