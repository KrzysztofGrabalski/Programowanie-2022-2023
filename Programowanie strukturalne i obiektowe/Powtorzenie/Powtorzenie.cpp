#include <iostream>
#include "Powtorzenie.h"
void showMenu()
{
	system("cls");
	std::cout << "Menu:\n";
	std::cout << "1. Pole kwadratu\n";
	std::cout << "2. Pole trojkata\n";
}

void chooseOptionFromUser()
{
	std::cout << "Wybierz opcje\n";
	int selectedOption;
	std::cin >> selectedOption;
}

void doSelectedTask()
{

}

void zadanie5()
{
	std::cout << "Podaj liczbe dziesietna do zamiany na system binarny:\n";
	int usernumber;
	std::cin >> usernumber;
	std::string finalnumber;
	do{
		finalnumber = usernumber % 2;
		usernumber /= 2;
	} while (usernumber != 0);

	std::cout << "Podana wczeœniej przez ciebie liczba to:\n";
	std::cout << usernumber;
	std::cout << "Finalny efekt zamiany liczby dziesietnej na liczbe binarna wynosi:\n";
	std::cout << finalnumber;
	
	
}
void zadanie6()
{
 //
	//
	using namespace std;
	int number;
	int sys;
	string znak[16]{ "0","1","2","3","4","5","6","7","8","9","A","B""C","D","E","F", };
	cout << "Podaj liczbe:\n";
	cin >> number;

	do
	{
		cout << "Podaj System zamiany";
		cin >> sys;
	} while (sys > 16 || sys < 2);
	cout << "Wynik:";
	
}
















}



void main()
{
	zadanie5();
}

