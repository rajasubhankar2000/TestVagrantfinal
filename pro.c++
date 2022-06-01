#include <bits/stdc++.h>
using namespace std;

class Team {
    public:
    string name;
    vector<bool> game;
    
    bool isNConsecutiveLoss(int n) {
        int count = 0;
        for(int i = 0; i < game.size(); i++) {
            if (game[i]) {
                count = 0;
            } else {
                count++;
                if(count == n) return true;
            }
        }
        
        return false;
    }

    
    
    
    bool isNConsecutiveWin(int n) {
        int count = 0;
        for(int i = 0; i < game.size(); i++) {
            if (!game[i]) {
                count = 0;
            } else {
                count++;
                if(count == n) return true;
            }
        }
        
        return false;
    }
    int countPoint(int n)
    {
        int count=0;
         for(int i = 0; i < game.size(); i++) {
            if (game[i]) {
                count+=2;
            } 
        }
        return count;
    }
};

int main() {
    int n = 0, m = 0, t = 0, avg = 0,points=0;
    cout << "Enter number of teams:\n";
    cin >> n;
    vector<Team> v;
    for(int i = 0; i < n; i++) {
        Team *team = new Team();
        cout << "\n---------------------\n";
        cout << "Enter team name:\n";
        cin >> team->name;
        cout << "Enter number of matches for each team:\n";
        cin >> m;
        cout<<"enter the match result.1 as win and 0 as loose:\n";
        for(int j = 0; j < m; j++) {
            cin >> t;
            team->game.push_back(t);
        }
        v.push_back(*team);
    }
    
    cout << "Enter n of consecutive win/loss:\n";
    cin >> n;
    
    cout << "Enter 1 for win / 0 for loss:\n";
    cin >> m;
    if(m) {
        t = 0;
        for(int i = 0; i < v.size(); i++) {
            points=v[i].countPoint(n);
            if(v[i].isNConsecutiveWin(n)) {
                avg += points;
                t++;
            }
        }
        cout<<avg<<endl<<t<<endl;
        if(t != 0) avg /= t;

        cout <<"avg= "<< avg << "\n";
    } else {
        t = 0;
        
        for(int i = 0; i < v.size(); i++) {
            points=v[i].countPoint(n);
            if(v[i].isNConsecutiveLoss(n)) 
            { 
                
                avg += points;
                t++;
            }
        }
        cout<<avg<<endl<<t<<endl;
         if(t != 0)  avg /= t;
         cout <<"avg= "<< avg << "\n";
    }
    
	return 0;
}