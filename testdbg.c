#include "dbg.h"

int main()
{
    int total = 3;
    debug();
    debug("my-test %s %d", "total=", total);
    return 0;
}
