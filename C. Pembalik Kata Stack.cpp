//Nama : Anggelina Kismasari
//Nim : 20051397034
//Prodi : Manajemen informatika 2020 B

#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
 char kalimat[100];
 cout <<"Masukan Kalimat :"; 
 cin.getline (kalimat , sizeof (kalimat) );
 int x = strlen(kalimat);
 for(int i=x-1;i>=0;i--){
  cout<<kalimat[i];
 }
}
