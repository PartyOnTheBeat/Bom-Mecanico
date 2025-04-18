#include <gtest/gtest.h>
#include "engine.h"

TEST(QuizTest, CorrectAnswer) {
    Question q("What does this symbol mean?", {"Oil", "ABS", "Engine", "Battery"}, 0);
    EXPECT_EQ(q.getCorrectIndex(), 0);
}