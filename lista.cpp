#include <iostream>
#include<conio.h>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void inslista(Nodo *&,int);
void moslista(Nodo *);
Nodo *lista = NULL;

int main(){
	
	
	int dato;
	
	cout<<"Digite un numero: ";
	cin>>dato;
	inslista(lista,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	inslista(lista,dato);
	
	cout<<"Digite un numero: ";
	cin>>dato;
	inslista(lista,dato);
	
	moslista(lista);
	
	getch();
	return 0;
}

void inslista(Nodo *&lista,int n){
	Nodo *nuenodo = new Nodo();
	nuenodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	
	while((aux1 !=NULL) && (aux1->dato < n)){
		aux2= aux1;
		aux1=aux1->siguiente;
	}
	
	if(lista == aux1){
		lista= nuenodo;
	}
	else{
		aux2->siguiente = nuenodo;
	}
	nuenodo->siguiente=aux1;
	
	cout<<"\tDato "<<n<<" Leido correctamente\n";
}

void moslista(Nodo *lista){
	Nodo *actual= new Nodo();
	actual = lista;
	
	while(actual !=NULL){
		cout<<actual->dato<<" -> ";
		actual = actual->siguiente;
	}
}

