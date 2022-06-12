#include <string>
#include <vector>
#include "movies.h"
#include "movie.h"
#include <iostream>

using namespace std;

void Movies::add_movie(string name_val, string rating_val, int watched_val)
{
    cout << "Adding..." << endl;

    bool exists{false};

    for (size_t i{0}; i < movies.size(); ++i)
        if (movies[i].name == name_val)
            exists = true;

    if (!exists)
    {
        Movie movie{name_val, rating_val, watched_val};
        movies.push_back(movie);
        cout << "Movie added successuflly" << endl;
    }
    else
    {
        cout << "Movie already exists with the same name" << endl;
    }
};

void Movies::add_one_watch(string name_val)
{
    cout << "Increasing..." << endl;
    for (size_t i{0}; i < movies.size(); ++i)
    {
        if (movies[i].name == name_val)
        {
            movies[i].watched++;
            cout << "Increased successfully" << endl;
            break;
        }
    }
}

void Movies::list_movies() const
{
    cout << "Listing..." << endl;
    for (const Movie &movie : movies)
    {
        cout << "*** MOVIE *** " << endl;
        cout << "Name: " << movie.name << endl;
        cout << "Rating: " << movie.rating << endl;
        cout << "Watched: " << movie.watched << endl;
    }
}