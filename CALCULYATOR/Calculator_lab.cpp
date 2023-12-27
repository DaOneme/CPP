#include <iostream>
#include <cmath>
using namespace std;



// Функции c действиями

int sum(int a, int b)
{
    cout << a + b << endl;
    return a + b;
}



int dif(int a, int b)
{
    cout << a - b << endl;
    return a - b; 
}



int multi(int a, int b)
{
    cout << a * b << endl;
    return a * b;
}



int divis(int a, int b)
{
    if (b == 0)
    {
        cout << "You cant divide by zero" << endl;
        return 0;
    }

    else
    {
        cout << a / b << endl;
        return a / b;
    }
}



int degree(int a, int b)
{
    cout << pow(a,b) << endl;
    return pow(a,b);
}





int main(){

// малейнький гайд   
    cout << "Please, you shold only use form like this >>> 'a + b' " << endl;
    cout << "You can use this type of operations >>> + - / * " << endl;
    cout << "To exit you need to enter any word/letter\n" << endl;

    

// цикл
    while (true)
    {
        // переменные
        int num_1 = 0, num_2 = 0;
        char operation;
        // чистка битов
        cin.clear();
        cin.sync();
        cout << "Please, enter the case >>> ";
        cin >> num_1 >> operation >> num_2;
        // проверка на правильность введённых данных
        if (!cin.good()) 
        {
            exit(0);
        }

        

// Операции
        switch (operation)
            {
            case '+':
                sum(num_1, num_2);
                break;
            
            case '-':
                dif(num_1, num_2);
                break;
            
            case '*':
                multi(num_1, num_2);
                break;
            
            case '/':
                divis(num_1,num_2);
                break;

            case '^':
                degree(num_1,num_2);
                break;

            default:
                cout << "Error, please, check the form" << endl;
                cout << "Please, you shold only use form like this >>> 'a + b' " << endl;
                cout << "You can use this operations >>> + - / * ^ " << endl;
                cout << "To exit you need to enter any letter \n" << endl;
                break;
            } 
    }
}