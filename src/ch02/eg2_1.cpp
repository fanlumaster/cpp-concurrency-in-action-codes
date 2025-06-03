//
// Note: cannot run this code, just for example
//
#include <thread>

struct func
{
    int &i;
    func(int &i_) : i(i_)
    {
    }
    void operator()()
    {
        for (unsigned j = 0; j < 1000000; ++j)
        {
            // ++i;
            // do_something(i); // May visit dangling reference
        }
    }
};

void oops()
{
    int some_local_state = 0;
    func my_func(some_local_state);
    std::thread my_thread(my_func);
    my_thread.detach(); // Do not wait this new thread to finish
}