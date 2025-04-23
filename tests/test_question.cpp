#include <gtest/gtest.h>
#include "Question.hpp"

TEST(QuestionTest, TestConstructor) {
    std::string questionText = "What is the capital of France?";
    std::vector<std::string> options = {"Paris", "London", "Berlin", "Madrid"};
    Question q(questionText, options, 0);

    EXPECT_EQ(q.getText(), questionText);
    EXPECT_EQ(q.getOptions(), options);
}