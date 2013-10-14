
test: test.c src/str-ends-with.c
	$(CC) -std=c99 $^ -o $@
	./test

.PHONY: test
