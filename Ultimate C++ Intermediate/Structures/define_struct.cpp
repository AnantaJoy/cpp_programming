#include<iostream>
using namespace std;

struct Movie
{
    string title;
    int releaseYear;

};

struct Customer
{
    int id;
    string name;
    string email;
};

int main(){
    Movie movie;
    movie.title = "Hawa";
    movie.releaseYear = 2022;
    cout << "Movie: " << movie.title << endl
         << "Relese Year: " << movie.releaseYear << endl;
    
    Customer customer;
    customer.id = 201;
    customer.name = "Chanchal";
    customer.email = "ch@test.com";

    cout << "Customer Id: " << customer.id << endl
         << "Customer Name: " << customer.name << endl
         << "Customer Email: " << customer.email << endl;

    return 0;
}