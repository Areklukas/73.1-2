#include <iostream> 
#include <fstream>
#include <iomanip> 
using namespace std;

const int SIZE = 2000;
string tab[SIZE];

bool dwie_litery (string l) 
{
  	for (int i=1; i <l.length(); i++) 
  	{
    	if (l[i]==l[i-1]) return true;
  	}
  	return false;
}
void zadanie1() 
{
  	cout<<"73.1:"<<endl;
  	int counter=0;
  	for (int i=0; i<SIZE; i++) 
	  	{
			if(dwie_litery(tab[i])) counter++;
  		}
  	cout<<counter<<endl<<endl;
}

void zadanie2() 
{
  	cout<<"73.2:"<<endl;
  	int counter[26];
  	float caly=0;
  	for (int i=0; i<26; i++) counter[i]=0;
  	for (int i=0; i<SIZE; i++) {
	for (int j=0; j<tab[i].length(); j++) 
	{
      	counter[tab[i][j] - 65]++;
      	caly++;
    }
}
  	for (int i=0; i<26; i++) 
	{
    	cout<<(char) (i+65)<<": "<<counter[i]<<" (";
    	cout<<fixed<<setprecision(2)<<counter[i]/caly*100<< "%)";
    	cout<<endl;
  	}
  	cout<<endl;
}

int main() 
{
  	ifstream in("tekst.txt");
  	for (int i=0; i<SIZE; i++) in>>tab[i];
  	in.close();
  
  	zadanie1();
  	zadanie2();
}
