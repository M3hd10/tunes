#include "album.h"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

album::album()
{
    // cout << "album constructor" << endl;
}
album::~album()
{
    // cout << "album destructor" << endl;
}
uint32_t album::get_albumid()
{
    return id;
}
istream &operator>>(istream &in, album &al)
{
    in >> al.id >> al.name >> al.singer >> al.price;
    return in;
}

ostream &operator<<(ostream &out, const album &al)
{
    out << al.id << " " << al.name << " " << al.singer << " " << fixed << setprecision(3) << al.price << '\n';
    for (track v : al.tracks)
        out << v;
    return out;
}

void album::add_track(track &tr)
{
    // cout << "start add_track" << endl;
    tracks.push_back(tr);
    tr.set_album(id);
    // cout << "end add_track" << endl;
}