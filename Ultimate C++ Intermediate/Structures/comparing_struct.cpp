// comparing structures
#include <iostream>
using namespace std;

int main(){
    struct Movie {
        string title;
        int rating;
        struct Date {
            int day;
            int month;
            int year;
        } release_date;
    };

    Movie m1;
    m1.title = "The Dark Knight";
    m1.rating = 9;
    m1.release_date.day = 18;
    m1.release_date.month = 7;
    m1.release_date.year = 2008;

    // cout << "Title: " << m1.title << endl;
    // cout << "Rating: " << m1.rating << endl;
    // cout << "Release Date: " << m1.release_date.day << "/" << m1.release_date.month << "/" << m1.release_date.year << endl;

    Movie m2{"The Dark Knight Rises", 8, {20, 7, 2012}};
    // cout << "Title: " << m2.title << endl;
    // cout << "Rating: " << m2.rating << endl;
    // cout << "Release Date: " << m2.release_date.day << "/" << m2.release_date.month << "/" << m2.release_date.year << endl;

    // comparing structures
    if(m1.release_date.year == m2.release_date.year){
        cout << "Both movies were released in the same year" << endl;
    }else{
        cout << "The movies were released in different years" << endl;
    }

    return 0;

}