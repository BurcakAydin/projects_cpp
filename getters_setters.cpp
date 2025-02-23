#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
    string rating;  // Private attribute

public:
    string title;
    string director;

    // Constructor
    Movie(string aTitle, string aDirector, string aRating) {
        title = aTitle;
        director = aDirector;
        setRating(aRating);  // Use the setter to validate rating
    }

    // Setter for rating (only allows valid ratings)
    void setRating(string aRating) {
        if (aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR") {
            rating = aRating;
        } else {
            rating = "NR";  // Default to "Not Rated" if invalid
        }
    }

    // Getter for rating
    string getRating() {
        return rating;
    }
};

int main()
{
    // Create a Movie object with a valid rating
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // Display the rating using the getter
    cout << "Movie: " << avengers.title << endl;
    cout << "Director: " << avengers.director << endl;
    cout << "Rating: " << avengers.getRating() << endl;

    // Create a Movie object with an invalid rating
    Movie mysteryMovie("Unknown Movie", "Unknown Director", "XYZ");

    // Display rating - should default to "NR"
    cout << "Movie: " << mysteryMovie.title << endl;
    cout << "Director: " << mysteryMovie.director << endl;
    cout << "Rating: " << mysteryMovie.getRating() << endl;

    return 0;
}
