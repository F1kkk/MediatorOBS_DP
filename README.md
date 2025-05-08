# MediatorOBS_DP

Player Attack Event System

This project implements two versions of an event system for a game using Observer and Mediator Design Patterns in C++.

Project Structure

PlayerAttackEventSystem/
├── observer_version/           # Observer Pattern implementation
│   ├── main.cpp
│   ├── Player.h
│   ├── Player.cpp
│   ├── IObserver.h
│   ├── UI.h
│   ├── UI.cpp
│   ├── SoundSystem.h
│   ├── SoundSystem.cpp
│   ├── ScoreSystem.h
│   ├── ScoreSystem.cpp
│   ├── Enemy.h
│   ├── Enemy.cpp
│   └── CMakeLists.txt
├── mediator_version/           # Mediator Pattern implementation
│   ├── main.cpp
│   ├── Player.h
│   ├── Player.cpp
│   ├── EventMediator.h
│   ├── EventMediator.cpp
│   ├── UI.h
│   ├── UI.cpp
│   ├── SoundSystem.h
│   ├── SoundSystem.cpp
│   ├── ScoreSystem.h
│   ├── ScoreSystem.cpp
│   ├── Enemy.h
│   ├── Enemy.cpp
│   └── CMakeLists.txt
└── README.md                   # This file