#include <iostream>
#include <fstream>
#include <vector>

int main() {
    // Open the text file
    std::ifstream file("/Users/ravinderbhandari/Desktop/usacosilver/3.in");
    if (!file) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    // Read the first number
    int n;
    file >> n;

    // Skip the pairs of numbers until the 5th pair
    for (int i = 0; i < 5; ++i) {
        int a, b;
        file >> a >> b;
        for (int j = 0; j < b; ++j) {
            int x, y;
            file >> x >> y;
        }
    }

    // Read and output the 5th pair of numbers
    int fifthPairFirst, fifthPairSecond;
    file >> fifthPairFirst >> fifthPairSecond;
    std::cout << "The 5th pair of numbers is: " << fifthPairFirst << " " << fifthPairSecond << std::endl;
    for (int i=0; i<1000; ++i) 
    {
        int a, b;
        file>>a>>b;
        std::cout<<a<<" "<<b<<std::endl;
    }

    // Close the file
    file.close();

    return 0;
}
