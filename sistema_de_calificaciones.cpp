#include<stdio.h>
#include<stdlib.h>
main()
{
	int op,i=0,alumno=0,c=0,nl,aprobados,reprobados,h;
	char nombre[50][100];
	float calif[50][3],prom[alumno],suma,sumatot,promgrupo;
do{ 
	printf("\n\t*Bienvenido al MENU*");

 
	printf("\n	Elaborado por: Cortes Ramirez Omar");
	
  printf("\n**********MENU**********");	
    printf("\n1. Registro nombre alumnos");
    printf("\n2. Registro calificaciones alumnos");
    printf("\n3. Agregar calificaciones alumno por lista");
    printf("\n4. Lista de alumnos");
    printf("\n5. Estadistica grupo");
    printf("\n6. Lista Alumnos promedios");
    printf("\n7. Datos academicos alumno");
    printf("\n\t Selecciona una opcion:");
     scanf("%d",&op);

  switch(op)
    {
  		case 1: fflush(stdin);
                printf("\n Cual es tu nombre?:");
                 gets(nombre[i]);
                 i++; break;
    		   
     	case 2:	
                for(alumno=0;alumno<i;alumno++)
    	       { printf("\n%d %s:",alumno+1,nombre[alumno]);
    	          for(c=0;c<3;c++)
    	          { printf("\nCalificacion %d:",c+1);
    	          	 scanf("%f",&calif[alumno][c]);
                }
			   } break; 	   
    	case 3:  fflush(stdin);
    	         printf("\n Indica el numero de lista del alumno:");
    	          scanf("%d",&nl);
    	          if(nl<=i)
    	          { printf("\n%d %s:",nl,nombre[nl-1]);
    	             for(c=0;c<3;c++)
    	             { printf("\n Calificacion %d:",c+1);
    	                 scanf("%f",&calif[nl-1][c]);}
				  }
				  else
				     printf("\n ****Aun no existe ese numero de lista****\n");
    		   break;
    		   
      	case 4: printf("\n\n\n");
    	         sumatot=0;
    	         for(alumno=0;alumno<i;alumno++)
    	         { suma=0;
    	           printf("\n%d %s:",alumno+1,nombre[alumno]);
    	           for(c=0;c<3;c++)
    	           { printf("%.2f \t",calif[alumno][c]);
    	              suma=suma+calif[alumno][c];
				   }
				 prom[alumno]=suma/c;
				 printf("=%.2f",prom[alumno]);
				 
				 if(prom[alumno]>=6)
				    printf(" Aprobado\n");
				 else
				    printf(" Reprobado\n");
				    sumatot=sumatot+prom[alumno];
				 }
				 promgrupo=sumatot/i;
				 printf("\n\t Promedio grupal: %.2f\n",promgrupo);
    		   break;
    		   
    	case 5: reprobados=0;aprobados=0;
    	         for(alumno=0;alumno<i;alumno++)
    	         { if(prom[alumno]>=6)
    	            aprobados++;
    	         else 
    	            reprobados++;
				 }
				 printf("\n\t Total de alumnos: %d\n\t Total de Aprobados: %d\n\t Total de reprobrados:%d",i,aprobados,reprobados);
				 
				  int cal,repeticion;
				  for(cal=0;cal<=10;cal++)
				  {
				  	repeticion=0;
				  	for(i=0;i<10;i++){
					  
				  		if(cal==prom[i])
				  		repeticion++;
					  }
				  printf("\n El elemento %d, se repite %d",cal, repeticion);
				 
    		  }break;
    		   
    	case 6:  sumatot=0;
		         for(alumno=0;alumno<i;alumno++) { 
		           suma=0;
    	           printf("\n%d %s:",alumno+1,nombre[alumno]);
    	           for(c=0;c<3;c++){
    	           	 printf(" %.2f",calif[alumno][c]);
    	           	 suma=suma+calif[alumno][c];
				   }
    	         prom[alumno]=suma/c;
				printf("=%.2f",prom[alumno]);
				 
				 
				 for(h=1;h<=prom[alumno];h++)
				    printf(" %c",178);
				   sumatot=sumatot+prom[alumno];
			}
				 promgrupo=sumatot/i;
				 printf("\n\t Promedio grupal: %.2f\n",promgrupo);
			   break;
		case 7: 
		     fflush(stdin);
		      printf("\n\t Indice el numero de lista del alumno:");
		      scanf("%d",&nl);
		       if(nl<=i)
		       {
		       	printf("\t\t************************************************\n");
		       	printf("\n Numero de lista: %d",nl);
		       	printf("\n Alumno: %s",nombre[nl-1]);
		       	  for(c=0;c<3;c++)
		       		printf("\nCalificacion %.2f: ",calif[nl-1][c]);
		       		printf("\nPromedio final: %.2f",prom[nl-1]);
		       		printf("\n\t\t*******************************************");
		       	}
		       	else
		       	printf("\n Aun no existe ese numero de lista");
			 break;		       		
			   
    }	   
			
}while(op!=0);
     system("pause");
}
