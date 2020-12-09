#include <iostream>
using namespace std;

struct person{
    string name;
    string lastName;
};

typedef struct staff:person{
    int id;
}Staff, *StaffPtr;

int main(int argc, char * argv[]){
    struct person a = {
        .name = "Wesley",
        .lastName = "Chen"
    };
    cout << a.lastName << '\n';
    cout << a.name << '\n';

    struct person *ptr;
    ptr = &a;
    cout << &a << '\n';
    cout << ptr << '\n';

    /* dot(.) and arrow(->) operator are used to reference individual member of classes, structs */
    /* dot(.) is applied to actual object */
    /* arrow(->) is used with a pointer to an object */
    cout << &a.lastName << '\n';
    cout << &a.name << '\n';
    cout << &ptr->lastName << '\n';
    cout << &ptr->name << '\n';

    /* With typedef */
    staff p1;
    Staff p2;
    Staff *p1Ptr = &p1;
    StaffPtr p2Ptr = &p2;
    p1.id = 12;
    p2.id = 13;
    cout << "p1.id: " << p1.id << '\n';
    cout << "p2.id: " << p2.id << '\n';
    cout << "p1Ptr->id: " << p1Ptr->id << '\n';
    cout << "p2Ptr->id: " << p2Ptr->id << '\n';

    /* array of struct */
    int num;
    cout << "Total number of staff\n";
    cin >> num;
    StaffPtr arrPtr = new Staff[num];
    for(int i=0; i<num; i++){
        cout << i << " staff id: ";
        cin >> (arrPtr+i)->id;
        cout << i << " name: ";
        cin >> (arrPtr+i)->name;
    }

    for(int i=0; i<num; i++){
        cout << "staff id: " << (arrPtr+i)->id << ",";
        cout << " name: " << (arrPtr+i)->name << '\n';
    }
}
