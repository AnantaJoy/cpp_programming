// arrays of structures

#include<iostream>
#include<vector>
using namespace std;

struct Movie{
    string title;
    int year;
};


int main(){
    vector<Movie> movies;
    movies.push_back({"The Dark Knight", 2008});
    movies.push_back({"The Godfather", 1972});

    cout<<movies[0].title<<endl;
    cout<<movies[0].year<<endl;

    for(Movie movie: movies){
        cout<<movie.title<<endl;
        cout<<movie.year<<endl;
    }
}