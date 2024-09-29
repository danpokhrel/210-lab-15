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
    
    // Temp variables
    string title;
    int year;
    string writer;
    string buf;
    // Read Data File
    ifstream fin("inputs.txt");
    if (!fin.good()) cout << "Input file not found.";
    while (fin.good()){
        // Get Data
        getline(fin, title);
        getline(fin, buf); year = stoi(buf);
        getline(fin, writer);

        // Populate variables
        Movie tmp;
        tmp.setTitle(title);
        tmp.setYear(year);
        tmp.setWriter(writer);
        movies.push_back(tmp);
    }

    // Output Movies
    for (Movie movie : movies)
        movie.print();

    return 0;
}