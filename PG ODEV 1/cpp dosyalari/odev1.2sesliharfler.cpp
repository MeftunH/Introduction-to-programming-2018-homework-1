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

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	//Yerel degiskenleri tanimliyoruz
	const int SIZE = 11;
	cout << "cumle giriniz ";
	int aCount;
	int eCount;
	int iCount;
	int oCount;
	int uCount;
	int ACount;
	int ECount;
	int ICount;
	int OCount;
	int UCount;
	char cumle[SIZE];


	//Yerel degiskenleri baslatiyoruz

	aCount = 0;
	eCount = 0;
	iCount = 0;
	oCount = 0;
	uCount = 0;
	ACount = 0;
	ECount = 0;
	ICount = 0;
	OCount = 0;
	UCount = 0;

	//Kullanicinin disardan karakter girmesini sagliyoruz
	cin.getline(cumle, SIZE);
	//Her karakterden kac tane oldugunu gosteren dongu 
	for (int index = 0; index < strlen(cumle); index++)
	{
		//Disardan girilen sesli harflerin sayisini gosteren dongu 
	//cumlenin iceriginde ne kadar a harfi var
		//her dongude a sayacini 1 artir
		if (cumle[index] == 'a')
			aCount++;
		//cumlenin iceriginde ne kadar e harfi var
		//her dongude e sayacini 1 artir
		else if (cumle[index] == 'e')
			eCount++;
		//cumlenin iceriginde ne kadar i harfi var
	//her dongude i sayacini 1 artir
		else if (cumle[index] == 'i')
			iCount++;
		//cumlenin iceriginde ne kadar o harfi var
		//her dongude o sayacini 1 artir
		else if (cumle[index] == 'o')
			oCount++;
		//cumlenin iceriginde ne kadar u harfi var
		//her dongude u sayacini 1 artir
		else if (cumle[index] == 'u')
			uCount++;
		//cumlenin iceriginde ne kadar A harfi var
		//her dongude A sayacini 1 artir
		if (cumle[index] == 'A')
			ACount++;
		//cumlenin iceriginde ne kadar E harfi var
		//her dongude E sayacini 1 artir
		else if (cumle[index] == 'E')
			ECount++;
		//cumlenin iceriginde ne kadar I harfi var
		//her dongude I sayacini 1 artir
		else if (cumle[index] == 'I')
			ICount++;
		//cumlenin iceriginde ne kadar O harfi var
		//her dongude O  sayacini 1 artir
		else if (cumle[index] == 'O')
			OCount++;
		//cumlenin iceriginde ne kadar U harfi var
		//her dongude U sayacini 1 artir
		else if (cumle[index] == 'U')
			UCount++;

	}

	cout << "\na: " << aCount << "  ";
	cout << "e: " << eCount << "  ";
	cout << "i: " << iCount << "  ";
	cout << "o: " << oCount << "  ";
	cout << "u: " << uCount << endl;
	cout << "\nA: " << ACount << "  ";
	cout << "E: " << ECount << "  ";
	cout << "I: " << ICount << "  ";
	cout << "O: " << OCount << "  ";
	cout << "U: " << UCount << endl;



	system("pause");
	return 0;


}