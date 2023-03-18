#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

struct nodo{
  int camisa;
  char nombre[20];
  int valu;
  int da;
  
 nodo *sig, *sig1,*sig2;
	
};



nodo *cab,*tiemp,*cab1 ,*aux,*aux2,*aux3,*aux1,*aux4;



int registrar(){


 if(cab==NULL){
 cab = (struct nodo *) malloc (sizeof(struct nodo));
   cout<<"Ingrese numero del participante : ";

 cin>>cab->camisa;
    cout<<"Ingrese el nombre del participante : ";
       cin>> cab->nombre;
      cab1 =cab;
      
 cab1->sig2=NULL;
 cab->sig =NULL;


  }else{
	
  
  aux = (struct nodo *) malloc (sizeof(struct nodo));
  

  cout<<"\n";
   cout<<"Ingrese numero del participante : ";

 cin>>aux->camisa;
 cout<<"Ingrese el nombre del participante : ";
       cin>> aux->nombre;
    
     aux->sig2 = cab1;
        cab1 = aux ;
    
  aux->sig =NULL;
 aux2 = cab;
     
 while(aux2->sig !=NULL)
      aux2 = aux2->sig;
       
 aux2->sig =aux;
	
 aux2 = aux = NULL;
      aux =NULL;
    free(aux);
    free(aux2);
}

}
int mostrar(){
 int i=1,c=1;
 int a = 0;
  cout<<" \t\t\t tiempos de los participante "<<endl;
  cout<<"\n";
  cout<<"\n";
  
 for(aux1=tiemp; aux1 != NULL; aux1=aux1->sig1){
  
 cout<<"\t\t\t\t "<<c++<<".Tiempo"": "<<aux1->valu<<endl;
	
}
 for(aux=cab; aux != NULL; aux=aux->sig){
    
 cout<<i++<<" Numero del jugador: "<<aux->camisa<<" Nombre: "<<aux->nombre <<endl;                   
	
	
   
   }
	
}


int mostraordenamiento(){
 int cont=1;


 for( aux=cab1; aux != NULL; aux=aux->sig2){
   
   
 cout<<cont++<<" : Numero del jugador: "<<aux->camisa<<" Nombre: "<<aux->nombre <<endl;
  
  
 }


} 
	
	
	




int mostra2(){
 int i=0;
 int b=1;
 int c=1;
   for(aux1=tiemp; aux1 != NULL; aux1=aux1->sig1){

       aux1->da =aux1->valu+ aux1->valu;
      
       cout<<i++<<" promedio: "<<aux1->da<<endl;
       cout<<"Numero de Participan "<<c++<<endl;
}


}



int tiempo1(){
	
 if(tiemp ==NULL){
  
 tiemp = (struct nodo *) malloc (sizeof(struct nodo));
   cout<<"ingrese el tiempo: ";

 cin>>tiemp->valu;
 tiemp->sig1 =NULL;
	
  
 }
  else {
	
  
  aux1 = (struct nodo *) malloc (sizeof(struct nodo));
  cout<<"\n";
   cout<<"Ingrese el tiempo: ";

 cin>>aux1->valu;
	
	

 aux1->sig1 =NULL;
 aux3 = tiemp;
   
    
 while(aux3->sig1 !=NULL)
      aux3 = aux3->sig1;
       
 aux3->sig1 =aux1;
	
 aux3 = aux1 = NULL;
    free(aux1);
    free(aux3);
    


}
	
	
	
}
   
                                                                                                   

	



int main(){
    int opc=0;
    do{ cout<<"\n";
        cout<<"\tmenu"<<endl;
         cout<<"\n";
      cout<<"1.Registrar participante"<<endl;
      cout<<"2.agregar tiempo de llegada"<<endl;
        cout<<"3. lista de participante"<<endl;
        cout<<"4. Promedio "<<endl;
        cout<<"5. ordenamiento de participantes "<<endl;
        cout<<"7. Salir"<<endl;
        cin>>opc;
        switch(opc){
            case 1:
               registrar();
    break;
       case 2:
    tiempo1();
    
   break;
            case 3:
             
   mostrar();
     
   break;
   case 4:
    mostra2();
    break;
    
    case 5:
     
    mostraordenamiento(); 
    break;
    
     
            case 6:
                cout<<"Salir";
                break;
                default:
                    cout<<"Opcion no valida....";
                break;    
            }

        }while(opc!=6);
  }
  
  
  //Kris michael torres bonilla
  // Erick kamila garces reyes 
  // Adriana Lucia
