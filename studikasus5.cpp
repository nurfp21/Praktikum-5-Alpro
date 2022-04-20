#include <iostream>

using namespace std;

class Input{
  public:
    void cetak();
    int mat_kul(int x);

  private:
	string matkul, nama;
	int nim, bnyk_sks, diskon, total_awal, total1, total2, total_diskon;
	int jml_matkul;
    int biaya=120000;
    int skstotal=0;
}inp;

void Input::cetak()
{
    cout<<"Daftar Matakuliah Yang Tersedia"<<endl;
    cout<<"1. Algoritma Pemrograman(alpro)"<<endl;
    cout<<"2. Pemrograman Web(pweb)"<<endl;
    cout<<"3. Matematika Diskrit(matdis)"<<endl;
    cout<<"4. Akhlak"<<endl;
    cout<<"5. Arsitektur Komputer"<<endl;
    cout<<"6. Bahasa Indonesia(bindo)"<<endl<<endl;
    cout<<"Masukkan nama : "; cin>>nama;
    cout<<"Masukkan NIM : "; cin>>nim;
    cout << "Masukkan Jumlah matakuliah : "; cin>>jml_matkul;
    cout<<endl;
    skstotal=inp.mat_kul(jml_matkul);
    total_awal = skstotal*biaya;
    diskon = total_awal * 10/100;
    total1 = total_awal - diskon;
    total_diskon= total1*5/100;
    total2=total1-total_diskon;
    cout<<"\n\n==================================";
    cout<<"\nNama Mahasiswa : "<<nama;
    cout<<"\nNim Mahasiswa : "<<nim;
    cout<<"\nJumlah mata kuliah yang diambil : "<<jml_matkul;
    cout<<"\nTotal sks yang diambil : "<<skstotal;
    cout<<"\nTotal Biaya : "<<total_awal;
    cout<<"Biaya setelah diskon : "<<total2;
}

int Input::mat_kul(int x)
{
  if (x==0)
  {
  	cout<<"Total Seluruh SKS : " <<skstotal;
    return skstotal;
  }
  else{
    cout<<"Masukkan pilihan matakuliah = "; cin>>matkul;
    cout << "Masukkan banyak sks : ";cin >> bnyk_sks;
    
    skstotal = skstotal + bnyk_sks;
    return mat_kul(x-1);
  }
  
}
	
int main()
{
	int x;
	Input inp;
	inp.cetak();
	return 0;
}
