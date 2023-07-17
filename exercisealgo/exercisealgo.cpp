#include <iostream>
#include <string>
using namespace std;

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

void tambahMahasiswa();
int NIM;
string nama;
int Jurusan;
int tahunMasuk;

void tampilkanSemuaMahasiswa();

void algorithmacariMahasiswaByNIM();


void algorithmaSortByTahunMasuk();

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			tampilkanSemuaMahasiswa();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}














// 2. algoritma StaticMember
//  3. perbedann nya yakni stack jika terdapat angka yang paling akhir tetapi yang keluar pertama , sedangkan queue sebaliknya 
// 4. stack digunakan saat implentasi pemanggilan fungsi ,jika ada data yang keluar dari yang paling akhir
// 5. a. 31 nodes / level 5
// 5. b. inorder traversal yakni digunakan untuk mencari anaknya dari kiri baru ke kanan dengan langkah langkah mengunjungi left subtree, roott(pintu masuk) dan baru ke kanan 