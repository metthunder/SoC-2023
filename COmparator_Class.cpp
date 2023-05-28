#include<bits/stdc++.h>
using namespace std;
class Point{
    public:
    int x;
    int y;
    Point(int &x, int &y){
        this->x = x;
        this->y = y;
    }
};
// bool comp(Point p1, Point p2){                                   This is also right method like creating a function of comparator
//     return (p1.x < p2.x);
// }

class comparator{
public:
bool operator() (Point p1, Point p2){                             // This is like creating comparator class separately
    return (p1.x > p2.x);
    }
};


int main(){
    vector<Point> v;
    int n, x, y;
    cout<<"How many points would u like to enter?";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x>>y;
        v.push_back(Point(x, y));
    }
    for(auto&& e : v){
        cout<<"("<<e.x<<","<<e.y<<")"<<" ";
    }
    cout<<endl;
    
    comparator comp;
    sort(v.begin(), v.end(), comp);

    for(vector<Point>::iterator it=v.begin(); it!=v.end(); it++){
        cout<<"("<<it->x<<","<<it->y<<")"<<" ";
    }
    cout<<endl;
    return 0;
}