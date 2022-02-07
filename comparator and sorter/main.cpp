#include <iostream>


#include "Print.h"
#include "Hezka_Printer.h"
#include "Student.h"
#include "StudentNameComparator.h"

template<class T,class Comparator>
void sortStudents(T** students,Comparator& c,int length){
    for (int i = 0; i<length-1; i++) {
        for (int j = i; j<length-1; j++) {
            if (!c(students[j],students[j+1])) {
                Student* temp = students[j];
                students[j] = students[j+1];
                students[j+1] = temp;
            }
        }
    }
}


int main() {
//    Student *student = new Student("omer",22,80);
//    student->PrintStudent();

    //before comparator
    Student* s[] = {new Student("omer",22,80),new Student("tomer",23,44),new Student("avital",25,87)};
    for (int i = 0; i<3; i++) {
        s[i]->PrintStudent();
    }

    //comparator by name
    StudentNameComparator comp;
    sortStudents(s,comp,3);
    std::cout<<"After names :"<<std::endl;
    for (int i = 0; i<3; i++) {
        s[i]->PrintStudent();
    }

    for (int i = 0; i<3; i++) {
        delete(s[i]);
    }


}
