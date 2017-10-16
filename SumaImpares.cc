// Programa que suma los números impares entre el uno y el diez
// Autor: Faustino Moisés Amador García
// Creado el 16 de Octubre de 2017
# include <iostream> 				//Librerias que se utilizan
using namespace std;

int main ()					//COmenzamos el cuerpo del programa
{
	int sum=0;				//Definimos variables
	int count=1;
	while (count<10 ) {			//Estructura de while
		if((count%2)>0){
	        	sum = sum + count;
		}  
		count++;
	}
	cout<<sum<<endl;
	return 0;
}
