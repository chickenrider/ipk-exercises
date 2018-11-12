#include <iostream>

long long fibonacci(int n) 
{
    if (n == 0) 
	{
        	return 0;
    	} 
    else if (n == 1) 
	{ 
       		return 1;
    	}
		else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}
int main() 

{
    unsigned int n;
    unsigned int i;
    std::cout << "Bitte Zahl eingeben von der die Fibonacci Zahl berechnet werden soll: ";
    std::cin >> n;

	while(i<n+1)
	{
   	 std::cout << "Die Fibonacci-Zahl von " << i << 
        " ist " << fibonacci(i) << std::endl;
   	 i++;
	}
}

//bricht für große Zahlen ab, weil int nur 32Bit hat, besser wäre z.b. unsigned int bzw long unsigned int
