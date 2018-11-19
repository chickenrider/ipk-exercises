#include <iostream>
namespace power
{

	int interative(int q, int n)
	{
	if(n==0)
		{
	
			std::cout <<"Das Ergebnis ist 1"<<std::endl;  //trivialer Fall
	
		}
		else
		{
	
			if(n%2==0)
			{
				while(n!=1)
				{
					q= q*q;
					n=n/2;
				}
				std::cout<<"Das Ergebnis ist " << q << std::endl;
			
			}
			else
			{
		
				n=n-1;
				int k=q;
				while(n!=1)
				{
					k=k*k;
					n=n/2;
				}
				q=q*k;
				std::cout << "Das Ergebnis ist " << q << std::endl;
			}
		}
	}  //Ende von interative()

} // Ende von Namespace power


int main(int argc, char** argv)
{
	int q, n;
	
	std::cout<< "Basis eintippen" << std::endl;
	std::cin>> q;
	std::cout<< "Exponent eintippen"<< std::endl;
	std::cin>> n;
	
	if(n<0)
	{
		std::cout<< "Die Eingabe ist ungültig" << std::endl;
		return 0;
	}
	else
	{
		power::interative(q,n);
		return 0;
	}
}
