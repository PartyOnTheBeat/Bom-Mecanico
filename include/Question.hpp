#pragma once
#include <string>
#include <vector>

class Question {
    private:
        std::string text; // The question text
        std::vector<std::string> options; // The answer options
        bool correct; // Indicates if the question is correct

        // Default constructor
        Question();

    public:

        // Parameterized constructor
        Question(const std::string& text, const std::vector<std::string>& options, int correctIndex);

        // Destructor
        ~Question();

        // Getters
        std::string getText() const;
        std::string getOptions() const;
        bool isCorrect() const;
    

};

