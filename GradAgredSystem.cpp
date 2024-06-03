#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	//penataan variabel dengan jenisnya
	string nama, kelas;
	int nimin, nila, nt1, nt2, nt3, nta, nph1, nph2, nph3, npha;
	nimin = 75;

	//Header program
	cout << "||	[================o=====================o====================o===================]		||" << endl;
	cout << "||	| 	                                                                    	|		||" << endl;
	cout << "||	|	Selamat datang di program penetapan kelulusan dan nilai              	|		||" << endl;
	cout << "||	|	Perhatian (!) : Tolong masukkan data yang sesuai dan bukan yang lain 	|		||" << endl;
	cout << "||	|     	                 -Sasmita Wiropati                            		|		||"<< endl;
	cout << "||	|  	                                                               		|		||" << endl;
	cout << "||	[================o=====================o====================o===================]		||" << endl;
	Sleep(3000);
	cout << "||													VV" << endl;
	
	//Pemulaian loop dan pengisian variabel
	LoopStart:
	cout << "||	Data pribadi  											<>" << endl; Sleep(500);
	cout << "||	Nama siswa	: "; getline(cin,nama);
	cout << "||	Asal kelas	: "; getline(cin,kelas);
	cout << "||													<>" << endl; Sleep(500);
	
	cout << "||	Penilaian Tugas 1-3  										<>" << endl; Sleep(500);
	cout << "||	Nilai Tugas-1	: "; cin >> nt1;
	cout << "||	Nilai Tugas-2	: "; cin >> nt2;
	cout << "||	Nilai Tugas-3	: "; cin >> nt3;
	cout << "||													<>" << endl; Sleep(500);
	
	cout << "||	Penilaian PH 1-3  										<>" << endl; Sleep(500);
	cout << "||	Nilai PH-1	: "; cin >> nph1;
	cout << "||	Nilai PH-2	: "; cin >> nph2;
	cout << "||	Nilai PH-3	: "; cin >> nph3;
	cout << "||													VV" << endl; Sleep(500);
	
	//Estetika
	cout << "||	Sedang diproses.... mohon ditunggu...								||" << endl; (2000);
	cout << "||													||" << endl; 
	
	//Pengeluaran isi variabel
	cout << "||	Siswa yang bernama		: "; Sleep(500); cout << nama << endl; Sleep(500);
	cout << "||	Dari Kelas			: "; Sleep(500); cout << kelas << endl; Sleep(500);
	
	//Menghitung rata-rata nilai tugas
	nta = (nt1+nt2+nt3)/3;
	
	cout << "||	Memiliki rata-rata : 										||" << endl;
	cout << "||	Nilai tugas			: "; Sleep(500); cout << nta << "								||" << endl; Sleep(500);
	
	//Menghitung rata-rata nilai PH
	npha = (nph1+nph2+nph3)/3;
	
	cout << "||	Penilaian harian		: "; Sleep(500); cout << npha << "								||" << endl; Sleep(500);
	
	//Menghitung rata-rata seluruh nilai
	nila = (nta+npha)/2;
	
	cout << "||	Seluruh nilai			: "; Sleep(500); cout << nila << "								||" << endl; Sleep(500);
	cout << "||	Dinyatakan			: "; Sleep(500);
	
	//Penentuan lulus/tidak lulus serta akreditasi
	if (nila >= nimin){
		cout << "Lulus, "; Sleep(500);
		
		if (nila >= 91){
			cout << "dengan akreditasi A					||" << endl; Sleep(500);
		}
		
		else if ((nila >= 81)&&(nila <=90)){
			cout << "dengan akreditasi B					||" << endl; Sleep(500);
		}
		
			else if ((nila >=70)&&(nila <= 80)){
				cout << "dengan akreditasi C					||" << endl; Sleep(500);
			}
	}
	
	else{
		cout << "Tidak lulus, "; Sleep(500);
		
		if (nila >= 70){
			cout << "dengan akreditasi D				||" << endl; Sleep(500);
		}
		
		else{
			cout << "dengan akreditasi E				||" << endl; Sleep(500);
		}
	}
	cout << "||													||" << endl; Sleep(500);
	
	//Penentuan terjadinya perulangan
	char balik = 'n';
	
	cout << "||	Mau melakukan perhitungan lagi? [y/n]	: "; cin >> balik; Sleep(500);
	
	if (balik == 'Y' || balik == 'y'){
		cout << "||													||" << endl; Sleep(500);
			goto LoopStart;
		}
		else{
			cout << "||													||" << endl; Sleep(500);
			cout << "||						Terima kasih!						||" << endl; Sleep(500);
			cout << "||													||" << endl; Sleep(500);
			cout << "||======================================================================================================||";
		}
}
