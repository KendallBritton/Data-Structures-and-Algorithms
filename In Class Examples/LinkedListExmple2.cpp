#include <iostream>
#include <string>
using namespace std;

typedef struct node_s{
    string first;
    string last;
    int age;
    node_s *next;
} node_t;

node_t *get_node(){
    node_t *tmp;
    tmp = new node_t;
    cout << "memory location: " << tmp << endl;
    cout << "Enter first name" << endl;
    getline(cin,tmp->first);
    cout << "Enter last name" << endl;
    getline(cin,tmp->last);
    cout << "Enter age" << endl;
    cin >> tmp->age;
    cin.ignore();
    tmp->next = NULL;

    return tmp;
}

int main(){
    node_t *head, *curr, *tmp;

    head = get_node();
    tmp = get_node();
    head->next = tmp;

    cout << "---------------------------------------" << endl;

    curr = head;
    while(curr!=NULL){
        cout << "First Name: " << curr->first << endl;
        cout << "Last Name: " << curr->last << endl;
        cout << "age: " << curr->age << endl;
        cout << endl;
        curr = curr->next;
    }

    return 0;
}