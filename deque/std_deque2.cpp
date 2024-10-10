#include<iostream>
#include<deque>

using namespace std;

class Student{
public:
     Student(int id){this->id = id;}

     int id;
};

std::deque<Student> d;

void deque_push_back(Student a){
    d.push_back(a);
    if(d.size()>3){
        d.pop_front();
    }
}

int main(){
    Student a1(1), a2(2), a3(3), a4(4);
    deque_push_back(a1);
    deque_push_back(a2);
    deque_push_back(a3);
    deque_push_back(a4);

    for(auto&i : d){
        cout << i.id << " ";
    }
    cout << "\n";
    return 0;
}