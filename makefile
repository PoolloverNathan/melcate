src/%.o : src/%.cpp
	gcc -pic -c -o $@ $^
cls/%.o : $(wildcard src/$*/**.o)
	ld -r -o $@ $^

