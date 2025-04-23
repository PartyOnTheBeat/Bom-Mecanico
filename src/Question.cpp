#include "Question.hpp"
#include <stdexcept>

Question::Question(const std::string &text, const std::vector<std::string> &options, int correctIndex)
    : text(text), options(options), correctIndex(correctIndex) {

    if (text.empty()) {
        throw std::invalid_argument("Question text cannot be empty");
    }
    if (options.empty()) {
        throw std::invalid_argument("Options cannot be empty");
    }

    // Check if the correct index is within the bounds of the options vector
    if (correctIndex < 0 || correctIndex >= static_cast<int>(options.size())) {
        throw std::out_of_range("Correct index is out of range");
    }
}

Question::Question() {}

Question::~Question() {}

std::string Question::getText() const {
    return text;
}

std::string Question::getOptions() const {
    std::string optionsStr;

    for (const auto &option : options) {
        optionsStr += option + ", ";
    }

    // Remove the last comma and space
    if (!optionsStr.empty()) {
        optionsStr.pop_back();
        optionsStr.pop_back();
    }

    return optionsStr;
}

bool Question::isCorrect(int userSelectedIndex) const {
    return userSelectedIndex == correctIndex;
}
