#include <iostream>
#include <thread>
#include <string>
#include <vector>
#include <stdio.h>
#include <map>
#include <set>
#include <limits>
#include <queue>
#include <cmath>
#include <algorithm>
#include<bits/stdc++.h>
#include <future>
#include <array>
#define FOR(m) for(int i=0;i<m;i++)
#define ll long long int
#define scl1(a)             scanf("%lld", &a)
#define REP(i,n) FOR(i,0,n)
#define pb(x) push_back(x)
#define MAX MAX_INT
#define fst first
#define snd second
#define foritpnt for(auto it=datos->begin(); it != datos->end(); it++)
#define forit for(auto it=datos.begin(); it != datos.end(); it++)
#define sz(x) int(x.size())
#define all(v) v.begin(),v.end()
#define mp(x,y) make_pair(x,y)
#define fastcin std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
using namespace std;

int main(){
    fastcin

    int n;
    cin>>n;
    string pais, nombre;

    map<string, int>score;

    while(n!=0){
        cin>>pais;
        score[pais]++;
        getline(cin,nombre);
        n--;
    }

    map<string, int>:: iterator it = score.begin();
    while(it != score.end())
    {
        cout<<it->first<<" "<<it->second<<std::endl;
        it++;
    }


    return 0;
}
