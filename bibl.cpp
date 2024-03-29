#include <iostream>
#include "bibl.h"

using namespace std;
bool flags[3] = {false,false,false}; // 1 , 2 7 , 3-6

int main(){

    for ( ; ; ){
        cout << endl;
        cout << "введите пункт меню " << endl;
        cout << "1. создать список" << endl;
        cout << "2. ввести список" << endl;
        cout << "3. найти максимум" << endl;
        cout << "4. найти сумму" << endl;
        cout << "5. отсортировать" << endl;
        cout << "6. вывести массив" << endl;
        cout << "7. удалить массив" << endl;
        cout << "8. выйти из программы" << endl;
        int n;
        cin >> n;
        switch(n){
            case 1:
            int *A,N;
            cout << "введите количество элементов массива" << endl;
            cin >> N;
            A = new int[N];
            flags[0] = true;
            break;
            case 2:
            if (flags[0] == true){
            arr::input(A, N);
            }
            else{
                cout << "массива не существует" << endl;
                exit(0);
            }
            flags[1] = true;
            break;
            case 3:
            if(flags[1] == true){
                arr::max(A,N);
            }
            else{
                cout << "массив не был введен" << endl;
                exit(0);
            }
            break;
            case 4:
            if (flags[1] == true){
                arr::p_and_m(A,N);
            }
            else{
                cout << "массив не был введен" << endl;
                exit(0);
            }            
            break;
            case 5:
            if (flags[1]==true){
                arr::sort(A,N);
            }
            else{
                cout << "массив не был введен" << endl;
                exit(0);
            }
            break;
            case 6:
            if(flags[1]==true){
                arr::output(A,N);
            }
            else{
                cout << "массив не был введен" << endl;
                exit(0);
            }
            break;
            case 7:
            if(flags[0] == true){
                arr::delete_arr(A,N);
                }
            else{
                cout << "массива не существует" << endl;
                exit(0);
            }
            flags[0] = false;
            flags[1] = false;
            break;
            case 8:
            cout << "пока!" << endl;
            exit(0);
        }
    }
}
