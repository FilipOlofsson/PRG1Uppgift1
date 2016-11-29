#include <iostream>

using namespace std;										// Anger att jag använder std namespace. Borde inte använda detta men är lat. 

void uppgift1() {											// Lösning på uppgift 1. Lite grötig men den fungerar.
	int antalRader;
	int toPrint;
	cin >> antalRader;										// Användaren anger antalet rader.
	toPrint = 1;										
	for(int Rad = 1; Rad < antalRader+1; Rad++) {			// Loopar en gång för varje rad.
		cout << Rad << " ";									// Printar ut den första siffran på varje rad.
		for(int Kolumn = 1; Kolumn < Rad; Kolumn++) {		// Loopar en gång för varje siffra den ska skriva på raden.
			toPrint += Rad;									// Lägger till nuvarande raden till toPrint
			cout << toPrint << " ";							// Skriver ut nuvarande siffran plus ett mellanslag.
		}
		toPrint = Rad+1;									// Lägger till ett på nuvarande siffran.
		cout << endl;										// Slut på raden så den skriver bara ut ett \n
	}
}
void uppgift2() {											// Lösning på uppgift 2. Fungerar mycket bra.
	double summa = 0;										// Double för att summan kommer ha decimaler.
	double i = 1;											// Double för att summan av 1/i kommer att vara under 1 nästan hela tiden.
	while((1/i) > 0.00001) {								// Loopar så länge som summan av 1/i är under 0.00001
		summa += (1/i);										// Lägger till 1/i till summan av allt.
		i++;												// Lägger till 1 till i;
		summa -= (1/i);										// Tar bort 1/i från summan.
		i++;												// Lägger till 1 till i.
	}
	cout << summa << endl;									// Skriver ut summan av alla talen.
}

void uppgift3() {
	string input;
	cin >> input;											// Hämta input från användaren.
	/*			  					
	char inputArray [input.length()]; 						// Initialiserar en character array

															// DENNA KOD VILL INTE FUNGERA, tänker bara göra på det lätta sättet.
															// Den tycker inte att något är ett palindrom för någon anledning.

									  						// med lika många tillgängliga element som bokstäver i input.
	strcpy(inputArray, input.c_str()); 						// Gör om input till en character array, den som jag initialiserade raden före.
	string Total; 											// Initialisera strängen som ska vara baklänges.
	for(int i = input.length(); i >= 0; i--) { 				// Starta en for-loop där integern i börjar på sista elementet i inputArray.
		Total = Total + inputArray[i];						// Lägger till bokstaven inputArray[i] till strängen Total.											//
	}

	if(Total == input) {
		cout << input << " is a palindrome." << endl; 
	} else {
		cout << input << " is not a palindrome." << endl;
	}
	*/

	if(input == string(input.rbegin(), input.rend())) {		// Om input är samma sak som input baklänges.
		cout << input << " is a palindrome" << endl;		// Printa ut att input är ett palindrom.
	} else {
		cout << input << " is not a palindrome" << endl; 	// Printa ut att input inte är palindrom.
	}

}

int main() {
	while(true) { 											// Jag är lat så jag satte bara en while true, användaren får vara
															// ansvarig för att avbryta.
		cout << "What assignment do you wish to do?" << endl;
		int val;
		cin >> val;
		switch(val) {										// Switchar med valet på uppgift man gör.

			case 1:											// Om man valt 1 går den till uppgift1.
				uppgift1();
				break;

			case 2:
				uppgift2();									// Om man valt 2 går den till uppgift 2.
				break;

			case 3:
				uppgift3();									// Om man valt 3 går den till uppgift 3.
				break;
		}
	}
}