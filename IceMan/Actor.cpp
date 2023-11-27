// Actor.cpp
#include "Actor.h"

Actor::Actor(int imageID, int startX, int startY, Direction dir, int depth)
    : GraphObject(imageID, startX, startY, dir, depth) {
    setVisible(true);
}

Actor::~Actor() {
    // Implement the destructor if needed
}

void Actor::doSomething() {
    // Implement the default behavior for actors
    // This method can be overridden by derived classes
}

Ice::Ice(int startX, int startY)
    : Actor(IID_ICE, startX, startY) {
    // Initialize Ice-specific variables if needed
}

Ice::~Ice() {
    // Implement the Ice destructor if needed
}

Iceman::Iceman()
    : Actor(IID_PLAYER, 30, 60, right) { // Adjust the starting position as needed
    // Initialize Iceman-specific variables if needed
}

Iceman::~Iceman() {
    // Implement the Iceman destructor if needed
}

void Iceman::doSomething() {
    // Implement the Iceman's doSomething() as described in the prompt
}
