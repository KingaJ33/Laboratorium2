// Laboratorium2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main()
{
/*
	// ZAD.1  
	
	po zmianie na i <= 10 wyswietla sie rowniez 10


	for (int i = 5; i <= 7; i++) {     
	cout << i << endl;                
	}
*/
/*
	for (int i = 5; i < 7; i++) {
		cout << i << endl;
	}
*/
/*
	for (int i = 0; i < 10; i+=2) {
		cout << i << endl;
	}
*/
/*




*/
/*
	for (int i = 10; 0 < i  ; i --) {
		cout << i << endl;
	}
*/    

//ZAD.2 
 /*
	int fahr, celsius; //zmienne typu int
	int start, limit, krok; //zmienne typu int

start = 0; //przypisz 0 do start
limit = 200; //przypisz 200 do limit
krok = 20; //przypisz 20 do krok

fahr = start; //przypisz wartosc start do zmiennej fahr , czyli fahr =0

while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <=od zmiennej limit
	celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
	cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
	fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
}

*/

//ZAD.3
/*
	int fahr = 0, celsius; //zmienne typu int
	int start, limit, krok; //zmienne typu int
	
	start = 0; //przypisz 0 do start
	limit = 200; //przypisz 200 do limit
	krok = 20; //przypisz 20 do krok

	while (fahr <= limit) {
	
		float celsius = (5.0 / 9.0) * (fahr - 32.0);
		cout << fahr << "\t" << celsius << endl;
		fahr = fahr + krok;
	}
*/

//ZAD.5
	float fahr, celsius, limit, krok;

	limit = 200; //przypisz 200 do limit
	krok = 20; //przypisz 20 do krok


	for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
		{
		float celsius = (5.0 / 9.0)*(fahr - 32.0);
		printf("%3.0f %6.1f \n", fahr, celsius);
		}

	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
