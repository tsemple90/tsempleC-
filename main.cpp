#include<iostream>
#include<string>
using namespace std;

class lion{//class lion
    private:
        string name;
        int size;
        string color;
        string food;
        int height;
    public:
        lion(string name, string color){
            this->name = name;
            this->color = color;
            this->size = 1;
            this->height = 5;
            this->food = "Corn";
        }//first lion
        lion(string name){
            this->name = name;
            this->color = "Brown";
            this->size = 2;
            this->height = 7;
            this->food = "Tacos";
        }//second lion
        void set_name(string name){
            this->name = name;
        }//set
        void set_size(int size){
            this->size = size;
        }//set
        void set_color(string color){
            this->color = color;
        }//set
        void set_food(string food){
            this->food = food;
        }//set
        void set_height(int height){
            this->height = height;
        }//set
        string get_name(){
            return this->name;
        }//get
        string get_color(){
            return this->color;
        }//get
        int get_size(){
            return this->size;
        }//get
        string get_food(){
            return this->food;
        }//get
        int get_height(){//getter height
            return this->height;
        }//get

};

class tsempleHw5{
    public:
        void print(lion b){//sentence that will repeat
            cout<<b.get_name()<<" the mountian lion is " <<b.get_color()<<" ""in which he is"" "<<b.get_height()<<"cm long and its size is "<<b.get_size()<<"cm and it eats "<<b.get_food()<<"."<<endl;
        }
        // test lion class
        void test_lion(){
            lion a("Tyler", "Blue"),b("Bob");//assign a name,color and another name
            print(a);//prints
            print(b);//prints

            a.set_color("Red");//changes color
            a.set_size(30);//changes size
            a.set_food("Beef");//food

            b.set_color("Pink");//color
            b.set_name("Hanana");//new name
            b.set_size(3);//size
            b.set_height(300);//height
            b.set_food("Carrots");//food

            print(a);//print
            print(b);//print
        }
};

int main(){
    // create object of Hw5 class.
    tsempleHw5 h;//run tsempleHw5 class
    h.test_lion();//calls lion class
}