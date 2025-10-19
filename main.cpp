#include <iostream> 
#include "tmatrix.h" 
const int n = 3; 

int main()
{
    TDynamicMatrix<int> a(n), b(n), c(n), d(n), e(n), f(n);
    int i, j;

    setlocale(LC_ALL, "Russian");     
    cout << "Введите коэффициенты матрицы А" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << "Матрица А = " << endl << a << endl;     
    cout << "Введите коэффициенты матрицы В" << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "Матрица B = " << endl << b << endl;
    c = a * b;
    d = a + b;     
    e = a - b;     
    f = b * a;


    int x;     
    while (true)
    {
            cout << "Список операций: " << endl << "1.Сложение \n2.Вычитание\n3.Умножение A*B \n4.Умножение B*A" << endl;         
            cout << "Введите номер желаемой операции : "; cin >> x; cout << endl; 
            switch (x)
            {
            case 1:
                cout << "Выбранная операция сложение:\n" << d << endl;
                break;         
            case 2:
                cout << "Выбранная операция вычитание:\n" << e << endl;
                break;         
            case 3:
                cout << "Выбранная операция A * B:\n" << c << endl;
                break;         
            case 4:
                cout << "Выбранная операция B * A:\n" << f << endl;
                break;         
            default:             
                break;
            }
    }     return 0;
}
