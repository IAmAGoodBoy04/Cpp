#include<iostream>
#include<iomanip>
#include<cstdio>
#include<cmath>

using namespace std;

class scientificCalculator;
class simpleCalculator{
    int a,b;
    char op;
    public:
    void fetch_simple_op(void);
    void fetch_operand(void);
    int evaluate_simple(void){
        if(op=='+'){return a+b;}
        else if(op=='-'){return a-b;}
        else if(op=='*'){return a*b;}
        else if(op=='/'){return a/b;}
        else{return -1;}
    }
    void display_ans(void){
        //cout<<"The value of "<<a<<op<<b<<" is:"<<evaluate_simple<<endl;
        printf("The value of %d%c%d is %d\n",a,op,b,evaluate_simple());
    }
};
void simpleCalculator:: fetch_simple_op(void){
    cout<<"Enter an operator"<<endl;
    cin>>op;
}
void simpleCalculator:: fetch_operand(void){
    cout<<"Enter two operands"<<endl;
    cin>>a>>b;
}
class scientificCalculator{
    int c,d;
    char op_sci;
    public:
    void fetch_sci_op(void){
        cout<<"Enter a scientific operator(^ or %)"<<endl;
        cin>>op_sci;
    }
    void fetch_operand_sci(void){
        cout<<"Enter two operands"<<endl;
        cin>>c>>d;
    }
    int evaluate_sci(void){
        if(op_sci=='^'){return (int)pow(c,d);}
        else if(op_sci=='%'){return c%d;}
        else{return -1;}
    }
    void dsiplay_ans_sci(void){
        cout<<"The result of "<<c<<op_sci<<d<<" is "<<evaluate_sci();
    }
};
class hybridCalculator: public scientificCalculator,public simpleCalculator{
    int type;
    public:
    void ask_for_type(void){
        cout<<"Enter 1 for simple calculator, 0 for scientific:";
        cin>>type;
    }
    void exec_calc(void){
        if(type==1){
            fetch_simple_op();
            fetch_operand();
            display_ans();
        }
        else{
            fetch_sci_op();
            fetch_operand_sci();
            dsiplay_ans_sci();
        }
    }
};
int main(){
    hybridCalculator a;
    a.ask_for_type();
    a.exec_calc();

return 0;
}