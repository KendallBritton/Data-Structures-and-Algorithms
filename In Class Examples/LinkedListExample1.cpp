#include <iostream>
#include <string.h>
using namespace std;

typedef struct node_s {
    char first[50];
    char last[50];
    int age;
    node_s *next;
} node_t;

int main(){
    node_t *head, *curr;
    node_t record0,record1;

    strncpy(record0.first,"Ron",50);
    strncpy(record0.last,"Sass",50);
    record0.age = 29;
    record0.next = &record1;
    
    strncpy(record1.first,"Joseph",50);
    strncpy(record1.last,"Sass",50);
    record1.age = 92;
    record1.next = NULL;

    head = &record0;

    curr = head;
    while( curr != NULL){
        cout << "First Name: " << curr->first << endl;
        cout << "Last Name: " << curr->last << endl;
        cout << "not really: " << curr->age << endl;
        cout << endl;
        curr = curr->next;
    }

    

    return 0;
}

