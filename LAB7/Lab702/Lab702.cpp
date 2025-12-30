#include <iostream>
using namespace std;

int main()
{
    int score = 50;
    int* ptr = &score;

    cout << "score = " << score << '\n';
    cout << "address of score = " << &score << '\n';
    cout << "ptr = " << ptr << '\n';
    cout << "*ptr = " << *ptr << '\n';

    return 0;
}