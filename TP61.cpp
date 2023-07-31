#include <iostream>
#include <string>
using namespace std;
bool EsGrito (string frase);
int main()
{
    string frase;
    string msg="escrito";
    cout<<"Ingresa la frase: ";
    getline(cin,frase);
    if (EsGrito (frase))
    {
        msg="ESGRITO";
    }
    cout<<msg;
    return 0;
}
bool EsGrito (string frase)
{
	bool grito=false;
	int contadorexcl=0;
	int contadorletras=0;
	for(int i=0; i< frase.size();i++)
	{
		if(frase[i]=='!')
		{
		    contadorexcl++;
		}
		else
		{
		    contadorletras++;
		}
	}
	if (contadorexcl>=contadorletras)
	{
	    grito=true;
	}
	return grito;
}