#include <iostream>
#include <random>
using namespace std;






// класс Энимал - общий класс
class Animal
{
    public:
        // основные переменные
        string type_of_animal, name, voiceline;
        int age, weight;





        // генератор
        Animal(string animal_name, int animal_age, int animal_weight)
        {
            name = animal_name;
            age = animal_age;
            weight = animal_weight;
        }



        // дай бог понять как это работает.
        // Генерирует случайное число от 1 до 10
        int random()
        {
            random_device dev;
            mt19937 rng(dev());
            uniform_int_distribution<mt19937::result_type> dist6(1,10);

            return dist6(rng);
        }


        // выводит всю информацию о животном
        void print()
        {
            cout << "Type of animal is " << type_of_animal << endl;
            cout << "Animal voiceline is " << voiceline << endl;
            cout << "Animal name is " << name << endl;
            cout << "Animal age is " << age << " years old" << endl;
            cout << "Animal weight is " << weight << " pounds" << endl;
            cout << "\n\n" << endl;
        }


        // животное издаёт свой персональный звук (гавы, мяуы, хрюки)
        void voice()
        {
            cout << name << " goes " << voiceline << endl; 
        }


        // случайная выборка имён
        string get_a_name()
        {
            string name;
            int index = random();

            switch (index)
            {
            case 1:
                return name = "James";
            
            case 2:
                return name = "Lars";

            case 3:
                return name = "Kirk";
            
            case 4:
                return name = "Rob";

            case 5:
                return name = "Thom";

            case 6:
                return name = "Serj";

            case 7:
                return name = "Daron";
            
            case 8:
                return name = "Shavo";

            case 9:
                return name = "John";
            
            default:
                return name = "Jesus";
            }
        }


        // выдача объекту двух случайных переменных
        void generate_object()
        {
            name = get_a_name();
            age = random();
            weight = random();
            cout << "The " << type_of_animal << " has been generated succefully!\n\n" << endl;
            // return name, age, weight;
        }  

};





// подкласс Тигров
class Tiger : public Animal
{
    public:
        // генератор тигров)
        Tiger(string tiger_name, int tiger_age, int tiger_weight) : Animal(tiger_name, tiger_age, tiger_weight)
        {

            type_of_animal = "Tiger";
            voiceline = "Meow";

            generate_object();
        }


        // уникальное действие - по сути заглушка)
        void chill()
        {
            cout << "The " << name << " is chilling well" << endl;
        }
};


// подкласс Оленей
class Deer : public Animal
{
    public:
        
        Deer(string deer_name, int deer_age, int deer_weight) : Animal(deer_name, deer_age, deer_weight)
        {

            type_of_animal = "Deer";
            voiceline = "Non-human noises";

            generate_object();
        }


        // уникальное действие, истинно, если возраст и вес меньше трёх
        void escape_from_zoo()
        {
            if (age < 3 || weight < 3)
            {
                cout << "Holy s***! " << name << " was escaped succesfully!" << endl;
            }

            else
            {
                cout << "The " << type_of_animal << " keeps trying to escape" << endl;
            }
            
        }
};


// подкласс Попугаев
class Parrot : public Animal
{
    public:
        
        Parrot(string parrot_name, int parrot_age, int parrot_weight) : Animal(parrot_name, parrot_age, parrot_weight)
        {

            type_of_animal = "Parrot";
            voiceline = "tweet-tweet";

            generate_object();
        }

        // уникальное действие, 2 варианта, 50/50
        void talk_with_parrot()
        {
            int rand = random();
            
            if (rand <= 5)
            {
                cout << name << " has an advise for you!\n" <<"'You should be yourself!'" << endl;
            }
            else
            {
                cout << name << " has an advise for you!\n" <<"'You should kill yourself!'" << endl;
            }
            
        }
};






int main()
{
    // переменные внутри скобок тут не важны, т.к генератор я сделал через костыль) Все переменные в дальнейшем заменяются в генераторе
    Tiger Tiger("",0,0);
    Parrot parrot("",0,0);
    Deer Deer("",0,0);

    Tiger.print();
    Tiger.chill();

    Deer.print();
    Deer.escape_from_zoo();

    parrot.print();
    parrot.talk_with_parrot();
    // cout << random();
}