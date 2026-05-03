#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    std::string studentName;

    // Ask user to enter name
    std::cout << "Enter student name: ";
    std::getline(std::cin, studentName);

    // List of funny excuses (with {name} placeholder)
    std::string excuses[10] = {
        "{name} couldn't do homework because the dog ate the notebook.",
        "{name} was about to start, but the power went out for 12 hours.",
        "{name} forgot the homework at home... again.",
        "{name} was busy saving the world last night.",
        "{name}'s internet stopped working at the worst time.",
        "{name} accidentally submitted the homework to another universe.",
        "{name} had a serious headache after thinking too much.",
        "{name} was helping a friend and forgot their own work.",
        "{name}'s pen stopped working and refused to cooperate.",
        "{name} thought today was a holiday."
    };

    // Initialize random number generator
    std::srand(std::time(0));

    // Pick a random excuse (0 to 9)
    int index = std::rand() % 10;

    // Select the excuse
    std::string selectedExcuse = excuses[index];

    // Find "{name}" in the sentence
    std::size_t pos = selectedExcuse.find("{name}");

    // Replace "{name}" with actual name
    if (pos != std::string::npos) {
        selectedExcuse.replace(pos, 6, studentName);
    }

    // Display final excuse
    std::cout << "\nExcuse: " << selectedExcuse << std::endl;

    return 0;
}