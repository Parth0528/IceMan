// Actor.h
#ifndef ACTOR_H
#define ACTOR_H

#include "GraphObject.h"

class Actor : public GraphObject {
public:
    Actor(int imageID, int startX, int startY, Direction dir = right, int depth = 0);
    virtual ~Actor();
    virtual void doSomething();
};

class Ice : public Actor {
public:
    Ice(int startX, int startY);
    virtual ~Ice();
};

class Iceman : public Actor {
public:
    Iceman();
    virtual ~Iceman();
    virtual void doSomething() override;
};

#endif // ACTOR_H
