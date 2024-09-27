#include <iostream>
#include <raylib.h>

class Player{
    // Propiedades
    private:
        std::string Nombre;
        double Vida;
        double Velocidad;
        Vector2 Posicion;
        double Tamano;
        Color aColor;

    // Construct & Getter
    public:
        Player(std::string nombre, double vida, double velocidad, int posicionX, int posicionY, double tamano, Color bcolor){
            // ↓ Set propiedades
            Nombre = nombre;
            Vida = vida;
            Velocidad = velocidad;
            Posicion.x = posicionX; Posicion.y = posicionY;
            Tamano = tamano;
            aColor = bcolor;
        }
        std::string getNombre(){
            return Nombre;
        }
        double getVida(){
            return Vida;
        }
        double getVelocidad(){
            return Velocidad;
        }
        void getPosicion(){
            std::cout << "x: " << Posicion.x << " y: " << Posicion.y << '\n';
        }
        double getTamano(){
            return Tamano;
        }
        void createPlayerOutput(){
            DrawCircle(Posicion.x, Posicion.y, Tamano, aColor);
        }
};