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
	if (selectedOption == 1)
	{
		PoleKwadratu();
	}
	if (selectedOption == 2)
	{
		PoleTrojkata();
	}
}

void zadanie5()
{
	std::cout << "Podaj liczbe do zamiany na system binarny:\n";
	int usernumber;
	std::cin >> usernumber;
	
	std::string finalnumber;
	while (usernumber)
		wynik = (usernumber % 2) + finalnumber;
	usernumber /:2
}
		
	std::cout << "Podana wczeœniej przez ciebie liczba to:\n";
	std::cout << usernumber;
	std::cout << "Finalny efekt zamiany liczby dziesietnej na liczbe binarna wynosi:\n";
	std::cout << finalnumber;
	
}



{
	//1. wyœwietlenie menu
	showMenu();

	//2. wybranie opcji przez u¿ytkownika
	chooseOptionFromUser();

	//3. Wykonanie wybranego zadania
	doSelectedTask();
}

void main()
{
	mainProgram();
}

