#include <fstream>
#include <iostream>

int main()
{
    // declare a file handle and the file name
    std::ofstream Data_File;
    Data_File.open("example.txt");

    // Write data to file(similar to std::cout)
    Data_File << "Write this text to a file.\n";

    // Finally close the file
    Data_File.close();

    return 0;
}