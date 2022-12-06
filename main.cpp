#include<stdio.h>
#include <iostream>
#include<list>

using namespace std;

void Cout(list<const char*> a) 
{
	for (list<const char*>::iterator 
		itr = a.begin(); itr != a.end(); ++itr)
	{
		cout << *itr << endl;
	}
}


int main()
{
	list<const char*> a
	{
		"Tokyo","Yurakucho","shimbashi",
		"Hamamatsucho","Tamachi","Shinagawa",
		"Osaki", "Gotanda","Meguro","Ebisu",
		"Shibuya","Harajuku","Yoyogi",
		"Shinjuku","Shin - Okubo","Takadanobaba",
		"Mejiro","Ikebukuro","Otsuka","Sugamo",
		"Komagome","Tabata","Nippori","Uguisudani",
		"Ueno","Okamachi","Akihabara","Kanda"
	};

	const char b[] = { "Nippori" };

	printf("---1970---\n");

	Cout(a);

	printf("---2019---\n");

	for (list<const char*>::iterator 
		itr = a.begin(); itr != a.end(); ++itr)
	{
		if (strcmp(*itr, "Nippori") == 0)
		{
			itr = a.insert(itr, "Nishi-nippori");
			++itr;
		}
	}

	Cout(a);

	printf("---2022---\n");

	for (list<const char*>::iterator 
		itr = a.begin(); itr != a.end(); ++itr)
	{
		if (strcmp(*itr, "Shinagawa") == 0)
		{
			itr = a.insert(itr, "TakanawaGateway");
			++itr;
		}
	}

	Cout(a);

	return 0;

}