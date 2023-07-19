// comparing struct using methods
#include <iostream>
using namespace std;

struct Movie{
    string title;
    string director;
    int rating;
    struct Date{
        int day;
        int month;
        int year;
    } release_date;
    
    bool equals(const Movie& m){
        return (
            title == m.title &&
            director == m.director &&
            rating == m.rating &&
            release_date.day == m.release_date.day &&
            release_date.month == m.release_date.month &&
            release_date.year == m.release_date.year
        );
    }

};


int main(){
    Movie m1 = {
        "The Dark Knight",
        "Christopher Nolan",
        9,
        {18, 7, 2008}
    };
    Movie m2 = { 
        "The Dark Knight Rises",
        "Christopher Nolan",
        8,
        {20, 7, 2012}
    };
    if(m1.equals(m2)){
        cout << "The movies are the same" << endl;
    }else{
        cout << "The movies are different" << endl;
    }
    return 0;
}