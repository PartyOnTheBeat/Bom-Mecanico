#pragma once
#include <string>
#include <vector>

/**
 * @brief The Question class represents a question with multiple choice answers.
 * It contains the question text, a list of answer options, and a flag indicating if the question is correct.
 */ 
class Question {
    private:

        std::string text; // The question text
        std::vector<std::string> options; // The answer options
        int correctIndex; // The index of the correct answer
        
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
        
        bool isCorrect(int userSelectedIndex) const;

};

