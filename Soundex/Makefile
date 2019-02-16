.PHONY: format

CPP_FILES = $(shell find . -name '*.h' -or -name '*.cpp' -not -path './build/*')
PY_FILES = $(shell find . -name '*.py')

format:
	clang-format -i $(CPP_FILES)
	black $(PY_FILES)
