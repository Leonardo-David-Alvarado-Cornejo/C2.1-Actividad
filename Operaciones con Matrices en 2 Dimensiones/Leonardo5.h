              void calcular(){
              	float x,a=0,a1=0,m,v,a2=0,a3=0,m1,v1;
  
	            cout<<"\n\n\t\t\tDigitando elementos de la matriz 1: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"\t\t\tDigite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(A+i)+j); //puntero de_matriz[i][j]
			            a=a+*(*(A+i)+j);
		            }
	            }
                cout<<"\n\n"; 
                system("pause");
                system("cls");  
                cout<<"\n\n";
	            cout<<"\t\t\tDigitando elementos de la matriz 2: \n\n";
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){
			            cout<<"\t\t\tDigite un numero ["<<i<<"]["<<j<<"]: ";
			            cin>>*(*(B+i)+j); //puntero de_matriz[i][j]
			            a2=a2+*(*(B+i)+j);
		            }
	            }
               cout<<"\n\n"; 	            
	
               
          
                m=a/25;
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){              
                         a1=a1+(*(*(A+i)+j)-m)*(*(*(A+i)+j)-m);
                       
                    }
                }  
                cout<<"\n\n"; 
                system("pause");
                system("cls");    				              
                v=a1/25;
                cout<<"\n\n La media de la Matriz 1 es "<<m<<"\n\n La varianza de la Matriz 1 es  "<<v<<endl;
                m1=a2/25;
	            for(int i=0;i<5;i++){
		            for(int j=0;j<5;j++){              
                         a3=a3+(*(*(B+i)+j)-m)*(*(*(B+i)+j)-m);
                       
                    }
                }                
                v1=a3/25;                
                cout<<"\n\n La media de la Matriz 2 es "<<m1<<"\n\n La varianza de la Matriz 2 es  "<<v1<<endl;
                cout<<"\n\n"; 
                system("pause");
                system("cls");  
                cout<<"\n\n";                
                if(m==m1){
                	cout<<"\n\n Ambos valores son iguales\n\n";
                }
                else if(m>m1){
                	cout<<"\n\n El mayor de la media es : \n\n"<<m;
                }
                else{
                	cout<<"\n\n El mayor de la media es : \n\n"<<m1;
                }
                
                if(v==v1){
                	cout<<"\n\n Ambos valores son iguales\n\n";
                }
                else if(v>v1){
                	cout<<"\n\nEl mayor de la varianza es : \n\n"<<v;
                }
                else{
                	cout<<"\n\nEl mayor de la varianza es : \n\n"<<v1;
                }    
			       cout<<"\n\n";	                                                
              }
