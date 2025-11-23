# 🌍 Simulateur d'Écosystème Intelligent
## Description
Simulation d'écosystème en C++ avec SDL3 mettant en œuvre la POO avancée.
## Compilation
```bash
# Avec g++
g++ -std=c++17 -Iinclude -o ecosystem src/*.cpp src/Core/*.cpp src/Graphics/*.cpp -
# Avec clang++
clang++ -std=c++17 -Iinclude -o ecosystem src/*.cpp src/Core/*.cpp src/Graphics/*.c



 git add .
git commit -m " modifications apportees
    * scr/core/Ecosystem.cpp
    - Vector2D Ecosystem::GetRandomPosition() const {...} -> Vector2D Ecosystem::GetRandomPosition() {...}
    
    * include/core/Ecosystem.h
     - Vector2D GetRandomPosition() const; -> Vector2D GetRandomPosition();
" 
git push
