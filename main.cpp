#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    fstream input_file(argv[1]);
    string line = "print(\"Hello, World!\");";
    if (getline(input_file, line)) {
        cout << "Hello, World!" << endl;
    }
    return 0;
}
