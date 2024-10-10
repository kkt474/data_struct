#include <iostream>
#include <string>
#include <map>

struct Student {
    int id;
    std::string name;
    int age;
};

int main() {
    std::map<std::string, Student> studentMap;
    studentMap["Tom"] = {1, "Tom", 18};
    studentMap["Ann"] = {4, "Ann", 20};
    studentMap["Jack"] = {2, "Jack", 16};

    for (const auto& m : studentMap) {
        std::cout << "name: " << m.first << " id: " << m.second.id << " age: " << m.second.age << "\n";
    }

    return 0;
}