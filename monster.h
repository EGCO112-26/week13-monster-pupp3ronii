//
//  monster.h
//  monster
//
//  Created by Mingmanas Sivaraksa on 30/3/2566 BE.
//

#ifndef monster_h
#define monster_h
class monster{
private:
    string name;
    int hp,potion;
public:
    void Attack(monster &);
          void heal();
    monster(string, int,int);
};


monster::monster(){
    cout<<"Bye Bye" << name <<" hp : "<<hp<<endl ;
}

monster::monster(string n, int b, int p){
    name=n;
    b>200? hp=200:hp=b;
    p>10? potion=10:pption=p;

    cout<<"Monster" << name <<" Let's go mon mon" <<endl;
}

#endif /* monster_h */
