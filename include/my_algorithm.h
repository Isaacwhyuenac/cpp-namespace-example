#pragma once

#include <vector>
#include <string>


#ifdef _WIN32
  #define MY_ALGORITHM_EXPORT __declspec(dllexport)
#else
  #define MY_ALGORITHM_EXPORT
#endif

MY_ALGORITHM_EXPORT int answer();
