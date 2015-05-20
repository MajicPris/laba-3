#include<iostream>
#include<string>
#include"kino.h"
using namespace std;

int main()
{
	kino SW("Indigo", "Star Wars", 9, 30, 300, "Petchery");
	cout << "Cinema: " << SW.getCname() << endl;
	cout << "Film: " << SW.getFname() << endl;
	cout << "Time: " << SW.gettimeH() << ":" << SW.gettimeM() << endl;

	cout << "Coast: " << SW.getcoast() << endl;
	cout << "Adres: " << SW.getadres() << endl;
	system("pause");

	return 0;
}
