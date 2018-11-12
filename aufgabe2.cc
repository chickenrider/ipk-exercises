#include <iostream>

void collatz(int zahl)
{


while(zahl != -1 && zahl != -5 && zahl != -17 && zahl != 0 && zahl != 1)
	{
	
	
	if(zahl%2==0)
	{
		zahl = zahl/2;
	}
	else
	{
		zahl = zahl*3+1;
	} 
	}
	std::cout << "" << zahl << std::endl;
}


	int main()
	{

		int zahl;

		std::cin >> zahl;
	
			collatz(zahl);


		return 0;
	}
