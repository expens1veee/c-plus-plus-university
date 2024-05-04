#include <iostream>
#include <regex>
#include <string>
#include <vector>

using namespace std;


string deleteprobel(string s){
    return regex_replace(s, regex("\\s+"), "");

}

string deleteslova(string s){
    return regex_replace(s, regex("\\D"), "");
}

string scopki(string s){
    smatch m;
    string str;
    vector<string> output;
    string sep = " ";
    while (regex_search(s, m, regex("\\((.*?)\\)"))){
        str += m[1];
        str += sep;
        s = m.suffix();
    }
    return str;
}

string search(string s, string sech, string rep){
    smatch m;
    string str;
     return regex_replace(s, regex( "\\b" + sech + "\\b"), rep);
}
bool flag = false;
int main(){
    string s;
    for (; ;){
     cout << endl;
        cout << "1. Ввести строку" << endl;
        cout << "2. Вывести строку на экран" << endl;
        cout << "3. Удалить из строки пробельные символы" << endl;
        cout << "4. Удалить из строки нечисловые символы" << endl;
        cout << "5. Вывести текст содержащийся в скобках" << endl;
        cout << "6. Заменить слово" << endl;
        cout << "7. Выход" << endl;
        int n;
        cin >> n;
        switch(n){
            case 1:{
            cout << "vvod" << endl;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            getline(cin,s);
            flag = true;
            break;
        }
            case 2:
            if (flag){
            cout << s << endl;
            break;
            }
            else{
                cout << "vvedi stroky" << endl;
                break;
            }
            case 3:
            if (flag){
            s = deleteprobel(s);
            break;
            }
            else{
                cout << "vvedi stroky" << endl;
                break;
            }
            case 4:
            if (flag){
            s = deleteslova(s);
            break;
            }
            else{
                cout << "vvedi stroky" << endl;
                break;
            }
            case 5:
            if (flag){
            s = scopki(s);
            break;
            }
            else{
                cout << "vvedi stroky" << endl;
                break;
            }
            case 6:
            if (flag){
                string sech;
                string rep;
            cout << "slovo dlya zameni" << endl;
            cin >> sech;
            cout << "slovo menyat" << endl;
            cin >> rep;
            s = search(s,sech,rep);
            break;
            }
            else{
                cout << "vvedi stroky" << endl;
                break;
            }
            case 7:
            exit(0);
            default:
            cout << "wrong" << endl;
            break;





    }

}
}