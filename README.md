# Modern C++ Programming With Test Driven Development

Programming examples from [Modern C++ Programming with Test-Driven
Development](https://pragprog.com/book/lotdd/modern-c-programming-with-test-driven-development)
by Jeff Langer.

The official repositories for code listings from this book can be found at
[here](https://github.com/jlangr) at Jeff's GitHub site.

## Compiling

This project uses [CMake](https://cmake.org/) as a build system and
[Conan](https://conan.io/) to manage packages. To be able to build these
individual projects, you will need these tools installed.

Build steps within a directory that contains a `CMakeList.txt` and
`conanfile.py` on Linux:

```shell
mkdir build && cd build
conan install ..
conan build ..
```
