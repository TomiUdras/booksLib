# CMake generated Testfile for 
# Source directory: /Users/tomiudras/CLionProjects/booksLib
# Build directory: /Users/tomiudras/CLionProjects/booksLib/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[Test]=] "Test" "—force-colors" "-d")
set_tests_properties([=[Test]=] PROPERTIES  _BACKTRACE_TRIPLES "/Users/tomiudras/CLionProjects/booksLib/CMakeLists.txt;18;add_test;/Users/tomiudras/CLionProjects/booksLib/CMakeLists.txt;0;")
subdirs("external/doctest")
