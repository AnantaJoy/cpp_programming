#include<iostream>
#include<sstream>
using namespace std;

struct Person{
    string name;
    int age;
    double height;
};
Person parsePerson(string str){
    stringstream stream;
    stream.str(str);

    Person person;
    getline(stream, person.name, ',');
    stream >> person.age;
    stream.ignore(1);
    stream >> person.height;
    return person;

}

int main(){
    string str = "John, 25, 1.75";
    Person person = parsePerson(str);
    cout << "Name: " << person.name << endl;
    cout << "Age: " << person.age << endl;
    cout << "Height: " << person.height << endl;
    return 0;
}