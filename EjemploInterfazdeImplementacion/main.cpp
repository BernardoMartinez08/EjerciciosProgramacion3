#include <iostream>
#include <conio.h>

#include "Rectangulo.h"
using namespace std;

int main() {
	Rectangulo rec1;

	rec1.setBase(6);
	rec1.setAltura(3);

	cout << "Rectangulo { base: " << rec1.getBase() << ", altura: " << rec1.getAltura() 
		<< ", area: " << rec1.getArea() << ", perimetro: " << rec1.getPerimetro() << " }\n";

	_getch();
}