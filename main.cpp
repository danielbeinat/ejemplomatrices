#include <iostream>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
void sumar();
void restar();
void multiplicar();
void trasponer();
void mostrar_puntos_de_silla();
int opcion;


int main()
{

    do{

    cout<<" operaciones con matrices: " <<endl;
    cout<<" 1. Sumar 2 matrices: " <<endl;
    cout<<" 2. restar 2 matrices: " <<endl;
    cout<<" 3. multiplicar 2 matrices: " <<endl;
    cout<<" 4. trasponer una matriz: " <<endl;
    cout<<" 5. mostrar puntos de silla de una matriz : " <<endl;
    cout<<" 6. salir : " <<endl;
    cin>>opcion;



    switch(opcion){


    case 1: sumar();
            break;

    case 2: restar();
            break;


    case 3: multiplicar();
            break;

    case 4: trasponer();
            break;


    case 5: mostrar_puntos_de_silla();
            break;


    //case 6: break;

    }

    }while(opcion != 6);











}


void sumar(){

int m,n,i,j;

cout<<"introduzca el numero de filas: ";
cin>>m;

cout<<"intruduzca el numero de columnas: ";
cin>>n;

float A[m][n], B[m][n], C[m][n];

cout<<"introduzca los datos de la matriz A: "<<endl;






for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "A["<<i<<"]["<<j<<"]: ";
    cin>>A[i][j];


}




    cout<<endl;








cout<<"introduzca los datos de la matriz B: "<<endl;




for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "B["<<i<<"]["<<j<<"]: ";
    cin>>B[i][j];


}




cout<<endl;





for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    {
        C[i][j]= A[i][j] + B[i][j];
    }




cout<<"\nla suma de las dos matrices es de: "<<endl;

for(i=0; i<m; i++) //recorrido para guardar los datos guardados en la matriz
for(j=0; j<n; j++)



    cout<< "C["<<i<<"]["<<j<<"]: "<<C[i][j]<<endl;


cout<<endl;


}


void restar(){

int m,n,i,j;

cout<<"introduzca el numero de filas: ";
cin>>m;

cout<<"intruduzca el numero de columnas: ";
cin>>n;

float A[m][n], B[m][n], C[m][n];

cout<<"introduzca los datos de la matriz A: "<<endl;






for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "A["<<i<<"]["<<j<<"]: ";
    cin>>A[i][j];


}




    cout<<endl;








cout<<"introduzca los datos de la matriz B: "<<endl;




for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "B["<<i<<"]["<<j<<"]: ";
    cin>>B[i][j];


}




cout<<endl;





for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    {
        C[i][j]= A[i][j] - B[i][j];
    }




cout<<"\nLa resta de las dos matrices es de: "<<endl;

for(i=0; i<m; i++) //recorrido para guardar los datos guardados en la matriz
for(j=0; j<n; j++)



    cout<< "C["<<i<<"]["<<j<<"]: "<<C[i][j]<<endl;


cout<<endl;


}





void multiplicar(){

int m,n,i,j;

cout<<"introduzca el numero de filas: ";
cin>>m;

cout<<"intruduzca el numero de columnas: ";
cin>>n;

float A[m][n], B[m][n], C[m][n];

cout<<"introduzca los datos de la matriz A: "<<endl;






for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "A["<<i<<"]["<<j<<"]: ";
    cin>>A[i][j];


}




    cout<<endl;








cout<<"introduzca los datos de la matriz B: "<<endl;




for(i=0; i<m; i++) //recorrido para llenar la matriz
for(j=0; j<n; j++)

{
    cout<< "B["<<i<<"]["<<j<<"]: ";
    cin>>B[i][j];


}




cout<<endl;





for(i=0; i<m; i++)
    for(j=0; j<n; j++)
    {
        C[i][j]= A[i][j] * B[i][j];
    }




cout<<"\nLa multiplicacion de las dos matrices es de: "<<endl;

for(i=0; i<m; i++) //recorrido para guardar los datos guardados en la matriz
for(j=0; j<n; j++)



    cout<< "C["<<i<<"]["<<j<<"]: "<<C[i][j]<<endl;


cout<<endl;



}


void trasponer(){

int numeros[3][3];


for(int i=0; i<3; i++){
    for(int j= 0; j<3; j++){
     cout<<"digite un numero ["<<i<<"]["<<j<<"]: ";
        cin>>numeros[i][j];



    }
}


cout<<"matriz normal: "<<endl;

for(int i=0; i<3; i++){
    for(int j= 0; j<3; j++){
     cout<<numeros[i][j]<<" ";



    }
    cout<<"\n";
}




cout<<"matriz transpuesta: "<<endl;

for(int i=0; i<3; i++){
    for(int j= 0; j<3; j++){
     cout<< numeros[j][i]<<" ";


    }
     cout<<"\n";

}






}

void mostrar_puntos_de_silla(){

int A[4][5]={{1,2,6,0,3},{4,5,7,8,3},{1,10,8,3,2},{8,7,9,5,4}};
int maximofilas[4]= {-999,-999,-999,-999};
int minimocolumnas[5]= {999,999,999,999};
int i,j;

for(i=0; i<4; i++){
    for(j=0; j<5; j++){
       if(A[i][j] > maximofilas[i])
        maximofilas[i] = A[i][j];

        if(A[i][j] < minimocolumnas[j])
        minimocolumnas[j] = A[i][j];




    }

}




for(i=0; i<4; i++){
    for(j=0; j<5; j++){

            if(maximofilas[i] == minimocolumnas[j])

                cout<<"punto de silla en: " << i << ", "<< j <<endl;


    }
}













}


