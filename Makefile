CPP = g++
.PHONY: all
all:
	$(CPP) inherit_virtual.cpp -o inherit_virtual
.PHONY: test
test:
	chmod +x inherit_virtual && ./inherit_virtual
