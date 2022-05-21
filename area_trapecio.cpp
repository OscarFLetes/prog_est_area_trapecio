/* Autor: Oscar Eduardo Fletes Ixta, Realizado: 04/02/2022
	Programa que pide datos para calcular el area de un trapecio
	
	Progama en c que calcula el area de un trapecio, con el uso del scanf y operaciones aritméticas
	
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia: Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		* Declaracion de variables 
		* Variables del tipo float
		* Uso de scanf
		* printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables de tipo float, uso del scanf, realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa  pide como entrada 3 variables del tipo float (medida de B, medida de d, medida de h)
	El programa pide datos para calcular el area de un trapecio
	*/
	
#include<stdio.h>//libreria para el cuerpo de c

int main(){
	//Variables 
	float B, b, h, area;//Variables con decimal
	//Entrada
	printf("Introduce la medida de B: ");//imprime mensaje
	scanf("%f" ,&B);//lee el numero insertado por el teclado
	printf("Introduce la medida de d: ");//imprime mensaje
	scanf("%f" ,&b);//lee el numero insertado por el teclado
	printf("Introduce la medida de h: ");//imprime mensaje
	scanf("%f" ,&h);//lee el numero insertado por el teclado
	//Proceso
	area=(B+b)*h/2;//calcula el area
	//Salida
	printf("El area del trapecio es %f" ,area);//imprime la salida del area 
	
	return 0;
}
