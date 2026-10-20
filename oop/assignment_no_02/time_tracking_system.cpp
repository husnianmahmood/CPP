#include <iostream>
#include <string>
using namespace std;

class Time{
    int hours, minutes, seconds;
    public:
        Time(int h=0, int m=0, int s=0) : hours(h), minutes(m), seconds(s) {
            set_hours(h);
            set_minutes(m);
            set_seconds(s);
        }
        void set_hours(int h){
            if(h>=0 && h<24){
                hours = h;
            } 
            else {
                cout<<"Invalid hours value. Must be between 0 and 23."<<endl;
            }
        }
        void set_minutes(int m){
            if(m>=0 && m<60){
                minutes = m;
            }   
            else {
                cout<<"Invalid minutes value. Must be between 0 and 59."<<endl;
            }
        }
        void set_seconds(int s){
            if(s>=0 && s<60){
                seconds = s;
            } 
            else {
                cout<<"Invalid seconds value. Must be between 0 and 59."<<endl;
            }
        }
        int get_hours() const { return hours; }
        int get_minutes() const { return minutes; }
        int get_seconds() const { return seconds; }

        void display_time() const {
            cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
        }
};
class Time_Difference : public Time {
   public:
    Time_Difference(int h=0, int m=0, int s=0) : Time(h, m, s) {}
    void display_difference() const {
        cout << "Time Difference: " << get_hours() 
        << ":" << get_minutes() << ":"
        << get_seconds() << endl;
    }
};
class Scheduled_Time : public Time {
    string event_name;
   public:
    Scheduled_Time(int h=0, int m=0, int s=0) : Time(h, m, s) {}
    void display_event() const {
        cout << "Scheduled Event: " << event_name 
        << " at " << get_hours() 
        << ":" << get_minutes() << ":"
        << get_seconds() << endl;
    }
};
int main(){
    cout<<"Base Class Time"<<endl;
    Time t1;
    cout << "Default: "; t1.display_time(); 
    cout << endl;
    Time t2(12, 30, 45);
    cout << "Custom: "; t2.display_time(); 
    cout << endl;
    Time_Difference td1;
    cout << "Default: "; td1.display_difference(); 
    cout << endl;
    Time_Difference td2(1, 30, 45);
    cout << "Time Difference: "; td2.display_difference(); 
    cout << endl;
    Scheduled_Time st1;
    cout << "Default: "; st1.display_event(); 
    cout << endl;
    Scheduled_Time st2(14, 0, 0);
    st2.display_event();
    cout << endl;
}
