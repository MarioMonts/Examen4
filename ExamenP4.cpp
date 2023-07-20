//Critter
#include <iostream>

using namespace std;

class Critter
{
public:
    Critter(int hunger = 0, int boredom = 0, int thirst = 0);
    void Talk();
    void Eat(int food = 4);
    void Play(int fun = 4);
    void Drink(int thirst = 4);

public:
    int m_Hunger;
    int m_Boredom;
    int m_Thirst;
    void PassTime(int time = 1);
};

Critter::Critter(int hunger, int boredom, int thirst) :
    m_Hunger(hunger),
    m_Boredom(boredom),
    m_Thirst(thirst)

{}


void Critter::PassTime(int time)
{
    m_Hunger += time;
    m_Boredom += time;
    m_Thirst += time;
}

void Critter::Talk()
{
    
  
    if (m_Hunger > 2 && m_Hunger <= 5)
    {
        cout << "Humano alimentame" << endl;

    }

    if (m_Boredom > 2 && m_Boredom <= 5)
    {
        cout << "Humano juega conmigo" << endl;

    }

    if (m_Thirst > 2 && m_Thirst <= 5)
    {
        cout << "Humano necesito agua" << endl;

    }


    if (m_Hunger <= 2 && m_Boredom <= 2 && m_Thirst <= 2)
    {

        cout << "Estoy muy feliz" << endl;

    }

    if (m_Hunger > 2 && m_Hunger <= 4 || m_Boredom > 2 && m_Boredom <= 4 || m_Thirst > 2 && m_Thirst <= 4)
    {

        cout << "Me siento Meh" << endl;

    }


    if (m_Hunger > 4 && m_Hunger <= 5 || m_Boredom > 4 && m_Boredom <= 5 || m_Thirst > 4 && m_Thirst <= 5)
    {

        cout << "Estoy muriendo, haz algo" << endl;

    }

    if (m_Hunger > 5 || m_Boredom > 5 || m_Thirst > 5)
    {

        cout << "MORI X.X" << endl;

    }


    PassTime();
}

void Critter::Eat(int food)
{
    cout << "\nBrrupp. \n";
    m_Hunger -= food;
    if (m_Hunger < 0)
    {
        m_Hunger = 0;
    }
    PassTime();
}

void Critter::Play(int fun)
{
    cout << "\nWheee!\n";
    m_Boredom -= fun;
    if (m_Boredom < 0)
    {
        m_Boredom = 0;
    }
    PassTime();
}

void Critter::Drink(int thirst)
{
    cout << "\nWheee!\n";
    m_Thirst -= thirst;
    if (m_Thirst < 0)
    {
        m_Thirst = 0;
    }
    PassTime();
}

int main()
{
    int opcion;
    int vector[8] = { 9386, 8642, 1234, 7415, 9856, 2534, 7638, 7952 };

    cout << "\nBienvenido al Examen del 4to Parcial\n\n";
    cout << "\nElige alguna de las siguientes opciones:\n";
    cout << "\n";
    cout << "1 - Vectores.\n";
    cout << "2 - Mascota Virtual.\n";

    cout << "\n";

    cin >> opcion;
    switch (opcion)
    {

    case 1:
        cout << "Vectores y Punteros\n";


        break;

    case 2:


        Critter crit;
        crit.Talk();
        int choice;
        do
        {
            cout << "\nMascotas Virtuales\n\n";
            cout << "Elige una opcion: \n\n";
            cout << "0 - Salir.\n";
            cout << "1 - Escucha a tu mascota.\n";
            cout << "2 - Alimentar.\n";
            cout << "3 - Jugar con tu mascota.\n";
            cout << "4 - Listado de Necesidades.\n";
            cout << "\n";

            cin >> choice;
            switch (choice)
            {
            case 0:
                cout << "Vuelve pronto!.\n";
                break;
            case 1:
                crit.Talk();
                break;
            case 2:
                crit.Eat();
                break;
            case 3:
                crit.Play();
                break;
            case 4:

                cout << "El nivel actual de mis necesidades es el siguiente: \n" << endl;

                cout << "Hunger :" << crit.m_Hunger << endl;
                cout << "Boredom :" << crit.m_Boredom << endl;
                cout << "Thirst :" << crit.m_Thirst << endl;


                break;
            default:
                cout << "\n Tu elección es inválida. \n";
            }
        } while (choice != 0);

        break;

    }
}




