#include <iostream> 
#include <cmath>
int main(int argc, char** argv)
{
double ergebnis1;
double ergebnis2;
double a;
double b;
double c;

// Eingabe der Werte von a,b und c (Nutzereingabe)

std::cout << "Sie haben die Form: ax²+bx+c" << std::endl;
std::cout << "a = "<< std::flush;
std::cin >> a;

std::cout << "b = " << std::flush;
std::cin >> b;

std::cout << "c = " << std::flush;
std::cin >> c;

if (b*b-(4*a*c) < 0) 									//Falls die Wurzel negativ ==> Keine Lösung im Realen Zahlenbereich
	{
		std::cout << "Keine Lösung im realen Zahlenbereich" << std::endl;
	}
	else										//Ansonsten rechnen, wobei noch nach a=b=0 überprüfen
	{
		if (a==0 && b==0)							//Überprüfen ob a=b=0 ==> gibt keine eindeutige Lösung
		{
			std::cout << "Keine eindeutige Lösung" << std::endl;
		}
		else									//Da weder a=b=0 noch die Wurzel negativ, wird nun die Mitternachtsformel 												angewandt
		{
			ergebnis1= (-b + sqrt(b*b-4*a*c))/(2*a);
			ergebnis2= (-b - sqrt(b*b-4*a*c))/(2*a);

			std::cout << "x1= " << ergebnis1 << std::endl;			//Augabe der Ergebnisse
			std::cout << "x2= " << ergebnis2 << std::endl;
		}
	}
return 0;										//Beenden des Programms
}



