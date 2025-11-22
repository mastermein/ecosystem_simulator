#pragma once

#include <cstdint>
#include <string>
#include <cmath>

namespace Ecosystem {
namespace Core {

// 🏷 STRUCTS POUR LES DONNÉES SIMPLES
struct Vector2D {
    float x;
    float y;
    
    // 🏗 Constructeur avec valeurs par défaut
    Vector2D(float xValue = 0.0f, float yValue = 0.0f) : x(xValue), y(yValue) {}
    
    // 📐 Méthodes utilitaires
    float Distance(const Vector2D& other) const {
        float dx = x - other.x;
        float dy = y - other.y;
        return std::sqrt(dx * dx + dy * dy);
    }
    
    Vector2D operator+(const Vector2D& other) const {
        return Vector2D(x + other.x, y + other.y);
    }
    
    Vector2D operator*(float scalar) const {
        return Vector2D(x * scalar, y * scalar);
    }
};

struct Color {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
    
    // 🏗 Constructeurs multiples
    Color() : r(255), g(255), b(255), a(255) {}  // Blanc par défaut
    
    Color(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha = 255) 
        : r(red), g(green), b(blue), a(alpha) {}
    
    // 🎨 Couleurs prédéfinies
    static Color Red() { return Color(255, 0, 0); }
    static Color Green() { return Color(0, 255, 0); }
    static Color Blue() { return Color(0, 0, 255); }
    static Color Yellow() { return Color(255, 255, 0); }
};

struct Food {
    Vector2D position;
    float energyValue;
    Color color;
    
    // 🏗 Constructeur
    Food(Vector2D pos, float energy = 25.0f) 
        : position(pos), energyValue(energy), color(Color::Green()) {}
};

} // namespace Core
} // namespace Ecosystem

