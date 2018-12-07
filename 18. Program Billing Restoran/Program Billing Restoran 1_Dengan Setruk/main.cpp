#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int main()
{
Awal:
system("cls");

char yt;
int pilihanmakanan,pilihanminuman;
int harga,jumlah,total;
int harga1,jumlah1,total1,total2;
string jenismakanan,jenisminuman;

cout <<">>>>>***************** DAFTAR MENU RESTORAN BOCAH SOSMED *****************<<<<<"<<endl<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl;
cout <<"||>>- MAKANAN :                  ||>>- MINUMAN :                             ||"<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl;
cout <<"|| 1. Nasi Goreng.    Rp.10000,- || 1. Jus Apel/Alpukat/Pir/dll.   Rp.7000,- ||"<<endl;
cout <<"|| 2. Kwetiaw.        Rp. 8000,- || 2. Es Teh / Teh Hangat.        Rp.5000,- ||"<<endl;
cout <<"|| 3. Bakso.          Rp. 7000,- || 3. Es Kelapa.                  Rp.4000,- ||"<<endl;
cout <<"|| 4. Mie Ayam.       Rp. 7000,- || 4. Aqu-ah Botol.               Rp.3000,- ||"<<endl;
cout <<"|| 5. Mie Ayam Bakso. Rp.12000,- || 5. Aqu-ah Gelas.               Rp.500,-  ||"<<endl;
cout <<"||-------------------------------||------------------------------------------||"<<endl<<endl;

{
cout <<"Pilih makananya  : "; cin>>pilihanmakanan;

switch(pilihanmakanan)
{
case 1:
    jenismakanan="Nasi Goreng.               ";
    harga=10000;  break;

case 2:
    jenismakanan="Kwetiaw.                   ";
    harga=8000;   break;

case 3:
    jenismakanan="Bakso.                     ";
    harga=7000; break;

case 4:
    jenismakanan="Mie Ayam.                  ";
    harga=7000;   break;

case 5:
    jenismakanan="Mie Ayam Bakso.            ";
    harga=12000;  break;
}
cout <<"Jumlah pemesanan : "; cin>>jumlah;
total=jumlah*harga;
}
{
cout <<endl<<endl;
cout <<"Pilih minumannya : "; cin>>pilihanminuman;

switch(pilihanminuman)
{
case 1:
    jenisminuman="Jus Apel/Alpukat/Pir/dll.  ";
    harga1=7000;  break;

case 2:
    jenisminuman="Es Teh / Teh Hangat.       ";
    harga1=5000;  break;

case 3:
    jenisminuman="Es Kelapa.                 ";
    harga1=4000;  break;

case 4:
    jenisminuman="Aqu-ah Botol.              ";
    harga1=3000;  break;

case 5:
    jenisminuman="Aqu-ah Gelas.              ";
    harga1=500;   break;
}
cout <<"Jumlah pemesanan : "; cin>>jumlah1;
total1=jumlah1*harga1;
}
cout <<endl<<endl;
cout <<"======================================================"<<endl;
cout <<">>>>>>>>>>>>>>> RESTORAN BOCAH SOSMED <<<<<<<<<<<<<<<<"<<endl;
cout <<"======================================================"<<endl;
cout <<jenismakanan<<" "<<jumlah<<"    "<<harga<<"     "<<total<<endl;
cout <<"......................................................"<<endl;
cout <<jenisminuman<<" "<<jumlah1<<"    "<<harga1<<"      "<<total1<<endl;
cout <<"------------------------------------------------------"<<endl;
total2=total+total1;
cout <<"Total                                      "<<total2<<endl;

cout <<endl<<endl;cout <<"Ada lagi yang bisa di bantu lagi (Y/T) ? ";   cin>>yt;
cout <<"-------------------------------------"<<endl;
if(yt=='Y'||yt=='y') {goto Awal;}      if(yt=='T'||yt=='t') {goto TIDAK_AKHIR;}

TIDAK_AKHIR:
cout <<endl<<"-------------------------------------"<<endl;
cout <<">>> Terimakasih Telah Mengunjungi <<<"<<endl;
cout <<">>>>>>> RESTORAN BOCAH SOSMED <<<<<<<"<<endl;
cout <<"-------------------------------------"<<endl<<endl;

getch();
return 0;
}
