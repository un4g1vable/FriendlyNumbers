#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int sumdivs1 = 0, sumdivs2 = 0;
    int number1, div1, number2, div2;
    cout << "Введите первое число: ";
    cin >> number1;
    cout << "Введите второе число: ";
    cin >> number2;

    for (div1 = (number1 - 1) ; div1 > 0; div1--) {
        if (number1 % div1 == 0) {
            sumdivs1 += div1;
        }
    }

    for (div2 = (number2 - 1) ; div2 > 0; div2--) {
        if (number2 % div2 == 0) {
            sumdivs2 += div2;
        }
    }

    cout << sumdivs1 << endl;
    cout << sumdivs2 << endl;

    if ((number1 == sumdivs2) and (number2 == sumdivs1))
        cout << "Числа дружественные";
    else
        cout << "Числа недружественные";
}