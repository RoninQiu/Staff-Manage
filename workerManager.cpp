//创建管理类
#include "workerManager.h"
using namespace std;

WorkerManager::WorkerManager() {

}

void WorkerManager::Show_Menu() {
    cout << "******************************************" << endl;
    cout << "*************   欢迎使用   *************" << endl;
    cout << "**************  0.退出  ****************" << endl;
    cout << "**************  1.增加  ****************" << endl;
    cout << "**************  2.显示  ****************" << endl;
    cout << "**************  3.删除  ****************" << endl;
    cout << "**************  4.修改  ****************" << endl;
    cout << "**************  5.查找  ****************" << endl;
    cout << "**************  6.排序  ****************" << endl;
    cout << "**************  7.清空  ****************" << endl;
    cout << endl;
}

WorkerManager::~WorkerManager() {
    
}