#include <iostream>
struct CoordinatesGPS
{
	int x, y;
};
struct Direction;
{
	int x, y;
};
class Car
{
public:
	Car(std::string name)
	{
		this->name = name;
		coordinateGPS.x = 0;
		coordinateGPS.y = 0;
	}
	Car(std::string name, int x, int y)
	{
		this->name = name;
		coordinateGPS.x = 0;
		coordinateGPS.y = 0;
		directionX = 1;
		directionY = 1;
	}
	void ShowInfo()
	{
		std::cout << "*************************************\n";
		std::cout << "Samochód o nazwie" << name << "\n";
		std::cout << "Pozycja (" << coordinateGPS.x << " ; " << coordinateGPS.y << ")\n";
		std::cout << "*************************************\n";
	}
	void moveFoward()
	{
		coordinateGPS.x += directionX;
		coordinateGPS.y += directionY;
	}
	void turnLeft()
	{

	}
	void turnRight()
	{
		 
	}
protected:

private:
	std::string name;

	CoordinatesGPS coordinateGPS;

	std::string direction; //góra,dol,lewo,prawo
};


int main()
{
	setlocale(LC_CTYPE, "polish");
	Car carFirst("Pe¿ot");
		Car carSecond("Pancernik Kriegsmarine Szelzwik Holsztajn z przyjacielska wizyta 1 wrzeœnia 1939 roku ", 10, 10);

		carFirst.ShowInfo();
		carSecond.ShowInfo();
		carFirst.moveFoward();
}