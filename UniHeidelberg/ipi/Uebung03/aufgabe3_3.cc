#include "fcpp.hh"

int teiler(int zahl, int i)
{
	int k=0;
	i=i+1;
		return cond(i<zahl,
				cond(zahl%i==0 || zahl%i==zahl,	
				       			k=i+teiler(zahl,i),	
							0+teiler(zahl,i))
				,k);

}


bool vollkommen(int zahl)
{
	return cond(zahl==teiler(zahl,0), true, false);
}


int main()
{
	cond(vollkommen(28)==1, print("true"), print("false"));    //Bei vollkommen(28) Zahl eingeben, die geprüft werden soll
}

