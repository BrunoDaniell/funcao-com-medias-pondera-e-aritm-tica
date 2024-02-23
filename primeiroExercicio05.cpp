#include <iostream>
#include<string>
#include<iomanip>

using namespace std;

double mediaAritimetica(double notas[]) {
	return (notas[0] + notas[1] + notas[2]) / 3;
}

double mediaPonterada(double nota[]) {

	double p1, p2, p3;
	p1 = 5;
	p2 = 3;
	p3 = 2;

	double somaPond = nota[0] * p1 + nota[1] * p2 + nota[2] * p3;
	double somaPesos = p1 + p2 + p3;
	double media = somaPond / somaPesos;

	return media;
}

int main() {


	double notas[3];
	char letra;
	double media;


	for (int i = 0; i < 3; i++) {
		cout << "Digite a nota " << i + 1 << ": ";
		cin >> notas[i];
	}

	cout << "Digite (A) para media aritimetica ou (P) para media ponderada: ";
	cin >> letra;

	switch (letra) {
	case 'A':
	case 'a':
		media = mediaAritimetica(notas);
		cout << "Sua media aritimetica eh: " << media;
		break;

	case'P':
	case'p':
		media = mediaPonterada(notas);
		cout << "Media ponderada eh: " << media;
		break;

	default:
		cout << "OPCAO INVALIDA!";
		break;
	}


}



