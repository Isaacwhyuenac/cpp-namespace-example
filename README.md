# Cpp Namespacing

```shell
conan install . --build=missing

conan create .
```


## Problem

In my [test_package/src/example.cpp](test_package/src/example.cpp), if I want to import [include/foundation/my_algorithm.h](include/my_foundation/my_algorithm.h),
it cannot be import as `#include "my_foundation/my_algorithm.h"`


