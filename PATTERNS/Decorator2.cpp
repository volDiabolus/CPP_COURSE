#include <iostream>
using namespace std;

class Interface {
  public:
    virtual ~Interface(){}
    virtual void do_it() = 0;
};

class DoCoreTask: public Interface {
  public:
    ~DoCoreTask() {
        cout << "DoCoreTask dtor" << '\n';
    }
    /*virtual*/
    void do_it() {
        cout << "DoCoreTask";
    }
};
 
class OptionalWrapper: public Interface {
  public:
    OptionalWrapper(Interface *inner) {
        m_wrappee = inner;
    }
    ~OptionalWrapper() {
        delete m_wrappee;
    }
    /*virtual*/
    void do_it() {
        m_wrappee->do_it();
    }
  private:
    Interface *m_wrappee;
};

class X: public OptionalWrapper {
  public:
    X(Interface *core): OptionalWrapper(core){}
    ~X() {
        cout << "X dtor" << "   ";
    }
    /*virtual*/
    void do_it() {
        OptionalWrapper::do_it();
        cout << 'X';
    }
};
 
class Y: public OptionalWrapper {
  public:
    Y(Interface *core): OptionalWrapper(core){}
    ~Y() {
        cout << "Y dtor" << "   ";
    }
    /*virtual*/
    void do_it() {
        OptionalWrapper::do_it();
        cout << 'Y';
    }
};
 
class Z: public OptionalWrapper {
  public:
    Z(Interface *core): OptionalWrapper(core){}
    ~Z() {
        cout << "Z dtor" << "   ";
    }
    /*virtual*/
    void do_it() {
        OptionalWrapper::do_it();
        cout << 'Z';
    }
};

int main() {
  Interface *myX = new X(new DoCoreTask);
  Interface *myXY = new Y(new X(new DoCoreTask));
  Interface *myXYZ = new Z(new Y(new X(new DoCoreTask)));
  myX->do_it();
  cout << '\n';
  myXY->do_it();
  cout << '\n';
  myXYZ->do_it();
  cout << '\n';
  delete myX;
  delete myXY;
  delete myXYZ;
}
