// COMSC-210 | Lab 15 | Dan Pokhrel
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

class Movie {
private:
    string title;
    int year;
    string writer;
public:
    // getters and setters
    string getTitle() const {return title;}
    void setTitle(string t) {title = t;}
    int getYear() const {return year;}
    void setYear(int y) {year = y;}
    string getName() const {return writer;}
    void setWriter(string w) {writer = w;}

    // Formatted Output
    void print(){
        cout << "Movie: " << title << endl;
        cout << "\tYear Released: " << year << endl;
        cout << "\tScreenwritier: " << writer << endl << endl;
    }
};

int main(){
    // Vector to hold movies
    vector<Movie> movies;

    // Read Data File
    ifstream fin("inputs.txt");
    if (!fin.good()) cout << "Input file not found.";
    while (fin.good()){
        
    }

    return 0;
}