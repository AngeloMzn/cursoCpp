#include <iostream>
#include <iomanip>
#include <string>
#include <climits>
using namespace std;
int main() {
    double salario1, salario2;
    string nome1, nome2;
    int idade;
    char sexo;
    
    cout << "Nome da primeira pessoa: ";
    getline(cin, nome1); // ler até a quebra de linha e com espaços EX: Maria da Silva Sauro
    
    cout << "Salario da primeira pessoa: ";
    cin >> salario1; // ler nome sem usar espaço, ou seja, um informação só EX: 2
   
    cout << "Nome da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); // ------------- limpeza de buffer
    getline(cin, nome2);
    
    cout << "Salario da segunda pessoa: ";
    cin >> salario2;
   
    cout << "Digite uma idade: ";
    cin >> idade;
    
    cout << "Digite um sexo (F/M): ";
    cin >> sexo;
    
    cout << fixed << setprecision(2);
    cout << "Nome 1: " << nome1 << endl;
    cout << "Salario 1: " << salario1 << endl;
    cout << "Nome 2: " << nome2 << endl;
    cout << "Salario 2: " << salario2 << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: " << sexo << endl;
   
    return 0;
} 