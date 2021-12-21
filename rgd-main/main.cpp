#include <iostream>
//7elw
using namespace std;
int main() {
	// le variabili combiate da n1/n2 a num1 / num2 
	
	int num1=1;
	int num2=1;
	int temp;
	
	
	// number 1 request 
	
	cout<<"inserisci il primo numero : ";
	cout<<n1;
	
	// request no.2 
	
	cout<<"insersci il secondo numero : ";
	cuot<<n2;
	
	
	
	
	
	
	
	string nome[4];
	int voto1[4];
	int voto2[4];
	int media[4];
	int somma[4];
	int maggiore=0;
	string nomem;
	
	for(int x = 0 ; x<4;x++)
	{
		cout<<"inserisci il "<<x+1<<"o nome"<<endl;
		cin>>nome[x];
		
		cout<<"inserisci il primo voto dell' "<<x+1<<"o studente "<<endl;
		cin>>voto1[x];
		
		cout<<"inserisci il secondo voto dell' "<<x+1<<"o studente "<<endl;
		cin>>voto2[x];
		
		somma[x]= voto1[x]+voto2[x];
		
		media[x]=somma[x]/2;
		
		if(media[x]>maggiore)
		{
			maggiore=media[x];
			nomem=nome[x];
		}
		
		}
		cout<<"la media piu' maggiore e' di "<<nomem<<" la sua media e' "<<maggiore<<endl;
	    
	
	
	
	return 0;
}
