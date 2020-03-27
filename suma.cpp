#include<iostream>
#include<time.h>
#include"matrizDinamica2D.h"
#include"arregloDinamico.h"
#include"suma.h"
using namespace std;

void suma::inicializarSuma(class matrizDinamica2D*pt)
{int opc;
do{cout<<"\t\t\t\tSUMA"<<endl<<endl;
cout<<"OPCION 1 \n \n 1...Vector   2...Matriz"<<endl;
cin>>opc;
if(opc!=1 && opc!=2)
{cout<<"opcion no valida"<<endl;
system("pause");
system("cls");}

}while(opc!=1 && opc!=2);

if(opc==1)
{cout<<"\tVECTOR"<<endl<<endl;
cout<<"Determine la posicion del vector"<<endl<<endl;
cout<<"Tamaño de Filas"<<endl;
cin>>this->tamanoFilas;
if(this->tamanoFilas!=1)
{cout<<"Tamaño de las Columnas"<<endl;
this->tamanoColumnas=1;
cout<<tamanoColumnas<<endl;}
else
{cout<<"Tamaño de las Columnas"<<endl;
cin>>this->tamanoColumnas;}
}

if(opc==2)
{cout<<"MATRIZ "<<endl<<endl;
cout<<"Tamaño de las Filas"<<endl;
cin>>this->tamanoFilas;
cout<<"Tamaño de las Columnas"<<endl;
cin>>this->tamanoColumnas;}


this->ptrMatrizDinamica2D= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
this->ptrMatrizDinamica2D[i]= new int[this->tamanoColumnas];

for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>ptrMatrizDinamica2D[i][j];}}

/*-------------------------------------------------*/
cout<<endl<<endl<<endl;
cout<<"OPCION 2 \n \n"<<endl;
if(opc==1)
{cout<<"~~~~~Su segunda opcion debe tener el mismo tamaño que la primera~~~~~"<<endl<<endl;
cout<<"VECTOR "<<endl<<endl;
cout<<"Tamaño de las Filas"<<endl<<tamanoFilas<<endl;
cout<<"Tamaño de las Columnas"<<endl<<tamanoColumnas<<endl;}

if(opc==2)
{cout<<"~~~~~Su segunda opcion debe tener el mismo tamaño que la primera~~~~~"<<endl<<endl;
cout<<"MATRIZ "<<endl<<endl;
cout<<"Tamaño de las Filas"<<endl<<tamanoFilas<<endl;
cout<<"Tamaño de las Columnas"<<endl<<tamanoColumnas<<endl;}

this->matSuma= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
matSuma[i]= new int[this->tamanoColumnas];

for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>matSuma[i][j];}}

this->matrizSumare= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
this->matrizSumare[i]= new int[this->tamanoColumnas];

for(int i=0; i<this->tamanoFilas; i++)
{for(int y=0; y<this->tamanoColumnas; y++)
{this->matrizSumare[i][y]=0;}}
   

 }
void suma::llenarMatrizSuma(class matrizDinamica2D*pt)
{
    for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{matrizSumare[i][j]=matSuma[i][j] + this->ptrMatrizDinamica2D[i][j];}}
     
     
}
void suma::imprimirMatrizSuma(class matrizDinamica2D*pt)
{
system("cls");
if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"Vector + Vector = Vector  "<<endl;}
else
{cout<<"Matriz + Matriz = Matriz  "<<endl;}

cout<<"["<<this->tamanoFilas<<","<<this->tamanoColumnas<<"]     ["<<this->tamanoFilas<<","<<this->tamanoColumnas<<"]    ["<<this->tamanoFilas<<","<<this->tamanoColumnas<<"]";
cout<<endl;
cout<<endl;

if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"VECTOR 1  "<<endl<<endl;}
else
{cout<<"MATRIZ 1  "<<endl<<endl;}
for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{cout<<this->ptrMatrizDinamica2D[i][j]<<"\t";}
cout<<endl;}

cout<<endl;
cout<<endl;
cout<<endl;

if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"VECTOR 2  "<<endl<<endl;}
else
{cout<<"MATRIZ 2  "<<endl<<endl;}
for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{cout<<matSuma[i][j]<<"\t";}
cout<<endl;}
        
cout<<endl;
cout<<endl;
if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"VETOR RESULTANTE "<<endl<<endl;}
else
{cout<<"MATRIZ RESULTANTE "<<endl<<endl;}

for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{cout<<matrizSumare[i][j]<<"\t";}
cout<<endl;}
cout<<endl;
cout<<endl;


}  



