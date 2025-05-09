add_test( QuestionTest.ConstructorCorrect /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorCorrect]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorCorrect PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( QuestionTest.ConstructorNotCorrect /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorNotCorrect]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorNotCorrect PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( QuestionTest.ConstructorEmptyText /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorEmptyText]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorEmptyText PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( QuestionTest.ConstructorEmptyOptions /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorEmptyOptions]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorEmptyOptions PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( QuestionTest.ConstructorOutOfRangeCorrectIndex /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorOutOfRangeCorrectIndex]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorOutOfRangeCorrectIndex PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( QuestionTest.ConstructorNegativeCorrectIndex /home/vasco/Fr_Projects/BomMecanico/build/tests/runTests [==[--gtest_filter=QuestionTest.ConstructorNegativeCorrectIndex]==] --gtest_also_run_disabled_tests)
set_tests_properties( QuestionTest.ConstructorNegativeCorrectIndex PROPERTIES WORKING_DIRECTORY /home/vasco/Fr_Projects/BomMecanico/build/tests SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( runTests_TESTS QuestionTest.ConstructorCorrect QuestionTest.ConstructorNotCorrect QuestionTest.ConstructorEmptyText QuestionTest.ConstructorEmptyOptions QuestionTest.ConstructorOutOfRangeCorrectIndex QuestionTest.ConstructorNegativeCorrectIndex)
