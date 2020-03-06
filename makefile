src/%.o : src/%.cpp
	gcc -pic -c -o $@ $^
cls/%.o :
	make "$(patsubst %.c\",%.o\",$(wildcard src/$*/**.cpp))"
	ld -r -o $@ "$(patsubst %.c\",%.o\",$(wildcard src/$*/**.cpp))"

