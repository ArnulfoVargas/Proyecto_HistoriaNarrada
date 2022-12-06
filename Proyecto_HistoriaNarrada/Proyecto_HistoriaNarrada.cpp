//Arnulfo Vargas Mejia
//Este proyecto tiene una historia narrada
#include <iostream>
#include <string>
#include <Windows.h>
#include <map>

int answers{ 0 };
std::string characters[2] = { "Tu", "X" };

void SlowPrinter(std::string text, std::string character = "", float seconds = .075f) {
    if (character != "")
    {
        std::cout << character << ": ";
        Sleep(300);
    }
    for (int i = 0; i < text.size(); i++) {
        std::cout << text[i];
        Sleep(777 * seconds);
    }
    std::cout << std::endl;
}
void SlowPrinterWordPause(std::string text, std::string character = "", float spacePause = .15f, float seconds = .075f) {
    if (character != "")
    {
        std::cout << character << ": ";
        Sleep(300);
    }
    for (int i = 0; i < text.size(); i++) {
        std::cout << text[i];
        if (text[i] == ' ') {
            Sleep(777 * spacePause);
        }
        else {
            Sleep(777 * seconds);
        }
    }
    std::cout << std::endl;
}

void Decisions(std::string option1, std::string option2) {
    std::cout << std::endl << "1-" << option1 << "   2-" << option2 << std::endl;
    std::cin >> answers;

    system("CLS");
}

void Intro();
void RightWay();
void DontBelongHere();
void Police();
void Fight();

int main() {
    Intro();
}


void Intro() {

    SlowPrinter("Chicos...", "Padre");
    Sleep(777 * .4f);
    SlowPrinter("Vengan aca a ver lo que encontre", "Padre");

    Decisions("Ir", "No ir");

    if (answers == 1)
    {
        SlowPrinter("Vamos!", "Tu");
        Sleep(777);
        SlowPrinter("Que es eso?", "Hermano");
    }
    else {
        SlowPrinter("Si no vienen, olvidense del xbox", "Padre");
        SlowPrinter("Esta bien, ahi vamos", "Hermano");
        Sleep(777);
    }

    SlowPrinter("Les presento mi SNES, recuerdo jugar con ella cuando tenia su edad", "Padre");
    SlowPrinter("Es como una xbox?", "Tu");
    SlowPrinter("Algo asi, solo que mas vieja, el ultimo recuerdo que tengo de ella fue con unos amigos, pero no recuerdo con quienes o que jugamos", "Padre");

    Decisions("Preguntar mas", "Ignorar");

    if (answers == 1)
    {
        SlowPrinter("Tienes algun vago recuerdo de ellos despues de eso?", "Tu");
        SlowPrinter("La verdad es que... No...", "Padre");
    }

    SlowPrinter("Bueno, conectemos esta cosa y veamos si aun funciona", "Padre");
    Sleep(777);

    SlowPrinter("Ya esta, enciendanla en lo que voy a por unas palomitas, vale?", "Padre");
    SlowPrinter("Como se enciende esta cosa?", "Hermano");
    SlowPrinter("Mmm... Ese boton dice power", "Tu");
    Sleep(300);
    SlowPrinter("QUE MIERDA ESTA PASANDO!", "Hermano", .03f);
    SlowPrinter("NO TENGO IDEA!", "Tu", .03f);

    Sleep(777);
    system("CLS");

    std::cout << "Despiertas solo y confundido en un lugar desconocido, a lo lejos ves dos caminos, el se la derecha parece llevar a una ciudad y a la izquierda una especie de humanoide que te puede dar indicaciones";

    Decisions("Derecha", "Izquierda");

    if (answers == 1)
    {
        RightWay();
    }
    else {
        SlowPrinter("El Humanoide no era amigable");
        Sleep(777 * 2);
        system("CLS");

        std::cout << "Quieres volver a intentar?";

        Decisions("Si", "No");
        if (answers == 1)
            Intro();
    }
}

void RightWay() {
    system("CLS");
    SlowPrinterWordPause("'Retro city',  Que es esto? Donde estoy?", characters[0]);
    SlowPrinter("Hey! Hola!", characters[0]);
    SlowPrinter("Hey, que tal?", characters[1]);
    SlowPrinter("Que sitio es este?", characters[0]);
    SlowPrinter("Te encuentras en Retro City, la capital de Retro World, tu de donde venes? Es que no recuerdo haberte visto antes y por como te ves, pareces de un juego nuevo", characters[1]);

    Decisions("Juego?", "Vengo de Chicago");

    if (answers == 1) {
        SlowPrinter("Si, acaso no te programaron bien?", characters[1]);
        Decisions("Quien eres?", "No pertenezco a ningun juego");

        if (answers == 1) {
            SlowPrinter("Quien eres?", characters[0]);
            SlowPrinter("Soy Sonic, Tu quien eres?", characters[1]);
            characters[1] = "Sonic";

            std::cout << "Ingresa tu nombre sin espacios: ";
            std::cin >> characters[0];

            system("CLS");

            std::cout << "Tu: Quien eres?\nX: Soy Sonic, Tu quien eres?\n";

            std::string presentation = "Me llamo " + characters[0] + " y realmente no se que esta pasando, solo recuerdo que estaba con mi hermano, luego luces y ahora no se que esta pasando";

            SlowPrinter(presentation, characters[0]);

            SlowPrinter("No... No otra vez, ven, sigueme, vamos a comisaria", characters[1]);

            Sleep(777);
            system("CLS");
            Police();
        }
        else
        {
            DontBelongHere();
        }
    }
    else {
        SlowPrinter("Que nombre de juego tan raro, dime como se pronu...", characters[1]);
        SlowPrinter("Es que no es ningun juego", characters[0]);
        DontBelongHere();
    }
}

void DontBelongHere() {
    SlowPrinter("No, dime que eres el unico que entro? No puede estar pasando, no... No otra vez", characters[1]);
    SlowPrinter("Que? Si te interesa saber, entre con mi hermano y no se dónde esta, llegue aqui porque crei que podria encontrar respuestas y ni si quiera se quien eres", characters[0]);
    SlowPrinter("Mi nombre no importa ahora, sigueme sera mejor que alguien mas lo explique", characters[1]);
    SlowPrinter("No ire hasta que sepa tu nombre", characters[0]);
    SlowPrinter("Me llamo Sonic, ven ya!", characters[1]);
    characters[1] = "Sonic";

    Decisions("Darle la mano a Sonic", "Seguirlo");

    if (answers == 1) {
        SlowPrinter("Sonic fue mas rapido de lo que tu brazo pudo soportar");

        std::cout << "Volver a intentar?\n";
        Decisions("Si", "No");
        if (answers == 1)
            RightWay();
    }
    else
    {
        Sleep(777);
        system("CLS");
        Police();
    }
}

void Police() {
    SlowPrinter("Sonic, ahora que te trae por aca?", "Comisario");
    SlowPrinter("Ha pasaddo, de nuevo", characters[1]);
    SlowPrinter("Pasar que?...", "Comisario");
    SlowPrinter("Lo de, el externo...", characters[1]);
    SlowPrinter("No entiendo", characters[0]);
    SlowPrinter("Mira, muchacho, hace mucho tiempo, unos chicos como tu, llegaron de quien sabe donde, y de no ser por mis buenas decisiones, estariamos muertos, Retro World estuvo a nada de desaparecer, y ahora llegas tu?", "Comisario");
    Decisions("Levantar la voz", "Preguntar por que se puede hacer");

    if (answers == 1) {
        SlowPrinter("Te han metido a la carcel por levantarle la voz al comisario, y eventualmente, Retro World implosiono");
        std::cout << "Volver a intentar?\n";
        Decisions("Si", "No");
        system("CLS");
        if (answers == 1)
            Police();
    }
    else {
        SlowPrinter("Bueno, tendras que enfrentar a Bowser, ten esta arma", "Comisario");
        SlowPrinter("Donde lo tengo que buscar?", characters[0]);
        SlowPrinter("En el castillo, al norte", "Comisario");
        Sleep(777);
        system("CLS");
        Fight();
    }
}

void Fight() {
    SlowPrinter("Es ahi, mira", characters[1]);
    SlowPrinter("Vamos, a por mi hermano", characters[0]);

    Sleep(777 * 2);
    system("CLS");
    std::cout << "Sonidos de pelea epica.mp3";
    Sleep(777 * 2);
    system("CLS");

    SlowPrinter("Ves un espacio durante la pelea, tienes la opcion de acabar con bowser o ir directo a por tu hermano e intentar acabar con todo yendo al portal");
    Decisions("Bowser", "Hermano");

    system("CLS");
    if (answers == 1) {
        SlowPrinter("Vaya, Bowser reacciono y te recordo quien manda, el lado bueno es que ahora puedes escuchar a Valentin Elizalde en un concierto");
        std::cout << "Volver a intentar?\n";
        Decisions("Si", "No");
        system("CLS");
        if (answers == 1)
            Fight();
    }
    else {
        SlowPrinter("Yo lo entretengo", characters[1]);
        SlowPrinter("Gracias...", characters[0]);
        Sleep(777);
        SlowPrinter("Aparta, hermano", characters[0]);
        SlowPrinter("Corre...", "Hermano");
        Sleep(777);
        system("CLS");
        Sleep(777 * 2);
        SlowPrinter("Chicos? Donde estaban? Estuve buscandolos por toda la casa", "Padre");
        SlowPrinter("No nos lo creerias, padre", "Hijos");
        Sleep(777);
        system("CLS");
        std::cout << "FIN";
    }
}