using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LotOfTasks
{
    class Exercise
    {
        public void Exercise1()
        {
            int z = 23;
            int x = 31;
            var suma = (x + z) / 2;
            Console.WriteLine("Wynik to jest" + suma);
        }

        public void Excercise2()
        {
            int a = 5;
            int b = 9;
            var pole = a * b;
            Console.WriteLine("Pole prostokata to" + pole);
        }

        public void Exercise3()
        {
            double pi = Math.PI;
            double field;
            double volume;

            Console.WriteLine("Podaj promień: ");
            string num1 = Console.ReadLine();
            double radius = double.Parse(num1);

            Console.WriteLine("Podaj wysokość: ");
            string num2 = Console.ReadLine();
            double heigh = double.Parse(num2);

            field = (pi * (radius * radius)) / 3;

            volume = field * heigh;
            Console.WriteLine("Objętość: " + volume);
        }

        public void Exercise4()
        {

            Console.WriteLine("Podaj promień: ");
            string rad = Console.ReadLine();
            double radius = double.Parse(rad);

            double area;
            double pi = Math.PI;

            area = (pi * (radius * radius));

            Console.WriteLine("pole: " + area);
        }

        public void Excercise5()
        {
            int a = 4;
            int b = 8;

            var potegi = a * a + b * b;
            Console.WriteLine("Potega to aktualnie" + potegi);

        }

        public void Exercise6()
        {
            Console.WriteLine("Podaj podstawe: ");
            string basE = Console.ReadLine();
            double b = double.Parse(basE);

            Console.WriteLine("Podaj wysokość: ");
            string heigh = Console.ReadLine();
            double h = double.Parse(heigh);

            double area = b * (h / 2);
            Console.WriteLine("pole trójkąta: " + area);
        }
        public void Exercise7()
        {
            Console.WriteLine("Podaj promień: ");
            string radius = Console.ReadLine();
            int r = int.Parse(radius);
            double pi = Math.PI;
            double V;

            V = ((r * r * r) * pi * (4 / 3));

            Console.WriteLine("Objetość kuli : " + V + " V = 4/3 πr³");
        }
        public void Exercise8()
        {
            Console.WriteLine("Podaj bok a: ");
            string num1 = Console.ReadLine();
            int sideA = int.Parse(num1);

            Console.WriteLine("Podaj wysokość: ");
            string num = Console.ReadLine();
            int h = int.Parse(num);

            Console.WriteLine("Podaj bok b: ");
            string num2 = Console.ReadLine();
            int sideB = int.Parse(num2);

            int area = ((sideA + sideB) * h) / 2;

            Console.WriteLine("pole trapezu: " + area);
        }
        public void Exercise9()
        {
            Console.WriteLine("Podaj pierwsza ocene: ");
            string num1 = Console.ReadLine();
            float grade1 = int.Parse(num1);

            Console.WriteLine("Podaj pierwsza wage: ");
            string wei1 = Console.ReadLine();
            float weight1 = int.Parse(wei1);

            Console.WriteLine("Podaj drugą ocene: ");
            string num2 = Console.ReadLine();
            float grade2 = int.Parse(num2);

            Console.WriteLine("Podaj pierwsza wage: ");
            string wei2 = Console.ReadLine();
            float weight2 = int.Parse(wei2);

            Console.WriteLine("Podaj trzecią ocene: ");
            string num3 = Console.ReadLine();
            float grade3 = int.Parse(num3);

            Console.WriteLine("Podaj trzecią wage: ");
            string wei3 = Console.ReadLine();
            float weight3 = int.Parse(wei3);

            float weightResults = weight2 + weight1 + weight3;
            float gradeResults = grade1 + grade2 + grade3;
            float aritmetic = (weight1 * grade1 + weight2 * grade2 + weight3 * grade3) / weightResults;

            Console.WriteLine("srednia : " + aritmetic);
        }
        public void zadIf1()
        {
            Console.WriteLine("Podaj liczbe: ");
            string num1 = Console.ReadLine();
            int number = int.Parse(num1);

            if (number % 2 == 0)
            {
                Console.WriteLine("liczba: " + number + "  parzysta");
            }
            else
                Console.WriteLine("liczba: " + number + " nieparzysta");
        }
        public void zadIf2()
        {
            Console.WriteLine("Podaj liczbe: ");
            string num1 = Console.ReadLine();
            int number = int.Parse(num1);

            if (number < 0)
                Console.WriteLine("podana liczba jest ujemna");
            else if (number == 0)
                Console.WriteLine("podana liczba jest równa zero");
            else
                Console.WriteLine("podana liczba jest dodatnia");
        }
        public void zadIf3()
        {
            Console.WriteLine("Podaj rok: ");
            string num1 = Console.ReadLine();
            int year = int.Parse(num1);

            if (year % 4 == 0)
            {
                Console.WriteLine("rok: " + year + " jest rokiem przestępnym");
            }
            else
                Console.WriteLine("rok: " + year + " nie jest rokiem przestępnym");
        }
        public void zadIf4()
        {
            Console.WriteLine("Podaj ocenę od 1-6: ");
            string num1 = Console.ReadLine();
            int mark = int.Parse(num1);

            if (mark == 6)
            {
                Console.WriteLine(" wzorowa");
            }
            if (mark == 5)
            {
                Console.WriteLine(" bardzo dobra");
            }
            if (mark == 4)
            {
                Console.WriteLine(" dobra");
            }
            if (mark == 3)
            {
                Console.WriteLine(" dostateczna");
            }
            if (mark == 2)
            {
                Console.WriteLine(" dopuszcająca");
            }
            if (mark == 1)
            {
                Console.WriteLine(" niedostateczna");
            }
            if (mark > 6)
            {
                Console.WriteLine(" z poza przedziału");
            }
            else if (mark < 1)
            {
                Console.WriteLine(" z poza przedziału");
            }
        }
        public void zadIf5()
        {
            Console.WriteLine("Podaj hasło: ");
            string password = Console.ReadLine();


            if (password == "abc123")
            {
                Console.Write(" Podane hasło jest prewidłowe");
            }
            else
            {
                Console.Write(" Podane hasło nie jest prawidłowe");
            }
        }

        public void zadIf6()
        {
            Console.WriteLine("Podaj date (dd.mm.yyyy)");
            string data = Console.ReadLine();

            DateTime thisDay = DateTime.Today;


            if (data == thisDay.ToString("dd.MM.yyyy"))
            {
                Console.Write("Podana data jest poprawna");
            }
            else
            {
                Console.Write();
            }
        }

        public void zadIf7()
        {
            Console.WriteLine("Podaj temperaturkje");
            string temp = Console.ReadLine();
            int temp2 = int.Parse(temp);

            if (temp2 > 20)
            {
                Console.Write("Cieplutko");
            }
            else
            {
                Console.Write("KOŁYMA MRUZ");
            }
        }

    }

    public void zadFor1()
    {
        string num1 = Console.ReadLine();
        int num = int.Parse(num1);

        for (int i = 1; i < 11; i++)
        {
            Console.WriteLine(i + ",");
        }

    }

    public void zadFor2()
    {
        int suma = 0;

        for (int i = 0; i <= 100; i++)
        {
            suma += i;
        }
        Console.WriteLine(suma);
    }

    public void zadFor3()
    {
        for (int i = 100; i <= 10; i++)
        {
            Console.WriteLine(i * i);
        }
    }

    

  

    public void zadPetla1()
    {
        Console.WriteLine("Podaj liczbe");
        string num1 = Console.ReadLine();
        int num = int.Parse(num1);

        int i = 1;

        while (i < num)
        {
            if (num % i == 0)
            {
                Console.Write("Liczba nie jest liczba  pierwsza");
                i++;
            }
            else
            {

                Console.Write("Liczba jest liczba pierwszza");
                i++;
            }

        }



    }

    public void zadPetla2()
    {
        Console.WriteLine("Podaj wyraz\n");
        string wyraz = Console.ReadLine();


        string wyrazWspak = "";
        for (int i = wyraz.Length - 1; i >= 0; i--)
            wyrazWspak = wyrazWspak + wyraz[i];

        Console.WriteLine(wyraz);
        Console.WriteLine("wyraz wspak " + wyrazWspak);

        if (wyraz == wyrazWspak)
            Console.Write("To jest palindrom\n");
        else
            Console.Write("To nie jest palindrom\n");
    }
}
}
