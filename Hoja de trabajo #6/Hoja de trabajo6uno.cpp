#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>
#include <regex>
using namespace std; 
void modelouno(); 
void modelodos(); 
void modelotres();
void modelocuatro(); 
void reporte();
void modificar();
void eliminar();
void mp();
int main(){
		mp(); 
}


void mp(){
	int resp;

	do {
		system("CLS");
		cout<<"--------------------------"<<"\n";
		cout<<" Menu Principal"<<"\n";
		cout<<"-------------------"<<"\n";
		cout<<" 1 - Modelo 1 "<<"\n";
		cout<<" 2 - Modelo 2 "<<"\n";
		cout<<" 3 - Modelo 3"<<"\n";
		cout<<" 4 - Modelo 4"<<"\n";
		cout<<" 5 - Reporte"<<"\n";
		cout<<" 6 - Modificar"<<"\n";
		cout<<" 7 - Eliminar"<<"\n";
		cout<<" 8 - Salir"<<"\n";
		cout<<"--------------------------"<<"\n";
		cout<<" Seleccione su opcion: ";
		cin>>resp;
		if (resp==1){		
			system("CLS");
			modelouno();			
		}
		else if (resp==2){		
			system("CLS");
			modelodos();
		}
		else if (resp==3){		
			system("CLS");
			modelotres();	
		}			
		else if (resp==4){
			system("CLS");
			modelocuatro();
		}
		else if (resp==5){
			system("CLS");
			reporte();
		}
		else if (resp==6){
			system("CLS");
			modificar();
		}
		else if (resp==7){
			system("CLS");
			eliminar();
		}
		else if (resp==8)
			break;
		else 
			break;
		
	} while(resp!=8);
}
void modelouno(){
	int dia, codigoar, cantidad; 
	float precio, calculo;
	ofstream db;
	string modelo; 
	precio = 10.00;
	modelo="MODELO 1"; 
		cout<<"-----------------Modelo 1------------------"<<endl;
	cout<<"--------------Ingrese los datos----------------"<<endl;
	cout<<"Ingrese el codigo del Articulo"<<endl; 
	cin>>codigoar;
	fflush(stdin);
	cout<<"Ingrese dia de la compra"<<endl; 
	cin>>dia;
	cout<<"Ingrese las unidades a comprar"<<endl; 
	cin>>cantidad; 
	const auto obj = regex{ " " }; 
	const auto repl = string{ "_" }; 
	const auto valor = modelo; 
	
		if ( cantidad >1){
		calculo = cantidad * precio;
	}
	
	cout<<"Modelo Seleccionado"<<"\t|"<<modelo<<endl; 
	cout<<"Codigo del articulo"<<"\t|"<<codigoar<<endl; 
	cout<<"Dia de la compra"<<"\t|"<<dia<<endl;
	cout<<"Unidades a comprar "<<"\t|"<<cantidad<<endl;
	cout<<"Total a pagar	  "<<"\t|"<<calculo<<endl; 
	system("Pause");
	try {
	db.open("libreria.txt",ios::app); //abrir archivo en modo de agregar datos
	db<<dia<<"\t"<<regex_replace(valor, obj, repl)<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
}

void modelodos(){
	
	int dia, codigoar, cantidad=0;
	float precio, calculo=0;
	string modelo;
	ofstream db;  
	precio = 15;  
		cout<<"-----------------Modelo 2------------------"<<endl;
	cout<<"--------------Ingrese los datos----------------"<<endl;
	modelo="MODELO 2"; 
	cout<<"Ingrese el codigo del Articulo"<<endl; 
	cin>>codigoar;
	fflush(stdin);
	cout<<"Ingrese dia de la compra"<<endl; 
	cin>>dia;
	cout<<"Ingrese las unidades a comprar"<<endl; 
	cin>>cantidad; 
	const auto obj = regex{ " " }; 
	const auto repl = string{ "_" }; 
	const auto valor = modelo; 	if ( cantidad >1){
		calculo = cantidad * precio;
	}
	
	cout<<"Modelo Seleccionado"<<"\t|"<<modelo<<endl; 
	cout<<"Codigo del articulo"<<"\t|"<<codigoar<<endl; 
	cout<<"Dia de la compra"<<"\t|"<<dia<<endl;
	cout<<"Unidades a comprar "<<"\t|"<<cantidad<<endl;
	cout<<"Total a pagar	  "<<"\t|"<<calculo<<endl;
	system("Pause"); 
	
	try {
	db.open("libreria.txt",ios::app); //abrir archivo en modo de agregar datos
db<<dia<<"\t"<<regex_replace(valor, obj, repl)<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
}

void modelotres(){
	
	int dia, codigoar, cantidad=0; 
	float precio, calculo=0; 
	string modelo;
	ofstream db;
	precio = 18.50;
	modelo="MODELO 3"; 
	cout<<"-----------------Modelo 3------------------"<<endl;
	cout<<"--------------Ingrese los datos----------------"<<endl;
	cout<<"Ingrese el codigo del Articulo"<<endl; 
	cin>>codigoar;
	fflush(stdin);
	cout<<"Ingrese dia de la compra"<<endl; 
	cin>>dia;
	cout<<"Ingrese las unidades a comprar"<<endl; 
	cin>>cantidad; 
	const auto obj = regex{ " " }; 
	const auto repl = string{ "_" }; 
	const auto valor = modelo; 
		if ( cantidad >1){
		calculo = cantidad * precio;
	}
	
	cout<<"Modelo Seleccionado"<<"\t|"<<modelo<<endl; 
	cout<<"Codigo del articulo"<<"\t|"<<codigoar<<endl; 
	cout<<"Dia de la compra"<<"\t|"<<dia<<endl;
	cout<<"Unidades a comprar "<<"\t|"<<cantidad<<endl;
	cout<<"Total a pagar	  "<<"\t|"<<calculo<<endl;
	system("Pause"); 
	try {
	db.open("libreria.txt",ios::app); //abrir archivo en modo de agregar datos
db<<dia<<"\t"<<regex_replace(valor, obj, repl)<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
}

void modelocuatro(){	

	int dia, codigoar, cantidad; 
	float precio, calculo;
	string modelo;
	precio = 25;
	ofstream db;
	modelo="MODELO 4"; 
		cout<<"-----------------Modelo 4------------------"<<endl;
	cout<<"--------------Ingrese los datos----------------"<<endl;
	cout<<"Ingrese el codigo del Articulo"<<endl; 
	cin>>codigoar;
	fflush(stdin);
	cout<<"Ingrese dia de la compra"<<endl; 
	cin>>dia;
	cout<<"Ingrese las unidades a comprar"<<endl; 
	cin>>cantidad; 
	const auto obj = regex{ " " }; 
	const auto repl = string{ "_" }; 
	const auto valor = modelo; 
	if ( cantidad >1){
		calculo = cantidad * precio;
	}
	
	cout<<"Modelo Seleccionado"<<"\t|"<<modelo<<endl; 
	cout<<"Codigo del articulo"<<"\t|"<<codigoar<<endl; 
	cout<<"Dia de la compra"<<"\t|"<<dia<<endl;
	cout<<"Unidades a comprar "<<"\t|"<<cantidad<<endl;
	cout<<"Total a pagar	  "<<"\t|"<<calculo<<endl;
	system("Pause"); 
	try {
	db.open("libreria.txt",ios::app); //abrir archivo en modo de agregar datos
	db<<dia<<"\t"<<regex_replace(valor, obj, repl)<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
	db.close();
	
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
	}
}

void reporte(){
	
		
	int dia, codigoar, cantidad, difedia, n, suma, n2, suma2; 
	float precio, calculo; 
	string modelo, difemodelo;	

	
	ifstream db; //Leeer archivo
	cout<<"Datos del archivo:"<<endl;
	cout<<" Dia|"<<"	 Modelo	 |"<<"	precio|"<<"	Total |"<<"	Codigo Articulo|"<<endl; 
	try {
	db.open("libreria.txt",ios::in); //abrir archivo en modo de agregar datos
	while(db>>dia>>modelo>>precio>>calculo>>codigoar){
	const auto obj = regex{ "_" }; 
	const auto repl = string{ " " }; 
	const auto valor = modelo; 
		cout<<setw(4)<<dia<<"|"<<setw(14)<<regex_replace(valor, obj, repl)<<"|"<<setw(7)<<precio<<"|"<<setw(8)<<calculo<<"|"<<setw(6)<<codigoar<<"|"<<endl; 
		n++; 
		suma+=dia;
		difedia =  dia;
		difemodelo = modelo; 
		n2++; 
		suma2+=calculo; 
	}
		db.close(); 
		cout<<"Dias"<<"\t"<<suma<<endl; 
		cout<<"Modelo mas seleccionado es: "<<setw(3)<<"\t"<<difemodelo<<" --- Cuantas veces fue seleccionado:" <<setw(3)<<difedia<<" "<<endl; 
		cout<<"Total recaudado por los 30 dias es: "<<"\t"<<suma2<<endl; 
		system("Pause");
	}
	
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
		
		}
}
void modificar(){
	
		int aux,dia,flag, aux2, cantidad, codigoar;
		float calculo, precio; 
	string modelo; 
	char respuesta; 
	//declaracion de objeto tipo archivo:
	ifstream db_a; //Archivo anterior ARCHIVO MAESTRO
	ofstream db_n; // Archivo nuevo ARCHIVO DE TRABAJO - TEMPORAL FILE
	//lectura de archivo y insercion de datos al archivo de trabajo

	try{
	db_a.open("libreria.txt",ios::in);
	db_n.open("Temporal.txt",ios::app);
	cout<<"------------------DATOS A MODIFICAR-----------"<<endl; 
	cout<<"Ingrese el dia al que modificara informacion:"<<endl;
	cin>>aux;
	cout<<"Ingrese codigo del articulo que modificara informacion"<<endl; 
	cin>>aux2; 
	do
	{
		cout<<"Ingrese el numero de unidades a modificar:"<<endl;
		cin>>cantidad;
		cout<<"\n\nEsta seguro? S/N";
		cin>>respuesta;
		cout<<"\n"<<endl;
		respuesta = toupper(respuesta); 
		
	}while  (respuesta!='S'); 
	while(db_a>>dia>>modelo>>precio>>calculo>>codigoar){
		if(aux==dia && aux2==codigoar){
			calculo = precio * cantidad; 
			db_n<<dia<<"\t"<<modelo<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
			cout<<"Archivo Actualizado...."<<endl; 
			flag = 1; 
		}
		else if(aux!=dia && aux2!=codigoar)
		db_n<<dia<<"\t"<<modelo<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl;
		 
	}
	db_a.close();
	db_n.close(); 
	if(flag==1){
	remove("libreria.txt");
	rename("Temporal.txt","libreria.txt");
	
	}
	system("Pause"); 
	}
	catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause");	
	}

}
void eliminar(){
	int aux,dia,flag, aux2, cantidad, codigoar;
	float calculo, precio; 
	string modelo; 
	//declaracion de objeto tipo archivo:
	ifstream db_a; //Archivo anterior ARCHIVO MAESTRO
	ofstream db_n; // Archivo nuevo ARCHIVO DE TRABAJO - TEMPORAL FILE
	
	//lectura de archivo y inserccion de datos al archivo de trabajo
	try{
	//apertura de archivos
	db_a.open("libreria.txt",ios::in); 
	db_n.open("Temporal.txt",ios::out); 
	
	cout<<"Ingrese dia que desea borrar:"<<endl;
	cin>>aux;
	cout<<"Ingrese el codigo del articulo que desea borrar"<<endl; 
	cin>>aux2; 
	while(db_a>>dia>>modelo>>precio>>calculo>>codigoar){
		if(aux==dia && aux2==codigoar){
			cout<<"Registro Eliminado"<<endl;
			flag= 1; 
		}
		else if(aux!=dia && aux2!=codigoar){
			cout<<"Registro Insertado"<<endl;
			db_n<<dia<<"\t"<<modelo<<"\t"<<precio<<"\t"<<calculo<<"\t"<<codigoar<<endl; 
			}
		}
		db_a.close();
		db_n.close(); 
		if(flag==1){
			remove("libreria.txt");
			rename("Temporal.txt","libreria.txt"); 
			
		}
		system("Pause");
		}
		catch (exception& X){
		cout <<"Error en la manipulacion del archivo"<<endl; 
		cout<<"Error: "<<X.what()<<endl; 
		system("Pause"); 
	}
		
}
