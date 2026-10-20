#include <iostream>
#include <string>
using namespace std;

class Publication {
    protected:
        string title;
        float price;
    public:
        Publication(string t, float p) : title(t), price(p){}
        void get_data(){
            cout<<"Enter Title:"<<endl;
            cin.ignore();
            getline(cin, title);
            cout<<"Enter Price:"<<endl;
            cin>>price;
        }
        void put_data(){
            cout<<"Title:"<<title<<endl;
            cout<<"Price:"<<price<<endl;
        }
};
class book: public Publication{
    int page_count;
    public:
        book(string t, float p, int pc) : Publication(t, p), page_count(pc) {}
        void get_data(){
            Publication::get_data();
            cout<<"Enter Page Count:"<<endl;
            cin>>page_count;
        }
        void put_data(){
            Publication::put_data();
            cout<<"Page Count:"<<page_count<<endl;
        }
};
class tape: public Publication{
    float playing_time;
    public:
        tape(string t, float p, float pt) : Publication(t, p), playing_time(pt) {}
        void get_data(){
            Publication::get_data();
            cout<<"Enter Playing Time:"<<endl;
            cin>>playing_time;
        }
        void put_data(){
            Publication::put_data();
            cout<<"Playing Time:"<<playing_time<<endl;
        }
};
int main() {
    book b("IT series", 999.99, 180); 
    tape t("Seven Habits of highly effective people", 1500.99, 250.0);
    cout <<" Book "; b.get_data();
    cout<<endl;
    cout << " Tape "; t.get_data();
    cout<<endl;
    cout << " Book Info "; b.put_data();
    cout<<endl;
    cout << " Tape Info "; t.put_data();
    cout<<endl;
}

