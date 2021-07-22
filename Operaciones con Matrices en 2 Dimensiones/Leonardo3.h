     		         			     
		      void potencia(){
		      		      
		      	   float A[5][5], C[5][5];
		      	   cout<<"\n\n\t\t\t\tFUNCION PERMITE OBTENER LA POTENCIA 2 DE UNA MATRIZ 5X5 \n\n";

                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                              
                             cout<<"\t\t\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         } 
                     }      			            
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");  		           
              
                   // Inicializamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           *(*(C+i)+j) = 0;
                   // Generamos la matriz C.
                   for(int i=0; i<5; ++i)
                       for(int j=0; j<5; ++j)
                           for(int z=0; z<5; ++z)
                               *(*(C+i)+j) += *(*(A+i)+z) * *(*(A+z)+j);

    	           cout<<"\nImprimiendo matriz 1: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }
                   cout<<"\nImprimiendo matriz 1: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }                   
                   system("pause");
                   system("cls");                  
	               cout<<"\nImprimiendo matriz resultante : \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(C+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   	
			       

	          }	
