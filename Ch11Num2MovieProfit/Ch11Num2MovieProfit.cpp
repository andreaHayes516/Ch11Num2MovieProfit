/************************************************
** Author: Andrea Hayes
** Date: June 7, 2020
** Purpose: Store Movie info in a structure
** Input: Movie Data
** Processing: Structure
** Output: Movie info
*************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
// Declare Sturcture
struct MovieData
{
    string title;
    string director;
    int year;
    int runningTime;
    double prodCost;
    double firstYearRev;
};
void showMovie(MovieData);
int main() {
    // Declare Variables
    const int SIZE = 2;
    MovieData movies[SIZE];

    // Get user input
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter Movie Title: ";
        getline(cin, movies[i].title);
        cout << "Director: ";
        getline(cin, movies[i].director);
        cout << "Year: ";
        cin >> movies[i].year;
        cout << "Run Time in Minutes: ";
        cin >> movies[i].runningTime;
        cout << "Production Costs: ";
        cin >> movies[i].prodCost;
        cout << "First Year Revenue: ";
        cin >> movies[i].firstYearRev;
        string nothing;
        getline(cin, nothing);
        cout << endl;
    }
    for (int i = 0; i < SIZE; i++) {
        showMovie(movies[i]);
    }

    return 0;
}
// Function to display user input
void showMovie(MovieData movies)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Title: " << movies.title << endl;
    cout << "Director: " << movies.director << endl;
    cout << "Year: " << movies.year << endl;
    cout << "Run Time: " << movies.runningTime << endl;
    cout << "First Year Revenue: $" << movies.firstYearRev << endl;
    cout << endl;
}