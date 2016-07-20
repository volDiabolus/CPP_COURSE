CPP = g++
CPPFLAGS = -ftest-coverage -fprofile-arcs
.PHONY: all
all:
	$(CPP) $(CPPFLAGS) inherit_virtual.cpp -o inherit_virtual
.PHONY: test
test:
	chmod +x inherit_virtual && ./inherit_virtual
