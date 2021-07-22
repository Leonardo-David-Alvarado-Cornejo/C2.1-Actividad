			    		         			     
		      void transpuesta(){

		      	   float A[5][5]; 
		      	   
		           cout<<"\n\n\t\t\t\tFUNCION CALCULA LA TRANSPUESTA DE LA PRIMERA MATRIZ 5X5 \n\n";

                     for(int i=0;i<5;i++){               
                         for(int j=0;j<5;j++){                              
                             cout<<"\t\t\tIngrese valor para A["<<i<<"]["<<j<<"]: ";
                             cin>>*(*(A+i)+j);                
				         }
                     }      			            
                   cout<<"\n\n"; 
                   system("pause");
                   system("cls");                            
    	           cout<<"\nImprimiendo matriz Original: \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){		                	                
						   cout<<*(*(A+i)+j)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";            
                   }                
                   cout<<"\n\n";                
	               cout<<"Imprimiendo matriz Transpuesta : \n\n";
	               for(int i=0;i<5;i++){
		               for(int j=0;j<5;j++){
		                   cout<<*(*(A+j)+i)<<"  "; //puntero de_matriz[i][j]
	                   }
	                   cout<<"\n\n";
                   }    			   	
	          }
