#include <iostream>

double recursive(double q, int n)
	{
		if(n<0)
		{
			return 0;
		}
		else
		{
			while(n!=1)
			{
				n=n-1;
				return q*recursive(q,n);
			}
		}
	return q;
	}
	


double root_iterative(double q, int n, int steps)
{
	int ergebnis=1;

	for(int a=0; a<steps; ++a)
	{
		ergebnis= ergebnis +(1/n)*((q/(recursive(ergebnis, n-1))) - ergebnis);
	}
	return ergebnis;
}

int main(int argv, char** argc)
{
	double q;
	int n;
	int steps;
	
	
	std::cout<< "Die wievielte Wurzel ist gesucht?"<<std::endl;
	std::cin>> n;
	std::cout<< "Von welcher Zahl soll die "<<n<<"te Wurzel gezogen werden?"<<std::endl;
	std::cin>> q;
	std::cout<< "Wie oft soll die Formel der Näherung angewendet werden?" <<std::endl;
	std::cin>> steps;

	if(q<0 ||steps<0 || n<0)
		{
			std::cout<<"Bitte gültige Eingaben"<< std::endl;
		}
		else
			{
				std::cout<< "Das Ergebnis ist" <<std::endl << root_iterative(q, n, steps) <<std::endl;
				return 0;
			}
}	
	
