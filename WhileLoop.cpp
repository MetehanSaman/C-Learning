#include <iostream>

using namespace std;

int main() {

	/*
		while ("true ya da bir koşul yazılır.(İf komutunda olduğu gibi)")
		{
			Döngü içerisinde çalışacak kod ise buraya yazılır.

		};

	*/
	int calis = 1;
	
	while (calis == 1)
	{
		int islemsec, sayi1, sayi2, sayi3, kuvvet, islem{}, sonuc;
		cout << "1 --> 4 Islem" << endl;
		cout << "2 --> Sayinin Kuvvetini Alma" << endl;
		cout << "3 --> Programı Kapat" <<endl;
		cout << "Hangi secenekteki islemleri yapmak istersiniz: ";
		cin >> islemsec;
		if (islemsec == 1)
		{
			cout << "Islem Yapmak Istediginiz Ilk Sayiyi Giriniz: ";
			cin >> sayi1;
			cout << endl << "Islem Yapmak Istediginiz Ikinci Sayiyi Giriniz: ";
			cin >> sayi2;
			cout << endl << "Islemler = [1 --> Toplama 2 --> Cikarma 3 --> Carpma 4 --> Bolme]" << endl;
			cout << "Yapmak Istediginiz Islemin Numarasını Yaziniz: ";
			cin >> islem;
		}

		else if (islemsec == 2)
		{
			cout << "Kuvvetini Almak Istediginiz Sayiyi Giriniz: ";
			cin >> sayi3;
			cout << endl << "Almak Istediğiniz Kuvveti Giriniz: ";
			cin >> kuvvet;
			islem = 5;

		}



		if (islem == 1)
		{
			sonuc = sayi1 + sayi2;
		}
		else if (islem == 2)
		{
			sonuc = sayi1 - sayi2;
		}
		else if (islem == 3)
		{
			sonuc = sayi1 * sayi2;
		}
		else if (islem == 4)
		{
			sonuc = sayi1 / sayi2;
		}
		else if (islem == 5)
		{
			sonuc = pow(sayi3, kuvvet);
		}

		if (islem == 5)
		{
			cout << sayi3 << " uzeri " << kuvvet << " " << sonuc << " yapar.";
		}

		else if (islemsec == 1 || islemsec == 2)
		{
			cout << "Islem sonucu: " << sonuc << endl << endl;
		}

		if (islemsec == 3)
		{
			calis = 0;
		}


	}
}
