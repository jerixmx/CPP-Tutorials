#include <iostream>

// Define is_palindrome() here:

std::string inverter(std::string text) {
    std::string inverted_string = {};
    for (int i = text.size() ; i > 0; i--)
    {
        inverted_string+=text[i-1];
    }
    return inverted_string;
}

bool is_palindrome(std::string text) {
    if (text == inverter(text))
    {
        return true;
    }
    else {
        return false;
    }
}



int main() {

    std::cout << is_palindrome("madam") << "\n";
    std::cout << is_palindrome("ada") << "\n";
    std::cout << is_palindrome("lovelace") << "\n";

}