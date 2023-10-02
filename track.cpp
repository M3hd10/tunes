#include <iostream>
using namespace std;

#include "track.h"

track::track()
{
    // cout << "track constructor" << endl;
}
track::~track()
{
    // cout << "track destructor" << endl;
}
void track::set_album(uint32_t ac)
{
    album_code = ac;
}

istream &operator>>(istream &in, track &obj)
{
    in >> obj.track_num >> obj.name >> obj.duration >> obj.price;
    return in;
}

ostream &operator<<(ostream &out, const track &tr)
{
    out << '\t' << tr.track_num << " " << tr.name << " " << tr.duration << " " << tr.price << '\n';
    return out;
}