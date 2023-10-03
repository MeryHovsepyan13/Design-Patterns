#ifndef TRANSPORT_H
#define TRANSPORT_H

class Transport {
public:
    virtual void deliver() = 0;
    virtual ~Transport() {}
};

#endif 