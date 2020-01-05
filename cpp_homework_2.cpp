#include <iostream>

using namespace std;

template<class T>
int doHave(T arr[10], T& varible_0){
    int temp=-1;
    for (int i = 0; i < 10; i++)
    {
        if (varible_0==arr[i])
        {
            temp=i;
        }
    }
    return temp;
}

int main_0(){
    char the_arr[10];
    cout<<"请输入array中的十个字符"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin>>the_arr[i];
    }
    char the_variable;
    cout<<"请输入待查询的字符"<<endl;
    cin>>the_variable;
    int temp;
    temp=doHave(the_arr,the_variable);
    //cout<<temp;

    cout<<"这个数组是：";
    
    for (int i = 0; i < 10; i++)
    {
        cout<<the_arr[i];
    }
    cout<<endl;
    if (temp==-1)
    {
        cout<<"在该array中没有您想查找的元素"<<endl;
    }
    else
    {
        cout<<"在该array中有您想查找的元素, 是第"<<temp+1<<"个"<<endl;
    }
    return 0;
}

int main(){
    main_0();
    main_0();
}