#include <iostream>
#include <cstdlib>

using namespace std;

struct node
{
    int data;
    struct node *next;
};

int main()
{
    node *first, *pre, *cur;
    int i, num, datax;
    cout << "輸入節點數量 ：";
    //提示字串
    //輸入
    cin >> num;

    //分配一個記憶體到cur

    //若是第一個，先把first標籤貼到cur上。
    for (i = 0; i < num; i++)
    {
        cur = (node *)malloc(sizeof(node));
        cout << "輸入第" << i + 1 << "節點的值：";
        cin >> datax;
        cur->data = datax;
        if (i == 0)
            first = cur;
        else
            pre->next = cur;
        pre = cur;
        cur->next = nullptr;
    }
    //若不是第一個，把pre連到cur（現正處理）上。
    //pre貼到cur上
    //設立終止點
    cur = first;
    while (cur != nullptr)
    {
        cout << "cur位址 = " << cur << " cur->data=" << cur->data << endl;
        cur = cur->next;
    }
}