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


Run Mediator
cd "D:\Semester 4\Design pattern\MediatorOBS_DP\PlayerAttackEventSystem\mediator_version"
g++ -o game_mediator main.cpp Player.cpp EventMediator.cpp UI.cpp SoundSystem.cpp ScoreSystem.cpp Enemy.cpp
./game_mediator.exe

Run Observer
cd "D:\Semester 4\Design pattern\MediatorOBS_DP\PlayerAttackEventSystem\observer_version"
g++ -o ObserverPattern main.cpp Player.cpp UI.cpp SoundSystem.cpp ScoreSystem.cpp Enemy.cpp -std=c++11 -I.
.\ObserverPattern.exe