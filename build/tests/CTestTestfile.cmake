# CMake generated Testfile for 
# Source directory: /home/vasco/Fr_Projects/BomMecanico/tests
# Build directory: /home/vasco/Fr_Projects/BomMecanico/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(BomMecanicoTests "/home/vasco/Fr_Projects/BomMecanico/build/tests/BomMecanicoTests")
set_tests_properties(BomMecanicoTests PROPERTIES  _BACKTRACE_TRIPLES "/home/vasco/Fr_Projects/BomMecanico/tests/CMakeLists.txt;22;add_test;/home/vasco/Fr_Projects/BomMecanico/tests/CMakeLists.txt;0;")
subdirs("../_deps/catch2-build")
subdirs("../_deps/googletest-build")
