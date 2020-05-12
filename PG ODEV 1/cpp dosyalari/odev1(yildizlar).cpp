/***********************************************************
  **                   SAKARYA UNIVERSITESI
  **	  BILGISAYAR VE BILISIM BOLUMLERI FAKULTESI
  ** 	      BILGISAYAR MUHENDISLIGI BOLUMU
  **		  PROGRAMLAMAYA GIRIS DERSI
  **
  **       ODEV NUMARASI 1:
  **       OGRENCI ADI: MAFTUN HASHIMLI
  **       OGRENCI NUMARASI.:G181210554
  **       DERS GRUBU................:A
***********************************************************/
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{//yerel degiskenlerimizi tanimliyoruz
	int olcu, satir = 1, yildiz = 1, yildizYok, bosluk = 1, boslukYok = 1;
	//Boyutunu tanimliyoruz
	olcu = 5;

	yildizYok = olcu;
	//Oncelikle seklimiz 4 farkli dik ucgenin birlesmesiyle olusuyor
	//satir degiskenini baslatiyoruz ve boyutlarin uygun olmasi icin satir<=olcu kosulu
	//her dongude satiri artir 
	for (satir = 1; satir <= olcu; satir++) {
		//sag ust kose dik ucgeninin yildilzari icin olan dongu. Yildiz degiskenini baslatiyoruz kosulu tanimladiktan sonra artiryoruz
		for (yildiz = 1; yildiz <= yildizYok; yildiz++)
			cout << "*";
		//sag ust koseyle sol ust kose arasindaki boslugu olusturan dongu 
		//her satirda satir sayisi kadar bosluk olacak
		for (bosluk = 1; bosluk <= boslukYok; bosluk++)
			cout << " ";
		//sol ust kose dik ucgeninin icin olan dongu 
		for (yildiz = 1; yildiz <= yildizYok; yildiz++)
			cout << "*";

		cout << endl;
		yildizYok--;
		boslukYok += 2;
	}

	boslukYok = 1;
	yildizYok = 1;
	//sayaci tanimliyoruz sayac olcuden buyuk oldugunda durucak
	for (int sayac = 1; sayac < olcu; sayac++)
		boslukYok = boslukYok += 2;
	//satiri ve konumu tanimliyoruz
	for (satir = 1; satir <= olcu; satir++) {
		//sag alt kosedeki dik ucgeninin yildizlari icin olan dongu 
		for (yildiz = 1; yildiz <= yildizYok; yildiz++)
			cout << "*";
		//sag alt koseyle sol alt kose arasindaki boslugu olsuturan dongu
		//her satirda satir sayisi kadar bosluk olacak
		for (bosluk = 1; bosluk <= boslukYok; bosluk++)
			cout << " ";
		//sol alt kose dik ucgeninin yildizlari icin olan dongu
		for (yildiz = 1; yildiz <= yildizYok; yildiz++)
			cout << "*";

		cout << endl;
		yildizYok++;
		boslukYok -= 2;
	}
	system("pause");
	return 0;
}