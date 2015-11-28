project(test_fsa)

add_executable(
  ../test_dynamic_fsa
  FSA.hh
  FSA.cpp
  State.hh
  State.cpp
  Matcher.hh
  Matcher.cpp
  Edge.hh
  Edge.cpp
  main.cpp
  )