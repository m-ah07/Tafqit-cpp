#include "tafqit.h"
#include <map>

// Function to convert numbers to words in English
std::string numberToWordsEnglish(int num) {
    std::vector<std::string> below20 = {
        "Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
        "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"
    };
    std::vector<std::string> tens = {
        "", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"
    };

    // Handling numbers less than 20
    if (num < 20) return below20[num];

    // Handling numbers less than 100
    if (num < 100) return tens[num / 10] + (num % 10 ? " " + below20[num % 10] : "");

    // Handling numbers less than 1000
    if (num < 1000) return below20[num / 100] + " Hundred" + (num % 100 ? " " + numberToWordsEnglish(num % 100) : "");

    // Return a message for numbers out of range
    return "Number out of range";
}

// Function to support multiple languages for number conversion
std::string numberToWords(int num, const std::string& language) {
    if (language == "en") {
        return numberToWordsEnglish(num); // English support
    }
    // Placeholder for other languages
    return "Language not supported";
}
