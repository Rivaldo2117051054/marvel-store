#include <iostream>  
using namespace std;

string marvel,namaku;    
char back;   
int harga[5]{98000, 30000, 35000, 90000, 55000},bulan,bayar,kurang,kembali,nama,z=0; 

void title(){ 
	string judul="==================== Marvel Film store ============";  
	cout<<judul<<endl;   
}    
void isifilm(){  
	cout<<"FIlm Marvel yang tersedia---"<<endl;
		cout<<"--------------------------------------------------------------"<<endl;
		cout<<"|	[1] Avenger End Game                                |"   <<endl;
		cout<<"|	[2] Iron Man 3                                      |"   <<endl;
		cout<<"|	[3] Deadpool 2016                                   |"   <<endl;
		cout<<"|	[4] Avenger Infinity War                            |"   <<endl;
		cout<<"|	[5] Black Panther                                   |"   <<endl;
		cout<<"--------------------------------------------------------------"<<endl;
	//fungsi 
}  
//buat space  
void n(){
	cout<<endl;  
}  

int total(){ 
	int p=bulan;
	int q=harga[z];  
	return p*q;
} 
 
int main(){   
	do{
	system("CLS");
	title();
  	  n();
	    cout<<" Masukkan Nama Anda : "; getline(cin,namaku);
	    isifilm();
		
		
		cout<<" Silahkan Pilih FIlm yang ingin Disewa : ";cin >>nama;
		//perulangan memilih film
			
			if(nama==1){
				marvel="Avenger End Game";
			}
			else if(nama==2){
				marvel="Iron Man 3";
				z=1;
			}
			else if(nama==3){
				marvel="Deadpool 2016";
				z=2;
			}
			else if(nama==4){
				marvel="Avenger Infinity War";
				z=3;
			}
			else if(nama==5){
				marvel="Black Panther";
				z=4;
			}
			else{
				cout<<" Pilihan Anda Tidak Tersedia ";
				n();
				goto ulang;
			}
		cout<<" Anda memilih " << marvel <<endl;
		cout<<" Harga       = " << harga[z]<<" Sewa 1 Bulan"<<endl;
		//pengisian harga
		
		n();
		cout<<" Durasi Sewa (Minimal 1 Bulan): ";cin>> bulan;
		//lama sewa 
		
		n();
		cout << " Nama Pemesan          : "	<< namaku  <<endl;
		cout << " Total Pembayaran      : Rp " << total()<<endl;
		n();
		cout << " Masukan uang anda: Rp.";cin>>bayar;
		n();
		while (bayar<total()){
			cout << " Uang anda kurang, Silahkan bayar lagi : Rp. "; cin>>kurang;
			bayar+=kurang;
		};
		kembali=bayar-total();
		cout << " Uang anda       Rp. " << bayar<<endl;
		cout << " Uang kembalian  Rp. " << kembali<<endl;
		ulang:
			cout << " Y = ya / T = tidak "<<endl;
			cout << " ingin menyewa lagi ? [Y/T]  =  "; cin>>back;
		}while (back=='Y'||back=='y');
		n();
		cout << "		Terima kasih telah Datang"<<endl;	
		cout << "	       	Selamat menikmati"<<endl;
	
		return 0;
	}
		
	
	
	

