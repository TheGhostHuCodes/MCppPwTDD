.PHONY: format

CPP_FILES = $(shell find . -name '*.h' -or -name '*.cpp' -not -path './build/*')

format:
	clang-format -i $(CPP_FILES)
