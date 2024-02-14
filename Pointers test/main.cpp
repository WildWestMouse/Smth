#include <iostream>

using namespace std;
char a = 64;
int abc = 22;
int *p_to_int = &abc;
int **p_to_p_to_int = &p_to_int;
int ***p_to_p_to_p_to_int = &p_to_p_to_int;
int *p;

int main()
{
    p = &abc;
    cout << a << '\n';
    cout << p << '\n';
    cout << **p_to_p_to_int << '\n';
    cout << &***p_to_p_to_p_to_int << '\n'; // указатели имеют адресс указывваемого элемента
    cout << &abc << '\n';
    return 0;
}
