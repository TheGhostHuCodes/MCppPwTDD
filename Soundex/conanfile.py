from conans import ConanFile, CMake


class Soundex(ConanFile):
    requires = "gtest/1.8.1@bincrafters/stable"
    generators = "cmake"

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()
