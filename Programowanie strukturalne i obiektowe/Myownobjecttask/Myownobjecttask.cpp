/*
Zadanie
Napisz klase oraz kod testujacy opisujca osobe
dodaj 5 pól opisujacych osobe ma byc rok urodzenia 
dodanie konstruktórów umo¿liwjaacych utworzenie obiektu na pare sposobów 
metoda która wysiwetli informacje o osobie
metoda która wyœwietli czy osoba jest pe³noletnia czy nie
Zadanie 1 
Napisz funkcje ktora przyjmie liczbe i wyswietli informacje czy jest ona parzysta czy nie parzysta



*/
#include <iostream>

class Person
{

public:
    Person()
    {
        name = "Grzegorz";
        surname = "Brzenczyszczykiewicz";
        footsize = 44;  
        weight = 89;
        birthdate = 24;
    }
    Person(std::string name, std::string surname, std::string sex, int YearOfBirth, int weight)
    {
        this->name = name;
        this->surname = surname;
        this->birthdate = YearOfBirth;
        this->weight = weight;
        this->Majority();

    }
    void InformationGetting()
    {
        std::cout << "Podaj swoje dane (imie i nazwisko)";
        std::cin >> name >> surname;
        std::cout << "podaj numer twojej stupki hihi";
        std::cin >> footsize;
        std::cout << "Podaj swoja wage";
        std::cin >> weight;
        std::cout << "Podaj date urodzenia";
        std::cin >> birthdate;
    }
    void InformationShow()
    {
        std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
        std::cout << "Imie i nazwisko to:"  << name <<"     " << surname << "\n";
        std::cout << "Rozmiar buta to:" << footsize << "\n";
        std::cout << "Waga to:" << weight << "\n";
        std::cout << "Data urodzenia to:" << birthdate << "\n";
        std::cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n";
    }
     
    int  ActualYear()
    {
        time_t now = time(0);

        tm* localTimeStructTm = new tm;
        localtime_s(localTimeStructTm, &now);

        return 1900 + localTimeStructTm->tm_year;

    }
    std::string Majority()
    {

        time_t now = time(0);

        tm* localTimeStructTm = new tm;
        localtime_s(localTimeStructTm, &now);
        if (1900 + localTimeStructTm->tm_year - ActualYear >= 18)
            return "Yes\n";
        else
            return   "No\n";

    }

protected:

private:
    std::string name, surname;
    int footsize, weight, birthdate;

};


int main()
{
    setlocale(LC_CTYPE, "polish");
    Person personfirst;
    personfirst.InformationShow();
    Person personSecond("Bogus³aw", "£êcina", "Women", 2007, 120);
    personSecond.InformationShow();

    Person personThird("Maciej", "Szczerbzeszynski", "Czarny", 1924, 100);
    personThird.InformationShow();
}
