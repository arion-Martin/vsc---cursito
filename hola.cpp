#include <iostream>
using namespace std;
class Cuadrado{
    public:
    //Atributos
    float base;
    float altura;
    //Metodo Constructor
    Cuadrado(float base, float altura){
        this->base = base;
        this->altura = altura;
    }
    //Calcular Area
    float CalcularArea(){
        resturn this->base * this->altura;
    }
};
int main(){

    

    cout<<"Ingrese la base el Cuadrado: ";
    cin>>base;
    cout<<"Ingrese la altura del Cuadrado: ";
    cin>>altura;
    Cuadrado Cuadrado = Cuadrado(base,altura);
    cout<<"El area del Cuadrado es: "<<Cuadrado.CalcularArea()<<endl;

    cout<<"Fin del programa";
    return 0;
}
