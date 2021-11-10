// 1. Scrieti un program care citeste de la tastatura 2 numere si le schimba valorile cu ajutorul referintei. (Subprogram)

#include<iostream>
using namespace std;

void swap(int& a, int& b) {
    int copie = a;
    a = b;
    b = copie;
}

int main() {

    int a, b, s;

    cout << "Introdu doua numere" << endl;
    cin >> a >> b;

    swap(a, b);

    cout << "Dupa schimbare a este: " << a <<endl;
    cout << "Dupa schimbare b este: " << b <<endl;


    return 0;
}

