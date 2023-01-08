#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main() 
{
    //print sem quebra de linha
    cout << "Bom dia";  
    cout << "Boa noite"; 

    //print com quebra de linha
    cout << "Bom dia" << endl;
    cout << "Boa noite" << endl;

    //print de inteiros
    int x, y;
    
    x = 10;
    y = 20;
    
    cout << x << endl;
    cout << y << endl; 

    //print de double com precisao de dados
    double z;
    
    z = 2.3456;
    
    cout << fixed << setprecision(2) << z << endl;

    //exemplo com todos os tipos
    int idade;
    double salario;
    string nome;
    char sexo;
    idade = 32;
    salario = 4560.9;
    nome = "Maria Silva";
    sexo = 'F';
    
    cout << fixed << setprecision(2);   
    cout << "A funcionaria " << nome << ", sexo "<< sexo << ", ganha " << salario << " e tem "<< idade << " anos" << endl;



    return 0;
} 
