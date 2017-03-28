make:
	g++ src/main.cpp -o run -std=c++11
exec:
	./run
clean:
	rm run
