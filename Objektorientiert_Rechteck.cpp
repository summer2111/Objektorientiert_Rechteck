// Objektorientiert_Rechteck.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

class Rechteck {
public:
	//Eigenschaften
	double a = 0.0;
	double b = 0.0;

	//Methoden
	double flaeche() {
		return (a * b);
	}

	double umfang() {
		return (a * 2 + b * 2);
	}
};
int main()
{
	Rechteck Mein_Rechteck;
	cout << "Bitte geben Sie die erste Seitenlaenge ein:\n";
	cin >> Mein_Rechteck.a;
	cout << "Bitte geben Sie die zweite Seitenlaenge ein:\n";
	cin >> Mein_Rechteck.b;

	cout << "die erste Seitenlaenge: " << Mein_Rechteck.a << "\n";
	cout << "die zweite Seitenlaenge: " << Mein_Rechteck.b << "\n";

	cout << "Der Flaecheninhalt betraegt: " << Mein_Rechteck.flaeche() << "\n";
	cout << "Der Umfang betraegt: " << Mein_Rechteck.umfang() << "\n";
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
