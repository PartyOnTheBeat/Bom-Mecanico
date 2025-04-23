#include <gtest/gtest.h>
#include "Question.hpp"

// Test fixture for the Question class
TEST(QuestionTest, ConstructorCorrect) {
    // Create a question object
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    Question q("What is the capital of France?", options, 1);

    // Test the getters
    EXPECT_EQ(q.getText(), "What is the capital of France?");
    EXPECT_EQ(q.getOptions(), "Option 1, Option 2, Option 3");

    EXPECT_TRUE(q.isCorrect(1));
}

TEST(QuestionTest, ConstructorNotCorrect) {
    // Create a question object
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    Question q("What is the capital of France?", options, 1);

    // Test the getters
    EXPECT_EQ(q.getText(), "What is the capital of France?");
    EXPECT_EQ(q.getOptions(), "Option 1, Option 2, Option 3");

    EXPECT_TRUE(!q.isCorrect(0));
}

TEST(QuestionTest, ConstructorEmptyText) {
    // Create a question object with empty text
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    EXPECT_THROW(Question q("", options, 1), std::invalid_argument);
}

TEST(QuestionTest, ConstructorEmptyOptions) {
    // Create a question object with empty options
    EXPECT_THROW(Question q("What is the capital of France?", {}, 1), std::invalid_argument);
}

TEST(QuestionTest, ConstructorOutOfRangeCorrectIndex) {
    // Create a question object with out-of-range correct index
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    EXPECT_THROW(Question q("What is the capital of France?", options, 3), std::out_of_range);
}

TEST(QuestionTest, ConstructorNegativeCorrectIndex) {
    // Create a question object with negative correct index
    std::vector<std::string> options = {"Option 1", "Option 2", "Option 3"};
    EXPECT_THROW(Question q("What is the capital of France?", options, -1), std::out_of_range);
}