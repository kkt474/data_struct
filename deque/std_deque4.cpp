#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d = {1,2,3,4};

    // 从头到尾
    int find_num = 3;
    // std::deque<int>::iterator it = d.begin();
    auto it = d.begin();
    while (it != d.end()) {
        if (*it == find_num) {
            cout << "Found " << find_num << endl;
            break;
        }
        it++;
    }
    if (it == d.end()) {
        cout << "Not found " << find_num << endl;
    }

    return 0;
}