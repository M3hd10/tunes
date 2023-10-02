#include "store.h"
#include "track.h"
#include "album.h"

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;

store::store()
{
}

void store::load(string &file)
{
    vector<album> album_list;
    ifstream f(file);
    string s;
    stringstream ss;
    track tr;
    album al;
    while (!f.eof())
    {
        s.clear();
        ss.clear();
        std::getline(f, s);
        if (s.size())
        {
            if (s[0] == '\t')
            {
                ss.str(s);
                ss >> tr;
                al.add_track(tr);
                // tr.set_album(album_list[album_list.size() - 1].get_albumid());
                // al->add_track(tr); //this line was my bug in code because I should use the album in vector
                // also I have learned that every calls to push_back will call destructor of my object
                // album_list[album_list.size() - 1].add_track(tr);
            }
            else
            {
                ss.str(s);
                ss >> al;
                this->add_album(al);
            }
        }
    }
    // for (album &v : album_list)
    //     cout << v;
}

void store::add_album(album &al)
{
    albums.push_back(al);
    album_count[al] = DEFAULT_ALBUM_COUNT;
}

void store::run(int argc, char *argv[])
{
}