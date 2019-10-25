#include <iostream>
#include <math.h>

using namespace std; 

int main()
{
	char salir = 'y';
	while (salir != 'n')
	{
		int operacion;
		float num1, num2;
		cout<<"Ingresa la operacion que quieres realizar:\n1.-Suma.\n2.-Resta.\n3.-Multiplicacion.\n4.-Division.\n5.-Potencia.\n6.-Raiz.\n";
		cin>>operacion;
		cout<<"Ingresa dos numeros\n";
		cin>>num1>>num2;

		switch (operacion)
		{
		case 1:
			cout<<"El resultado de la suma de "<<num1<<" + "<<num2<<" es: "<<num1 + num2<<"\n";
			break;
		case 2:
			cout<<"El resultado de la resta de "<<num1<<" - "<<num2<<" es: "<<num1 - num2<<"\n";
			break;
		case 3:
			cout<<"El resultado de la multiplicacion de "<<num1<<" * "<<num2<<" es: "<<num1 * num2<<"\n";
			break;
		case 4:
			cout<<"El resultado de la division de "<<num1<<" / "<<num2<<" es: "<<num1 / num2<<"\n";
			break;
		case 5:
			cout<<"El resultado de la potenciacion de "<<num1<<" ^ "<<num2<<" es: "<<pow(num1, num2)<<"\n";
			break;
		case 6: 
			cout<<"El resultado de "<<num1<<" raiz "<<num2<<" es: "<<pow(num1, 1/num2)<<"\n";
			break;

		}
	
		cout<<"Quieres realizar otra operacion?(y/n)";
		cin>>salir;
		system("cls");
	}
	return 0;
}
