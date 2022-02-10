#include <iostream>
#include <map>
#include <vector>
#include "Person.h"

int main() {
    Person a("Omer",24);
    a.print(); //My name is Omer and I'm 24 years old

    Person b("Avital",3);
    a = b; //copy
    a.print(); //My name is Avital and I'm 3 years old
    b.print(); //My name is Avital and I'm 3 years old


    std::vector<Person> persons;
    Person d("Tomer",22);
    Person e("Omer",24);
    Person f("Avital",3);
    persons.push_back(d);
    persons.push_back(e);
    persons.push_back(f);

    persons.insert(persons.begin()+1,Person("Lola",5));
    for (auto p:persons)
        p.print();
}
