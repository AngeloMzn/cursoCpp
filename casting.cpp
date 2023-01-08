#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() 
{
    // fazendo divisao inteira
    int a, b, resultado;
    a = 5;
    b = 2;
    resultado = a / b;
    cout << resultado << endl;
    
    // fazendo a divisao normal
    int c, d, resultado;
    c = 5;
    d = 2;
    resultado = (double)c / d;
    cout << resultado << endl;
    
    
    //transformando um double em int
    double e;
    int f;
    e = 5.0;
    f = (int)e;
    cout << f << endl;

    return 0;

} 
