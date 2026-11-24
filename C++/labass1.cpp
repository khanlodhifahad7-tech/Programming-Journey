#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string name = "FAHAD KHAN LODHI";
    string id = "bc260420469";
    int studentID = 260420469;
    int digit1 = (studentID / 10000) % 10;
    int digit2 = (studentID / 1000) % 10;
    int digit3 = (studentID / 100) % 10;
    int digit4 = (studentID / 10) % 10;
    int digit5 = studentID % 10;
    int quant1 = digit1 * 10;
    int quant2 = digit2 * 10;
    int quant3 = digit3 * 10;
    int quant4 = digit4 * 10;
    int quant5 = digit5 * 10;
    int totquan = quant1 + quant2 + quant3 + quant4 + quant5;
    int orign1 = quant1 * 70;
    int orign2 = quant2 * 70;
    int orign3 = quant3 * 70;
    int orign4 = quant4 * 180;
    int orign5 = quant5 * 180;
    int dis1 = 0, dis2 = 0, dis3 = 0, dis4 = 0, dis5 = 0;
    if (quant1 >= 50) {
        dis1 = orign1 * 0.10;
    }
    if (quant2 >= 50) {
        dis2 = orign2 * 0.10;
    }
    if (quant3 >= 50) {
           dis3 = orign3 * 0.10;
    }
    if (quant4 >= 50) {
        dis4 = orign4 * 0.10;
    }
    if (quant5 >= 50) {
        dis5 = orign5 * 0.10;
    }
    int totaldis = dis1 + dis2 + dis3 + dis4 + dis5;
    int final1 = orign1 - dis1;
    int final2 = orign2 - dis2;
    int final3 = orign3 - dis3;
    int final4 = orign4 - dis4;
    int final5 = orign5 - dis5;
    int totalfinal = final1 + final2 + final3 + final4 + final5;
    cout<<endl;
    cout << "STUDENT NAME : " << setw(16) << name << endl;
    cout << "STUDENT ID : " << setw(18) << id << endl;
    cout << endl;
    cout << "    ================== COMMUNITY WATER REFILL DEPOT - DAILY REPORT ====================" << endl;
    cout << endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout<<endl;
    cout << "ORDER" << setw(10) << "QUANTITY"<< setw(14) << "PACKAGE TYPE"<< setw(22) << "ORIGINAL(RS.)"<< setw(10) << "DISCOUNT"<< setw(13) << "FINAL RS"<< setw(10) << "STATUS" << endl;
    cout<<endl;
    cout << "-------------------------------------------------------------------------------------------" << endl;
    cout<<endl;
    cout << "1" << setw(12) << quant1 << setw(22) << "5-litre CONTAINER" << setw(10) << orign1;
    if (quant1 >= 50) {
        cout << setw(14) << dis1;
        cout << setw(12) << final1;
    }
    else {
        cout << setw(14) << "0";
        cout << setw(12) << orign1;
    }
    if (final1 < 15000) {
        cout << setw(15) << "LOW SALES" << endl;
    }
    else {
        cout << setw(12) << "NORMAL" << endl;
    }
    cout << "2" << setw(12) << quant2 << setw(22) << "5-litre CONTAINER" << setw(10) << orign2;
    if (quant2 >= 50) {
        cout << setw(14) << dis2;
        cout << setw(12) << final2;
    }
    else {
        cout << setw(14) << "0";
        cout << setw(12) << orign2;
    }
    if (final2 < 15000) {
        cout << setw(15) << "LOW SALES" << endl;
    }
    else {
        cout << setw(12) << "NORMAL" << endl;
    }
    
    cout << "3" << setw(12) << quant3 << setw(22) << "5-litre CONTAINER" << setw(10) << orign3;
    
    if (quant3 >= 50) {
        cout << setw(14) << dis3;
        cout << setw(12) << final3;
    }
    else {
        cout << setw(14) << "0";
        cout << setw(12) << orign3;
    }
    if (final3 < 15000) {
        cout << setw(15) << "LOW SALES" << endl;
    }
    else {
        cout << setw(12) << "NORMAL" << endl;
    }
    cout << "4" << setw(12) << quant4 << setw(23) << "19-litre CONTAINER" << setw(9) << orign4;
    if (quant4 >= 50) {
        cout << setw(14) << dis4;
        cout << setw(12) << final4;
    }
    else {
        cout << setw(14) << "0";
        cout << setw(12) << orign4;
    }
    if (final4 < 15000) {
        cout << setw(15) << "LOW SALES" << endl;
    }
    else {
        cout << setw(12) << "NORMAL" << endl;
    }
    cout << "5" << setw(12) << quant5 << setw(22) << "19-litre CONTAINER" << setw(10) << orign5;
    
    if (quant5 >= 50) {
        cout << setw(14) << dis5;
        cout << setw(12) << final5;
    }
    else {
        cout << setw(14) << "0";
        cout << setw(12) << orign5;
    }
    if (final5 < 15000) {
        cout << setw(15) << "LOW SALES" << endl;
    }
    else {
        cout << setw(12) << "NORMAL" << endl;
    }
    
    cout<<endl;
    cout << "               =================== OVERALL REPORT ===================" << endl;
    cout<<endl;
    cout << "TOTAL CONTAINERS SUPPLIED : " << setw(10) << totquan << endl;
    cout << "TOTAL DISCOUNT : " << setw(22) << totaldis << endl;
    cout << "FINAL AMOUNT COLLECTED : " << setw(14) << totalfinal << endl;
    cout << "SALES STATUS : " << setw(24) << "LOW SALES" << endl;
    cout<<endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;
    return 0;
    }
