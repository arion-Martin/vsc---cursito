#include  <iostream>
#include <math.h>
using namespace std;
class Figura{
	public:
		double area;
		double volumen;
};
class Cubo : public Figura{
	public:
		double lado;
		Cubo(double lado){
			this->lado = lado;
		}
		double calcularArea(){
			return area = pow(lado,2);
		}
		double calcularVolumen(){
			return volumen = pow(lado,3);
		}
		void Calcular(){
			cout<<"Cubo\n\n";
			cout<<"Ingresa el lado del Cubo: ";
			cin>>lado;
			Cubo cubo = Cubo(lado);
			cout<<"El area del Cubo es: "<<cubo.calcularArea()<<" cm^2\n";
			cout<<"El volumen del Cubo es: "<<cubo.calcularVolumen()<<" cm^3\n\n";
		}
};
class Esfera : public Figura{
	public:
		double radio;
		const double pi = 3.1415;
		Esfera(double radio){
			this->radio = radio;
		}
		double calcularArea(){
			return area = 4*pi*pow(radio,2);
		}
		double calcularVolumen(){
			return volumen = (4.0/3.0) * pi * pow(radio,3);
		}
		void Calcular(){
			cout<<"Esfera\n\n";
			cout<<"Ingresa el radio de la Esfera: ";
			cin>>radio;
			Esfera esfera = Esfera(radio);
			cout<<"El area de la Esfera es: "<<esfera.calcularArea()<<" cm^2\n";
			cout<<"El volumen de la Esfera es: "<<esfera.calcularVolumen()<<" cm^3\n\n";
		}
};
class Piramide : public Figura{
	public:
		double lado;
		double altura;
		Piramide(double lado, double altura){
			this->lado = lado;
			this->altura = altura;
		}
		double areaBase(){
			return pow(lado,2);
		}
		double areaCaras(){
			return (lado * altura / 2) * 4;
		}
		double calcularArea(){
			return areaBase() + areaCaras();
		}
		double calcularVolumen(){
			return areaBase() * altura /3;
		}
		void Calcular(){
			cout<<"Piramide\n\n";
			cout<<"Ingrese la base de la piramide: ";
			cin>>lado;
			cout<<"Ingrese la altura de la piramide: ";
			cin>>altura;
			Piramide piramide = Piramide(lado,altura);
			cout<<"El area de Piramide es: "<<piramide.calcularArea()<<" cm^2\n";
			cout<<"El volumen de la Piramide es: "<<piramide.calcularVolumen()<<" cm^3\n\n";
		}
};
int main(){
	cout<<"Calculadora de Area y Volumen\n\n";
	double lado,radio,altura;
	Cubo cubo = Cubo(lado);
	cubo.Calcular(); 
	Esfera esfera = Esfera(radio);
	esfera.Calcular();
	Piramide piramide = Piramide(lado, altura);
	piramide.Calcular();
	
}
