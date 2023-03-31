#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double radio;
    cout<<"Introducir el radio de la circunferencia: "<<endl;
    cin >> radio;
    if(radio>0)
    {
        const double Pi=3.14159;
        double perimetro=2*Pi*radio;
        cout<<"El perimetro de la circunferencia es: "<<perimetro<<endl;
    }else if (radio<0){
        cout<<"El radio no puede ser negativo."<<endl;
    }else{
        cout<<"El radio es 0."<<endl;
    }
    return 0;
}
