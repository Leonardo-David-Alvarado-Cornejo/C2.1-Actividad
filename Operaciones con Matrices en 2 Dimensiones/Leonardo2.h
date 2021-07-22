		
				void obtener(){
					
					// Inicializamos la matriz C.
					for(int i=0;i<5;i++){
						for(int j=0; j<5; ++j){
							*(*(C+i)+j) = 0;
						}
					}
					// Generamos la matriz C.
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							for(int z=0;z<5;z++){
								*(*(C+i)+j) += *(*(A+i)+z) * *(*(B+z)+j);
							}
						}
					}
					cout<<"\n\n";	
					system("pause");
					system("cls");
			    }
			    		    
			    void resultado(){
			    
					cout<<"\n\nImprimiendo matriz resultado : \n\n";
					for(int i=0;i<5;i++){
						for(int j=0;j<5;j++){
							cout<<*(*(C+i)+j)<<"  "; 
						}
						cout<<"\n\n";
					}
																										
				}
