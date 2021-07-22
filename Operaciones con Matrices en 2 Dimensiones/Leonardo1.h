				    float A[5][5], B[5][5], C[5][5];
				    
				    void pedirDatos(){
			
						cout<<"\n\n\t\t\tDigitando elementos de la matriz 1: \n\n";
						for(int i=0;i<5;i++){
							for(int j=0;j<5;j++){
								cout<<"\t\t\tDigite un numero ["<<i<<"]["<<j<<"]: ";
								cin>>*(*(A+i)+j); 
							}
						}
						cout<<"\n\n";
						system("pause");
						system("cls");
						cout<<"\n\n";

						cout<<"t\t\tDigitando elementos de la matriz 2: \n\n";
						for(int i=0;i<5;i++){
							for(int j=0;j<5;j++){
								cout<<"\t\t\tDigite un numero ["<<i<<"]["<<j<<"]: ";
								cin>>*(*(B+i)+j); 
							}
						}																																
					    cout<<"\n\n";
					    system("pause");
					    system("cls");
					    cout<<"\n\n";
                    }
                    
                    void mostrarMatriz(){
                    
						cout<<"\nImprimiendo matriz 1: \n\n";
						for(int i=0;i<5;i++){
							for(int j=0;j<5;j++){
								cout<<*(*(A+i)+j)<<"  "; 
							}
							cout<<"\n\n";
						}
						cout<<"\nImprimiendo matriz 2: \n\n";
						for(int i=0;i<5;i++){
							for(int j=0;j<5;j++){
								cout<<*(*(B+i)+j)<<"  "; 
							}
							cout<<"\n\n";
						}
				    }

