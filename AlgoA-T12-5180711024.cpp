#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

struct data{
    int nim;
    float niali;
char nama[20];
};

char hapus;
bool status=false;
data tikus[5];
data temp;
int a,b,c,d,e,i,indeks;
string cari;

void identitas(){
cout<<"\t\t||============================||\n";
cout<<"\t\t||                            ||\n";
cout<<"\t\t|| Nama  : Wahid Andrianto    ||\n";
cout<<"\t\t|| NIM   : 5180711024         ||\n";
cout<<"\t\t|| Prodi : S1 Teknik Elektro  ||\n";
cout<<"\t\t||                            ||\n";
cout<<"\t\t||============================||\n\n\n";
}
void inputdata()
{    cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
   for (i=0;i<b;i++)
{
   cout<<"\nData ke-"<<i+1<<endl;
   cout<<"NIM\t: ";cin>>tikus[i].nim;
   cout<<"Nama\t: ";cin>>tikus[i].nama;
   cout<<"Niali\t: ";cin>>tikus[i].niali;

    cout<<endl;

}
system("CLS");
   }
void searching(){

cout<<"inputkan Yang dicari : ";cin>>cari;
for(int i=0;i<=b;i++){
    if(cari==tikus[i].nama){
        status=true;
        indeks=i+1 ;
}
}
system("CLS");
if(status){
    cout <<indeks;
}
else {cout<<"bok";}


}


void lihatdata(){
    int p,j;

 cout<<"\n======Menampilkan Data======\n\n";
 cout<<"==============================\n";

 j=0;
 for(p=0;p<i;p++)
 {j=j+1;
  cout<<"============================\n";
  cout<<"Data Ke :"<<j<<endl;
  cout<<"NIM   : "<<tikus[p].nim<<endl;
  cout<<"Nama  : "<<tikus[p].nama<<endl;
  cout<<"Nilai : "<<tikus[p].niali;cout<<endl<<endl;
  }


  for(i=0;i<b;i++){
for(e=0;e<b-1;e++){
    if(tikus[e].nim>tikus[e+1].nim){
temp.nim=tikus[e].nim;
tikus[e].nim=tikus[e+1].nim;
tikus[e+1].nim=temp.nim;

strcpy(temp.nama,tikus[e].nama);
strcpy(tikus[e].nama,tikus[e+1].nama);
strcpy(tikus[e+1].nama,temp.nama);

temp.niali=tikus[e].niali;
tikus[e].niali=tikus[e+1].niali;
tikus[e+1].niali=temp.niali;

}
}

}
cout<<"setelah data di sorting :\n";
for(e=0;e<b;e++)
{
    cout<<"===========================\n";
    cout<<"NIM   :"<<tikus[e].nim<<endl;
    cout<<"Nama  :"<<tikus[e].nama<<endl;
    cout<<"Nilai :"<<tikus[e].niali<<endl;
}

    cout<<"=========================== ";
    getch();
    system("CLS");
  }

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 i--;
 for(int a=y;a<i;a++)
 {tikus[a]=tikus[a+1];}
system("CLS");
 cout<<"\n\n\n\n\n\n\n\n Data ke-"<<x<<" Terhapus";
 getch();system("CLS");
}

void editdata(){
int l;
cout<<"Masukan Data yang akan diedit : "<<indeks<<endl;
l=indeks-1;
cout<<"NIM\t: ";cin>>tikus[l].nim;
cout<<"Nama\t: ";cin>>tikus[l].nama;
cout<<"Niali\t: ";cin>>tikus[l].niali;
//lihatdata();
}


int main()
{     int pilih;
 char w;
system("color a");
system("CLS");
   identitas();
  awal:
  cout<<"\n========= PILIHAN MENU ==========";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data sebelum dan sesudah sorting";
  cout<<"\n4. searching dan Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;


   if(pilih==1)
        {system("CLS");inputdata();goto awal;}
   else if(pilih==2)
        {system("CLS");hapusdata();goto awal;}
   else if(pilih==3)
        {system("CLS");lihatdata();goto awal;}
   else if(pilih==4)
        {system("CLS");searching();editdata();goto awal;}
   else if(pilih==5)
   {system("CLS");
    cout<<"APAKAH ANDA INGIN KELUAR DARI PROGRAM??\n\n";
    cout<<"  [Y]                         [N]     \n"<<endl;
    cout<<"             ";cin>>w;
    if(w=='y'||w=='Y')
    {system("CLS");
     cout<<" PROGRAM SELESAI \n\n";}
    if(w=='n'||w=='N')
           {system("CLS");goto awal;}}




}
