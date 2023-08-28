#include<iostream>
#include<conio.h>


using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int in,su,m,d,i;
	char band='F';
	
	cout<<"Ingrese el numero para buscarlo"<<endl;
	cin>>d;
	in=0;
	su=15;
	i=0;
	while((in<=su)&&(i<15)){
		m = (in+su)/2;
		if(numeros[m] == d){
			band='V';
			break;
		}
		if(numeros[m]>d){
			su = m;
			m = (in+su)/2;
		}
		if(numeros[m]<d){
			in = m;
			m = (in+su)/2;
		}
		i++;
	}
	
	if(band == 'V'){
		cout<<"El numero se encontro en la posicion: "<<m<<endl;
	}
	else{
		cout<<"El numero NO se encontro\n";
	}
	char Nombres[5];
    char Carrera[5];
    cout << "Ingrese la informacion: \n";
        cout << "Nombre: ";
        cin >> Nombres[5];
        cout << "Carrera: ";
        cin >> Carrera[5];
        
        
        cout<<"\n Gracias"<<endl;
	getch();
	return 0;
}
