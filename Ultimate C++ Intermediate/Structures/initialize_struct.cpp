#include<iostream>
using namespace std;

struct Movie {
    string title;
    int releaseYear;
    bool is_good;
};

int main(){

    Movie movie1={"The Dark Knight", 2008, true};
    Movie movie2={"The Godfather", 1972, true};
    Movie movie3={"The Shawshank Redemption", 1994, true};
    Movie movie4={"The Godfather: Part II", 1974, true};
    Movie movie5={"The Dark Knight Rises", 2012, true};

    cout<<movie1.title<<endl;
}