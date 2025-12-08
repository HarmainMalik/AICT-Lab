#include<iostream>
using namespace std
string ssm(string p1, string p2);
main(){
string p1,p2;
cout<< "Enter player1 and player2: ";
cin >> p1 >> p2;
cout << ssm(p1, p2);
}
string ssm(string p1, string p2)
{
    string x;
    if (p1=="Magic"&& p2=="Sword")
    {
        x="The winner is p2";
        return x;
    }
    else if (p1=="Magic"&& p2=="Sheild")
    {
        x="The winner is p1";
        return x;
    }
    else if (p1=="Sheild"&& p2=="Sheild")
    {
        x="Draw";
        return x;
    }
    else if (p1=="Sword"&& p2=="Magic")
    {
        x="The winner is p1";
        return x;
    }
    else if (p1=="Sheild"&& p2=="Magic")
    {
        x="The winner is p2";
        return x;
    }
    else if (p1=="Sheild"&& p2=="Sword")
    { x="The winner is p1";
        return x;
    }
    else if (p1=="Magic"&& p2=="Magic")
    {
        x="Draw";
        return x;
    }
    else if (p1=="Sword"&& p2=="Sword")
    {
        x="Draw";
        return x;
    }

}