#include <iostream>
#include <string>

using namespace std;

float numberCinError(string sentence) {
	float a;
	while (true) {
		cout << sentence;
		cin >> a;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(numeric_limits <streamsize> ::max(), '\n');
			continue;
		}
		else break;
	}
	return a;
}

void trojkat() {
	float a, b, c;
	a = numberCinError("Podaj pierwszy bok a: ");
	b = numberCinError("Podaj pierwszy bok b: ");
	c = numberCinError("Podaj pierwszy bok c: ");
	if (a + b > c && a + c > b && b + c > a) cout << "nie istnieje";
	else cout << "istnieje";
}

void potega() {
	float a, c;
	int b;
	a = numberCinError("Pojad podstawe potegi: ");
	c = a;
	do {
		b = int(numberCinError("Podaj wykladnik potegi (naturalny): "));
	} while (b < 0);
	for (int i = 1; i != b; i++) {
		c *= a;
	}
		cout << endl << c;
}

int main() {
	trojkat();
	cout << endl;
	potega();
	return 0;
}