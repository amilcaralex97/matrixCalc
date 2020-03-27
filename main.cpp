#include<iostream>
#include<time.h>
#include"arregloDinamico.h"
#include"matrizDinamica2D.h"
#include"suma.h"
#include"resta.h"
#include"matriz_matriz.h"
#include"determinante.h"
#include"division.h"
using namespace std;

int main(int argc, char** argv){
	
class arregloDinamico a;
class matrizDinamica2D m2D;
class suma s;
class resta r;
class matriz_matriz tres;
class determinante de;
class division div;


int opc, menuGeneral;
int tam=0;
int am=0;
int usuario=0;
int Dim;
float deter;
do{cout<<"\t\t\tCALCULADORA DE MATRICES"<<endl<<endl<<"Elija una opcion"<<endl<<"1...Suma"<<endl<<"2...Resta"<<endl<<"3...Multiplicacion"<<endl<<"4...Division"<<endl<<"5...Inversa"<<endl<<"6...Determinante"<<endl<<"7...Salir"<<endl;
   cout<<"\nOpcion :";
   cin>>menuGeneral;
   
   switch(menuGeneral)
   {case 1: //suma 
        system("cls");
        
              s.inicializarSuma(&m2D);
              s.llenarMatrizSuma(&m2D);
              s.imprimirMatrizSuma(&m2D);
        
        
   break;
      
   case 2: //resta
        system("cls");
         
        cout<<"\t\t\tRESTA"<<endl<<endl;
        
              system("cls");
              r.inicializarResta(&m2D);
              r.llenarMatrizResta(&m2D);
              r.imprimirMatrizResta(&m2D);
        
   break;
   
   case 3: system("cls");
   
        //Multiplicacion
         do{cout<<"\t\t\t\tMulTIPLICACION"<<endl<<endl;
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
         cout<<"Tamaño del filas "<<endl;
                   cin>>usuario;
                   if(usuario!=1)
                   {cout<<endl<<"Tamaño de las columnas ";
                   tam=1;
                   cout<<tam<<endl;
                   tres.iniciar(usuario, tam);
                   cout<<endl<<endl;}
                  else
                  { cout<<endl<<"Tamaño de las columnas "<<endl;
                   cin>>tam;
                   tres.iniciar(usuario, tam);
                   cout<<endl<<endl;}}
         if(opc==2)
         {cout<<"MATRIZ "<<endl<<endl;
         cout<<"Tamaño del filas "<<endl;
                   cin>>usuario;
                   cout<<endl<<"Tamaño de las columnas "<<endl;
                   cin>>tam;
                   tres.iniciar(usuario, tam);
                   cout<<endl<<endl;}
                   
                   cout<<"OPCION 2"<<endl;
                   
                   cout<<"~Su segunda opcion debe tener el mismo tamaño de filas que la primera en columnas~"<<endl<<endl;
                   
                   cout<<"Tamaño del filas"<<endl<<tam<<endl;
                   cout<<endl<<"Tamaño de las columnas "<<endl;
                   cin>>am;
                   tres.inicializarMatrizDinamica(tam,am);
                   tres.llenarMatrizDinamica();
        
        
                   cout<<endl;
                   system("pause");
                   system("cls");
                   if(usuario==1 ||tam==1)
                   {cout<<"Vector *";
                      {if(tam==1 || am==1)
                       {cout<<" Vector =";
                         {  if(usuario==1 || am==1)
                            {cout<<" Vector "<<endl;}
                            else
                            {cout<<" Matriz "<<endl;}}}
                   else
                       {cout<<" Matriz =";
                       {  if(usuario==1 || am==1)
                            {cout<<" Vector "<<endl;}
                            else
                            {cout<<" Matriz "<<endl;}}}}}
                   else
                   {cout<<"Matriz *";
                      {if(tam==1 || am==1)
                       {cout<<" Vector =";}
                      else
                       {cout<<" Matriz =";
                       {  if(usuario==1 || am==1)
                            {cout<<" Vector "<<endl;}
                            else
                            {cout<<" Matriz "<<endl;}}}}}
                   cout<<"["<<usuario<<","<<tam<<"]     ["<<tam<<","<<am<<"]    ["<<usuario<<","<<am<<"]";
                   cout<<endl;
                   cout<<endl;
 
                   tres.llenar();
                   tres.imprimir();
                   if(tam==1 ||am==1)
                   {cout<<"2 VECTOR"<<endl;}
                   else
                   {cout<<"2 MATRIZ"<<endl;}
                   cout<<endl;
                   tres.imprimirMatrizDinamica();
                   cout<<endl;
                   tres.imre();
        
       
                  
   break;
   
   case 4: // Division
        system("cls");
        cout<<"\t\t\tDivision"<<endl;
        cout<<"Tamaño de filas"<<endl;
        cin>>am;
        cout<<"Tamaño de Columnas"<<endl;
        cin>>Dim;
         
        
        de.iniciardivision(am,Dim);
        cout<<endl<<endl<<endl<<"Matriz B"<<endl;
        cout<<"\n******Para calcular una division la matriz B debe ser cuadrada******"<<endl;
        de.inicializarDeterminante(Dim);
        system("cls");
         cout<<"\t\t\tDivision"<<endl;
        deter=de.llenarDeterminante(Dim);
        if(deter==0)
        {de.imp();
        de.inicializarInversa(Dim);
  	    de.llenarMatrizInversa(Dim);
     	 cout<<endl;
       
     	 de.ImprimirMatrizInversa(Dim); }
        
        else
        {de.imp();
        de.inicializarInversa(Dim);
  	    de.llenarMatrizInversa(Dim);
     	 cout<<endl;
       cout<<"MATRIZ B (inversa)"<<endl;
     	 de.ImprimirMatrizInversa(Dim);
        
        de.llenardivision();
        de.imprimirdivision();
        }
        

        
   break;
   
   case 5: // Inversa
        system("cls");
    cout<<"\t\t\t\tInversa"<<endl;
    cout<<"\n******Para calcular su detrminante la matriz debe ser cuadrada******"<<endl;
    cout<<"\n Dimension:";
    cin>>Dim;
 	de.inicializarDeterminante(Dim);
 	system("cls");
 	cout<<"\t\t\t\tInversa"<<endl;
    cout<<"\nMATRIZ["<<Dim<<","<<Dim<<"]"<<endl<<endl;
 	de.imprimirDeterminante(Dim);
 	cout<<endl<<endl;
    deter=de.llenarDeterminante(Dim);
    cout<<"Determinante:"<<deter<<endl<<endl;
	de.inicializarInversa(Dim);
	cout<<"MATRIZ INVERSA"<<endl<<endl;
	de.llenarMatrizInversa(Dim);
	cout<<endl<<endl;
	de.ImprimirMatrizInversa(Dim);
	cout<<endl<<endl;
    
       
 
   
      
       
   break;
   
    case 6: // Determinante
        system("cls");
        
        cout<<"\t\t\tDeterminante"<<endl;
        cout<<"\n******Para calcular su detrminante la matriz debe ser cuadrada******"<<endl;
        cout<<"\n Dimension:";
        cin>>Dim;
        cout<<"\nMatriz ["<<Dim<<","<<Dim<<"]"<<endl<<endl;
        de.inicializarDeterminante(Dim);
        system("cls");
        cout<<"\t\t\t\tDeterminante"<<endl;
       	cout<<"\nMATRIZ["<<Dim<<","<<Dim<<"]"<<endl<<endl;
        de.imprimirDeterminante(Dim);
        cout<<endl<<endl;
        deter=de.llenarDeterminante(Dim);
        cout<<"Determinante:"<<deter<<endl<<endl;
        
        
   break;
   
   
   case 7:// salir
        system("cls");
        cout<<"Saliendo..."<<endl;
        
   break;
   
   default: system("cls");
            cout<<"opcion no valida"<<endl;

   break;
   }
   system("pause");
   system("cls");
   
}while(menuGeneral!=7);             



return 0;
}




