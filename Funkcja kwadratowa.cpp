<<<<<<< HEAD
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int Delta(float a, float b, float c){
	int del = pow(b, 2) - 4 * a * c;
	return del;
}

int IloscMiejscZerowych(float a, float b, float c){
	int del = Delta(a,b,c);
	int iloscMiejsc = 0;
	
	if(del < 0){
		iloscMiejsc = 0;
		return iloscMiejsc;
	}
	else if(del == 0){
		iloscMiejsc = 1;
		return iloscMiejsc;
	}
	else if(del > 0){
		iloscMiejsc = 2;
		return iloscMiejsc;
	}	
}

vector<int> ObliczMiejscaZerowe(float a, float b, float c){
	int del = Delta(a,b,c);
	
	vector<int> miejscaZerowe;
	
	if (IloscMiejscZerowych(a,b,c) == 0){
		return miejscaZerowe;
	}
	else if(IloscMiejscZerowych(a,b,c) == 1){
		miejscaZerowe.push_back((b * -1)/(2*a));
		return miejscaZerowe;
	}
	else if(IloscMiejscZerowych(a,b,c) == 2){
		miejscaZerowe.push_back(((b * -1) + sqrt(del))/(2*a));
		miejscaZerowe.push_back(((b * -1) - sqrt(del))/(2*a));
		return miejscaZerowe;
	}	
}

int ObliczP(float a, float b, float c){
	int p = 0;
	p = (b * -1)/(2*a);
	return p;
}

int ObliczQ(float a, float b, float c){
	int del = Delta(a,b,c);
	int q = 0;
	q = (del * -1)/(4*a);
	return q;
}

vector<int> ObliczWspolrzedneWierzcholka(float a, float b, float c){
	vector<int> wspolrzedneWierzcholka;
	wspolrzedneWierzcholka.push_back(ObliczP(a,b,c));
	wspolrzedneWierzcholka.push_back(ObliczQ(a,b,c));
	return wspolrzedneWierzcholka;
}



int main(){
	float a = 0;
	float b = 0;
	float c = 0;
	
	int wybor = 0;
	
	cout << "Wzor funkcji: ax^2+bx+c" << endl;
	cout << "podaj a:";
	cin >> a;
	system("CLS");
	
	cout << "Wzor funkcji: " << a << "x^2+bx+c" << endl;
	cout << "podaj b:";
	cin >> b;
	system("CLS");
	
	if(b<0){
		cout << "Wzor funkcji: " << a << "x^2" << b << "x+c" << endl;
		cout << "podaj c:";
		cin >> c;
		system("CLS");	
	}
	else{
		cout << "Wzor funkcji: " << a << "x^2+" << b << "x+c" << endl;
		cout << "podaj c:";
		cin >> c;
		system("CLS");	
	}
	
	if(c<0){
		cout << "Wzor funkcji: " << a << "x^2" << b << "x"<< c << endl << endl;
	}
	else{
		cout << "Wzor funkcji: " << a << "x^2" << b << "x"<< c << endl << endl;
	}
	
	vector<int> miejscaZerowe = ObliczMiejscaZerowe(a,b,c);
	vector<int> wspolrzedneWierzcholka = ObliczWspolrzedneWierzcholka(a,b,c);
	
	cout << "1. Oblicz Delte" << endl;
	cout << "2. Oblicz Ilosc Miejsc Zerowych" << endl;
	cout << "3. Oblicz Miejsca Zerowe" << endl;
	cout << "4. Oblicz Wspolrzedne Wierzcholka Funkcji" << endl;
	
	cin >> wybor;
	
	switch(wybor){
		case 1:
			cout << "Delta: " << Delta(a,b,c);
			break;
		case 2: 
			cout << "Ilosc miejsc zerowych: " << IloscMiejscZerowych(a,b,c);
			break;
		case 3:
			for(int i = 0; i < miejscaZerowe.size(); i++){
				cout << "Miejsce Zerowe " << i+1 << ": " <<miejscaZerowe[i] << endl;
			}
		case 4:		
			cout << "Wspolrzedne Wierzcholka: " << wspolrzedneWierzcholka[0] << " " << wspolrzedneWierzcholka[1];					
	}
}





=======
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdlib>

using namespace std;

int Delta(float a, float b, float c){
	int del = pow(b, 2) - 4 * a * c;
	return del;
}

int IloscMiejscZerowych(float a, float b, float c){
	int del = Delta(a,b,c);
	int iloscMiejsc = 0;
	
	if(del < 0){
		iloscMiejsc = 0;
		return iloscMiejsc;
	}
	else if(del == 0){
		iloscMiejsc = 1;
		return iloscMiejsc;
	}
	else if(del > 0){
		iloscMiejsc = 2;
		return iloscMiejsc;
	}	
}

vector<int> ObliczMiejscaZerowe(float a, float b, float c){
	int del = Delta(a,b,c);
	
	vector<int> miejscaZerowe;
	
	if (IloscMiejscZerowych(a,b,c) == 0){
		return miejscaZerowe;
	}
	else if(IloscMiejscZerowych(a,b,c) == 1){
		miejscaZerowe.push_back((b * -1)/(2*a));
		return miejscaZerowe;
	}
	else if(IloscMiejscZerowych(a,b,c) == 2){
		miejscaZerowe.push_back(((b * -1) + sqrt(del))/(2*a));
		miejscaZerowe.push_back(((b * -1) - sqrt(del))/(2*a));
		return miejscaZerowe;
	}	
}

int ObliczP(float a, float b, float c){
	int p = 0;
	p = (b * -1)/(2*a);
	return p;
}

int ObliczQ(float a, float b, float c){
	int del = Delta(a,b,c);
	int q = 0;
	q = (del * -1)/(4*a);
	return q;
}

vector<int> ObliczWspolrzedneWierzcholka(float a, float b, float c){
	vector<int> wspolrzedneWierzcholka;
	wspolrzedneWierzcholka.push_back(ObliczP(a,b,c));
	wspolrzedneWierzcholka.push_back(ObliczQ(a,b,c));
	return wspolrzedneWierzcholka;
}



int main(){
	float a = 0;
	float b = 0;
	float c = 0;
	
	int wybor = 0;
	
	cout << "Wzor funkcji: ax^2+bx+c" << endl;
	cout << "podaj a:";
	cin >> a;
	system("CLS");
	
	cout << "Wzor funkcji: " << a << "x^2+bx+c" << endl;
	cout << "podaj b:";
	cin >> b;
	system("CLS");
	
	if(b<0){
		cout << "Wzor funkcji: " << a << "x^2" << b << "x+c" << endl;
		cout << "podaj c:";
		cin >> c;
		system("CLS");	
	}
	else{
		cout << "Wzor funkcji: " << a << "x^2+" << b << "x+c" << endl;
		cout << "podaj c:";
		cin >> c;
		system("CLS");	
	}
	
	if(c<0){
		cout << "Wzor funkcji: " << a << "x^2" << b << "x"<< c << endl << endl;
	}
	else{
		cout << "Wzor funkcji: " << a << "x^2" << b << "x"<< c << endl << endl;
	}
	
	vector<int> miejscaZerowe = ObliczMiejscaZerowe(a,b,c);
	vector<int> wspolrzedneWierzcholka = ObliczWspolrzedneWierzcholka(a,b,c);
	
	cout << "1. Oblicz Delte" << endl;
	cout << "2. Oblicz Ilosc Miejsc Zerowych" << endl;
	cout << "3. Oblicz Miejsca Zerowe" << endl;
	cout << "4. Oblicz Wspolrzedne Wierzcholka Funkcji" << endl;
	
	cin >> wybor;
	
	switch(wybor){
		case 1:
			cout << "Delta: " << Delta(a,b,c);
			break;
		case 2: 
			cout << "Ilosc miejsc zerowych: " << IloscMiejscZerowych(a,b,c);
			break;
		case 3:
			for(int i = 0; i < miejscaZerowe.size(); i++){
				cout << "Miejsce Zerowe " << i+1 << ": " <<miejscaZerowe[i] << endl;
			}
		case 4:		
			cout << "Wspolrzedne Wierzcholka: " << wspolrzedneWierzcholka[0] << " " << wspolrzedneWierzcholka[1];					
	}
}





>>>>>>> dea349e95b1b68f48484115baaa71b2afa3da531
