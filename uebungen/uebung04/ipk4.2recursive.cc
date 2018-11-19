#include <iostream>

namespace power
{
	int recursive(int q, int n)
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
	}
} //Ende des Namespace

int main(int argc, char** argv)
{
	int q,n;
	std::cout<< "Basis eintippen"<<std::endl;
	std::cin>> q;
	std::cout<< "Exponent eintippen"<<std::endl;
	std::cin>> n;
		if(n>0)
		{
			std::cout<< "Das Ergebnis ist "<< power::recursive(q,n) << std::endl;
		}
		else
		{
			std::cout<< "Die Eingabe ist falsch" <<std::endl;
		}
	return 0;
}
	
