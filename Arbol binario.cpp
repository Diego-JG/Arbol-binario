#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo * izq, *der;
};
//Los numeros son 7, 5, 2, 3, 4,1
int main(){
	Nodo *raiz=NULL;
	Nodo *aux=raiz;
	raiz=new Nodo();
	raiz->dato=7;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	aux=raiz->izq;
	aux->dato=5;
	aux->izq= new Nodo();
	aux->der= new Nodo();
	aux= aux->izq;
	aux->dato=2;
	aux->izq= NULL;
	aux->der=NULL;
	aux=raiz->izq;
	aux=aux->der;
	aux->dato=3;
	aux->izq= NULL;
	aux->der=NULL;
	aux=raiz->der;
	aux->dato=4;
	aux->izq=NULL;
	aux->der=new Nodo();
	aux=aux->der;
	aux->dato=1;
	aux->izq=NULL;
	aux->der=NULL;
	
	cout<<raiz->dato<<endl;
	cout<<raiz->izq->dato<<" "<< raiz->der->dato<<endl;
	cout<<raiz->izq->izq->dato<<" "<<raiz->izq->der->dato<<" "<<raiz->der->der->dato<<endl;
	getch();
	return 0;
}
