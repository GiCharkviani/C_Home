#ifndef _MOVIES_H_
#define _MOVIES_H_
#include<string>
#include<vector>
#include"movie.h"

using namespace std;

class Movies {
    public:
        // Constructor

        // Methods
        void add_movie(string name, string rating, int watched);
        void add_one_watch(string name);
        void list_movies() const;

    private:
        vector<Movie> movies;
};


#endif