#include<iostream>
#include<time.h>
#include"matrizDinamica2D.h"
#include"arregloDinamico.h"
#include"resta.h"
using namespace std;

void resta::inicializarResta(class matrizDinamica2D*pt1)
{int pc;
do{
cout<<"\t\t\t\tRESTA"<<endl<<endl;
cout<<"OPCION 1 \n \n 1...Vector   2...Matriz"<<endl;
cin>>pc;
if(pc!=1 && pc!=2)
{cout<<"opcion no valida"<<endl;
system("pause");
system("cls");}
}while(pc!=1 && pc!=2);

if(pc==1)
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

if(pc==2)
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
if(pc==1)
{cout<<"~~~~~Su segunda opcion debe tener el mismo tamaño que la primera~~~~~"<<endl<<endl;
cout<<"VECTOR "<<endl<<endl;
cout<<"Tamaño de las Filas"<<endl<<tamanoFilas<<endl;
cout<<"Tamaño de las Columnas"<<endl<<tamanoColumnas<<endl;}

if(pc==2)
{cout<<"~~~~~Su segunda opcion debe tener el mismo tamaño que la primera~~~~~"<<endl<<endl;
cout<<"MATRIZ "<<endl<<endl;
cout<<"Tamaño de las Filas"<<endl<<tamanoFilas<<endl;
cout<<"Tamaño de las Columnas"<<endl<<tamanoColumnas<<endl;}


this->matResta= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
matResta[i]= new int[this->tamanoColumnas];

for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)	
{cout<<"posicion ["<<i<<","<<j<<"] : ";
cin>>matResta[i][j];}}

this->matrizRestare= new int*[this->tamanoFilas];
for(int i=0; i<this->tamanoFilas; i++)
this->matrizRestare[i]= new int[this->tamanoColumnas];

for(int i=0; i<this->tamanoFilas; i++)
{for(int y=0; y<this->tamanoColumnas; y++)
{this->matrizRestare[i][y]=0;}}
   

 }
void resta::llenarMatrizResta(class matrizDinamica2D*pt1)
{
    for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{matrizRestare[i][j]=this->ptrMatrizDinamica2D[i][j]-matResta[i][j];}}
     
     
}
void resta::imprimirMatrizResta(class matrizDinamica2D*pt1)
{
     system("cls");
if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"Vector - Vector = Vector  "<<endl;}
else
{cout<<"Matriz - Matriz = Matriz  "<<endl;}
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
{cout<<matResta[i][j]<<"\t";}
cout<<endl;}
        
cout<<endl;
cout<<endl;
if(this->tamanoFilas==1 ||this->tamanoColumnas==1)
{cout<<"VETOR RESULTANTE "<<endl<<endl;}
else
{cout<<"MATRIZ RESULTANTE "<<endl<<endl;}
for(int i=0; i<this->tamanoFilas; i++)
{for(int j=0; j<this->tamanoColumnas; j++)
{cout<<matrizRestare[i][j]<<"\t";}
cout<<endl;}
cout<<endl;
cout<<endl;


}  



