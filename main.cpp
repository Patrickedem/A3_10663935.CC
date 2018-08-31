//OHOOSE THE OPTION FOR MULTIPLYING, ADDING, OR SUBTRACTING OF NUMBERS.

#include <iostream>

using namespace std;

int main()
{
       int score;
    cout << "please enter the score you had"<<endl;
    cin >>score;
       if(score >= 80 && score <=100)
       {
           cout <<"My score="<<score<<"\n"<<"equivalent letter grade= A" <<endl;
       }
       else if(score>=75 && score <= 79)
        {
            cout <<"My score="<<score<<"\n"<<"equivalent letter grade= B+" <<endl;
       }
    else if(score>=70  && score<=74){

         cout<<"My score="<<score<<"\n"<<"equivalent letter grade= B"  <<endl;
    }
    else if(score>=65 && score<=69) {
           cout<<"My score="<<score<<"\n"<<"equivalent letter grade= C+" <<endl;
    }
    else if(score>=60 && score<=64)
        {
          cout<<"My score="<<score<<"\n"<<"equivalent letter grade= C" <<endl;
    }
    else if(score>=55 && score <=59){
         cout<<"My score="<<score<<"\n"<<"equivalent letter grade= D+" <<endl;
    }
    else if(score>=45 && score<=49){
         cout <<"My score=" <<score<<"\n"<<"equivalent letter grade= E" <<endl;
    }
    else if(score>=0 && score<=44){
         cout<<"My score="<<score<<"\n"<<"equivalent letter grade= F"  <<endl;
    }

    return 0;
}
