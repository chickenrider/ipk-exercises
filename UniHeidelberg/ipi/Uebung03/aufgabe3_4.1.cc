#include "fcpp.hh"

int quadrat (int x)
{
	return x*x;

}

int gerade(int x, int exp,int i)
{
	int k=1;          // addition unseres Ergebnises//
	i=i+1;            //index zum zählen//
	return cond(2*i<=exp,k=k*quadrat(x)*gerade(x,exp,i),k);
}

int ungerade(int x, int exp,int i)
{
	int k=1;          // addition unseres Ergebnises//
	i=i+1;            //index zum zählen//
	return cond(i<=exp-1,k=k*quadrat(x)*gerade(x,exp,i),k*x);
}



int potenz(int x, int exp)
{
	return cond(exp==1,x,cond(exp % 2 == 0,gerade(x,exp,0), ungerade(x,exp,0)));
	
	

}

int main()
{

return print(potenz(5,4)); //erste Zahl ist die Basis, zweite Zahl der Exponent

}

//3.1b eine Normale Ausführung würde dazu führen, dass die Funktionen erst mit unausgewerteten Parameter ausgeführt wird und dann die Parameter auswertet.
//Bei potenz(5,4) sähe die Normale ausführung so aus:
//pot(5,4)
//(*5 (pot(5,3)))
//(*5(*5(*(pot(5,2)))))
//(*5(*5(*5*(pot(5,1)))))
//(*5(*5(*5 5)))
//(*5(*5(25)))
//(*5(125))
//625
//
//
//Bei potenz(5,4) sähe die applikative Auswertung so aus
//pot(5,4)
//pot(5 1 5)
//pot(5 5 25)
//pot(25 5 125)
//pot(125 5 625)
//625
//
//Die applitkative Auswertung ist also um einiges Schneller und bei der normalen Auswertung würde das Programm bei Rekursiven Funktionen nicht terminieren.
