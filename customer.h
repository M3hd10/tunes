#include <iostream>
using namespace std;
class customer
{
    uint32_t id;

public:
    customer();
    ~customer();
    void start_buying();
    void display_album(uint32_t al_code);
    void display_full_album(uint32_t al_code);
    void order_album(uint32_t al_code);
    void order_track(uint32_t tr_id);
    void end_buy();
    void show_all_buys();
};