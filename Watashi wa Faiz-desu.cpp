//No.1 (1-3)
#include <iostream>

using namespace std;

class Laptop {
    public:
    string pemilik;
    string merk;
    double ukuranLayar;

    string hidupkanLaptop() {
        return "Hidupkan Laptop";
    }

    string matikanLaptop() {
        return "Matikan Laptop";
    }
};

int main() {
	string Loli;
	
    Laptop laptopFaiz;

    laptopFaiz.pemilik = "Muhammad Faiz Aqil Fathoni";
    laptopFaiz.merk = "Asus";
    laptopFaiz.ukuranLayar = 15.2;

	cout << "Namaewa : ";
	cin >> Loli;
	
	if (Loli == "faiz") {
		cout << "Pemilik: " << laptopFaiz.pemilik << endl;
		cout << "Merk: " << laptopFaiz.merk << endl;
		cout << "Ukuran Layar: " <<laptopFaiz.ukuranLayar << endl;
		
		cout << laptopFaiz.hidupkanLaptop() << endl;
    	cout << laptopFaiz.matikanLaptop() << endl;
	}
	else {
		cout << "Ngga ada orangnya si (emote batu)" << endl;
	}

    

    return 0;
}

//2
#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class Laptop {
	public:
		string pemilik;
		string hidupkanLaptop() {
			return "Hidupkan Laptop";
		}
};

int main() {
	string anataWibu;
	
	Laptop laptopFaiz;
	Laptop laptopSadil;
	Laptop laptopFayzel;
	
	laptopFaiz.pemilik = "Muhammad Faiz Aqil Fathoni";
	laptopSadil.pemilik = "Muhammad Asadillah";
	laptopFayzel.pemilik = "Muhammad Fayzel Fatahilla";
	
	cout << "Namaewa : ";
	cin >> anataWibu;
	
	if (anataWibu == "faiz") {
		cout << "Pemilik laptop: " << laptopFaiz.pemilik << endl;
	}
	else if (anataWibu == "sadil") {
		cout << "Pemilik laptop: " << laptopSadil.pemilik << endl;
	}
	else if (anataWibu == "fayzel") {
		cout << "Pemilik laptop: " << laptopFayzel.pemilik << endl;
	}
	else {
		cout << "Ngga ada orangnya si (emote batu)" << endl;
	}
	
	return 0;
}

//3
#include <iostream>

using namespace std;

class mahasiswa {
	public:
		int nim;
		string nama;
		float nilai;
		
		void printData() {
			cout << "NIM   \t= " << nim << endl;
			cout << "Nama  \t= " << nama << endl;
			cout << "Nilai \t= " << nilai << endl;
		}
};

int main() {
	string watashiWibuDesu;
	
	mahasiswa Faiz = {123, "Muhammad Faiz Aqil Fathoni", 90.4};
	mahasiswa Sadil = {456, "Muhammad Asadillah", 85};
	
	cout << "Nama pelaku: ";
	cin >> watashiWibuDesu;
	
	if (watashiWibuDesu == "faiz") {
		Faiz.printData();
	}
	else if (watashiWibuDesu == "sadil") {
		Sadil.printData();
	}
	else {
		cout << "Mahasiswanya kabur" << endl;
	}
	
	return 0;
}

//N0.3
#include <iostream>

using namespace std;

class Laptop {
    public:
    string pemilik;
    string merk;
    double ukuranLayar;

    Laptop(string whoPemilik, string whatMerk, double howUkuranLayar) {
        pemilik = whoPemilik;
        merk = whatMerk;
        ukuranLayar = howUkuranLayar;
    }

    void printData(){
        cout << "Pemilik: " << pemilik << endl;
        cout << "Merk: " << merk << endl;
        cout << "Ukuran Layar: " << ukuranLayar << endl;
    }
};

int main() {
    string nani;
    
    Laptop Faiz("Muhammad Faiz Aqil Fathoni", "Asus", 16.2);
    Laptop Sadil("Muhammad Asadillah", "Lenovo", 14);

	cout << "Namaewa : ";
	cin >> nani;

	if (nani == "faiz") {
		Faiz.printData();
	}
	else if (nani == "sadil") {
		Sadil.printData();
	}
	else {
		cout << "Jamal Mana? Kaburr..." << endl;
	}

    return 0;
}
