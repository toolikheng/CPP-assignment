#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Specify the file path
    std::string filePath = "C:\\Users\\User\\Desktop\\Apu y2 SEM2\\data structure\\tripadvisor_hotel_reviews.csv";

    // Create an input file stream object
    std::ifstream file(filePath);

    // Check if the file was successfully opened
    if (!file.is_open()) {
        std::cerr << "Error: Unable to open file at " << filePath << std::endl;
        return 1; // Exit the program with an error code
    }

    // Close the file
    file.close();

    return 0; // Exit the program successfully
}