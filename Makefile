all: example

example: src/tafqit.cpp examples/example.cpp
    g++ -o example src/tafqit.cpp examples/example.cpp

clean:
    rm -f example
