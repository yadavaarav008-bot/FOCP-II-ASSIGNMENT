#include <iostream>
#include <string>
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

int main() {
    std::string userName;

    // Ask user to enter their name
    std::cout << "Enter your name: ";
    std::getline(std::cin, userName);

    // Store roast messages in an array
    std::string roasts[10] = {
        "{name} types so slow that the keyboard gets sleepy.",
        "{name} is so lazy, even a snail says 'move faster'.",
        "{name} studies so hard but still gets confused by Wi-Fi passwords.",
        "{name} runs code like it's a lottery ticket.",
        "{name}'s brain has too many tabs open and all are frozen.",
        "{name} takes so long to debug, bugs start feeling at home.",
        "{name} clicks compile and prays for miracles.",
        "{name} writes comments longer than the actual code.",
        "{name} is proof that Ctrl+C and Ctrl+V are life skills.",
        "{name} makes computers question their existence."
    };

    // Initialize random number generator using current time
    std::srand(std::time(0));

    // Generate a random index between 0 and 9
    int randomIndex = std::rand() % 10;

    // Select a random roast from the array
    std::string selectedRoast = roasts[randomIndex];

    // Find the position of "{name}" in the string
    std::size_t position = selectedRoast.find("{name}");

    // If "{name}" is found, replace it with the user's name
    if (position != std::string::npos) {
        selectedRoast.replace(position, 6, userName);
    }

    // Display the final roast message
    std::cout << "\nFunny Roast: " << selectedRoast << std::endl;

    return 0;
}