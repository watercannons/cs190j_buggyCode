#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char* argv[])
{
    ifstream ifs;
    ifs.open(argv[1]);

    ifs.close();
    return 0;
}
