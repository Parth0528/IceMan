// StudentWorld.cpp
#include "StudentWorld.h"

StudentWorld::StudentWorld(std::string assetDir) : GameWorld(assetDir), m_iceman(nullptr) {
}

StudentWorld::~StudentWorld() {
    cleanUp();
}

int StudentWorld::init() {
    m_iceman = new Iceman();
    m_iceman->moveTo(30, 60);

    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            m_ice.push_back(new Ice(i * 4, j * 4));
        }
    }

    return GWSTATUS_CONTINUE_GAME;
}

int StudentWorld::move() {
    m_iceman->doSomething();

    // Example: Move all Ice objects
    for (auto ice : m_ice) {
        ice->doSomething();
    }

    return GWSTATUS_CONTINUE_GAME;
}

void StudentWorld::cleanUp() {
    // Delete dynamically allocated Ice objects
    for (auto ice : m_ice) {
        delete ice;
    }
    m_ice.clear();

    // Delete the Iceman object
    delete m_iceman;
    m_iceman = nullptr;
}
