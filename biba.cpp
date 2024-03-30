#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
};




int count(ListNode* head){
    int cur = 0;
    while (head != nullptr){
        cur++;
        head = head->next;
    }
    return cur;
}
void PrintList(ListNode* head){
    while (head != nullptr){
        std::cout << head -> val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}
void InfrontInsertion(ListNode** head, int val){
    ListNode* tmp = new ListNode(val);
    tmp -> next = (*head);
    (*head) = tmp;
}
void Apppend(ListNode** head, int val){
    ListNode* temp = (*head);
    ListNode* tmp = new ListNode(val);
    while(temp -> next != nullptr){
        temp = temp->next;
    }
    temp->next = tmp;
}
void DeleteInfront(ListNode** head){
    ListNode* tmp = (*head) -> next;
    free((*head));
    *head = tmp;
}
void Pop(ListNode** head){
    ListNode* cur = (*head);
    ListNode* dum = new ListNode();
    
    while (cur -> next != nullptr){
        dum = cur;
        cur = cur->next;
    }
    dum -> next = nullptr;
    free(cur);
}
void DeleteALL(ListNode** head){
    while ((*head) != nullptr){
        ListNode* X = (*head);
        (*head) = (*head)->next;
        delete X;
    }
    *head = nullptr;
}

bool flags[3] = {false,false,false}; // 1 , 2 7 , 3-6

int main(){
    ListNode* head = new ListNode(0); // создали пустой список


    for ( ; ; ){
        cout << endl;
        cout << "введите пункт меню " << endl;
        cout << "1. создать список" << endl;
        cout << "2. количество элементов списка" << endl;
        cout << "3. вывод списка" << endl;
        cout << "4. вставка в начало списка" << endl;
        cout << "5. вставка в конец списка" << endl;
        cout << "6. исключение элемента из начала списка" << endl;
        cout << "7. исключение элемента из конца списка" << endl;
        cout << "8. АААААААА ДЕСТРОЙ ОЛЛ" << endl;
        int n;
        cout  << endl;
        cin >> n;
        cout  << endl;
        switch(n){
            case 1:{
            cout << head -> val << endl;
             
            // flags[1] = true;
            break;
            }
            case 2:{
                cout << count(head) << endl;
            break;
            }
            case 3:{
                PrintList(head);
            }
                
            break;
            case 4:{
            int a;
            cout << "введите число" << endl;
            cin >> a;
            InfrontInsertion(&head, a); 
            break;
            }
            case 5:
            {
            int a;
            cout << "введите число" << endl;
            cin >> a;
            Apppend(&head, a); 
            break;
            }
            case 6:{
            DeleteInfront(&head);
            break;
            }
            case 7:{
            Pop(&head);
            break;
            }
            case 8:{
                DeleteALL(&head);
                exit(0);
            }
            
        }
    }
}
