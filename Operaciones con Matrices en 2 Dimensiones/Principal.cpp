#include<iostream>
#include<cstdlib>
using namespace std;
#include "Leonardo1.h"
#include "Leonardo2.h"
#include "Leonardo3.h"
#include "Leonardo4.h"
#include "Leonardo5.h"

//Prototipo de la funcion //

void pedirDatos();
void mostrarMatriz();
void obtener();            
void resultado();	  
void potencia();
void transpuesta();
void calcular();

//FUCION PRINCIPAL

int main(){	         
    
    int op;
    
    do{
    	cout<<"\t\t      //=========================================================================//"<<endl;
    	cout<<"\t\t      //           PROGRAMA: OPERACIONES CON MATRICES EN 2 DIMENSIONES           //"<<endl;
    	cout<<"\t\t      //                  AUTOR : Leonardo David Alvarado Cornejo                //"<<endl;
    	cout<<"\t\t      //                                 VESION: 2.0                             //"<<endl;
    	cout<<"\t\t      //=========================================================================//"<<endl;
    	cout<<"\n\n";
	    cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\t\t      //        1) OPCION.- 1 Ingresar los valores de las 2 matrices             //"<<endl;
	    cout<<"\t\t      //        2) OPCION.- 2 Obtener el producto de las 2 matrices              //"<<endl;   
		cout<<"\t\t      //        3) OPCION.- 3 Mostrar la potencias 2 de la primera matriz        //"<<endl;
		cout<<"\t\t      //        4) OPCION.- 4 Mostrar la transpuesta de la primera matriz        //"<<endl;
		cout<<"\t\t      //        5) OPCION.- 5 Calcular la media y varianza y compararlas         //"<<endl;
		cout<<"\t\t      //        0) Salir                                                         //"<<endl;
		cout<<"\t\t      //=========================================================================//"<<endl;
		cout<<"\n\n";  
		cout<<" Digite una Opcion: ";    
		cin>>op; 
		
	    switch(op){
		    case 1:
		    //  Ingresar los valores de las 2 matrices //	
		    system("cls");	
            pedirDatos();
            mostrarMatriz();	            
		    system("pause");
		    system("cls");     
		    break;
	    
		    case 2:
		    // Obtener el producto de las 2 matrices //	
		    system("cls");
            pedirDatos();
            mostrarMatriz();
            obtener();            
			resultado();	            
		    system("pause");
		    system("cls"); 
		    break;
		
		    case 3:
		    // Mostrar la potencias 2 de la primera matriz //	
		    system("cls");
            potencia();
		    system("pause");
		    system("cls"); 
		    break;
		    
		    case 4:
		    // Mostrar la transpuesta de la primera matriz //	
		    system("cls");				
            transpuesta();
		    system("pause");
		    system("cls"); 	
		    break;
		
		    case 5:
		    // Calcular la media y varianza y compararlas //	
		    system("cls");
		    calcular();
		    system("pause");
		    system("cls"); 	
		    break;

            default:
       	    if(op < 0||op >5){
               system("cls");
               cout<<endl<<"Este numero no es valido. . . "<<endl;
               cout<<endl<<"Presione Enter "<<endl;
               cout<<"\n\n";
		       system("pause");
		       system("cls");
		       }					
		}

	        if(op==0){		
	          cout<<"\n\n\tSalimos del Sistema: "<<endl;
	        }	
	
	}while(op!=0);

	return(0);
}
