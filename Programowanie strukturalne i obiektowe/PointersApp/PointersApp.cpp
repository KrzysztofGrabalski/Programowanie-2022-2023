#include <iostream>

int globalVariable = 7;

void AnotherFunction(int parameter)
{
	int anotherLocalVariableInFunction = 6;
}
void TestFunction()
{
	int localVariableInFunction = 5;
	AnotherFunction(localVariableInFunction);
}
int main()
{
	/*int localVariableInMain = 8;
	TestFunction();
	globalVariable = 77
		AnotherFunction(7);*/
		//Stos - obszar pramieci ram przydzielony naszemu programowi
		// Obszar ten jest ograniczony i nie da siê go ziekszyæ w czasie dzia³ania programu.
		// L¹duj¹ tam zmienne lokalne

	int number;
	number = 77;
	std::cout << number;

	//sterta - pozosta³y wolny obszar pamieci ram

	int* wsk;
	// operator "new" rezerwuje nowy obszar na stercie o wielkoœci typu int i zwraca adres tego obszaru.
	// Adres tego obszaru. Adres ten jest zapisywane do zmiennej lokalnej "wsk"
	wsk = new int;
	*wsk = 7;
	// wyswietlenie adtresu pod jakim znajduje siê obszar na stercie
	std::cout << wsk << "\n";
	std::cout << *wsk << "\n";

	number = (*wsk) * 2;
	//zwlaniamy obszar ze sterty
	delete wsk;
	wsk = NULL;

	//*wsk = 55;
	// std::cout << *wsk << "\n";

	std::cout << "***************************************\n";

	int tab[3];

	tab[0] = 5;
	*(tab + 0) = 5;

	tab[1] = 15;
	*(tab + 1) = 15;

	tab[2] = 15;
	*(tab + 2) = 15;

	std::cout << "Adres zerowego elemetnu tablicy \t" << tab << "\n";
	std::cout << "Adres zerowego pierwszego tablicy \t" << tab + 1 << "\n";

	std::cout << "***************************************\n";



	int tab2[7];
	const int rozmiar = 5;
	//int tab3[number];
	int tab4[rozmiar];

	int* tab5 = new int[number];
	tab5[7] = 15;
	*(tab5 + 7) = 15;

	delete tab5;

	tab5 = new int[number];

	delete tab5; 
}