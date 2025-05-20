#include <iostream>
#include <fstream>
#include <cstdio>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>

using namespace std;

int main() {

    vector<string> lines;
    vector<int> pins;
    vector<int> lhh;
    vector<int> hll;
    string line, s, tmp; 

    ifstream MyReadFile("pat_2.txt");
    while (getline (MyReadFile, line)) {
        lines.push_back(line);
    }
    MyReadFile.close();
    cout << "Input file loaded" << '\n';

    cout<<"Input Size "<<lines.size()<<endl;
    int n = lines.size();

    s = lines[0];
    stringstream ss(s);
    istream_iterator<std::string> begin(ss);
    istream_iterator<std::string> end;
    vector<string> pin_names(begin, end);

    //cout << pin_names[0] << endl;
    //cout << lines[1][9] << endl;
    

    for(int i = 0; i < lines[1].size(); i++){
        int cnt_hll = 0, cnt_lhh = 0;
        for(int j = 1; j < n-2; j++){
            if(lines[j][i] == 'H' && lines[j+1][i] == 'L' & lines[j+2][i] == 'L') {
                lines[j+1][i] = 'X';
                cnt_hll++;
            }
            else if(lines[j][i] == 'L' && lines[j+1][i] == 'H' & lines[j+2][i] == 'H'){
                lines[j+1][i] = 'X';
                cnt_lhh++;
            }
        }
        pins.push_back(i);
        hll.push_back(cnt_hll);
        lhh.push_back(cnt_hll);
    }

    ofstream MyFile("rulescheck_rc.txt");

    for(int i = 0; i < lines.size(); i++){
        MyFile << lines[i] <<'\n';
    }
    
    MyFile.close();
    cout<<"Output Size "<<lines.size()<<endl;
    cout<<"Output created."<<endl;

    ofstream LogFile("rulescheck_rc_logout.txt");

    for(int i = 01; i < pin_names.size(); i++){
        LogFile << pin_names[i]; LogFile << " : HLL "; LogFile << hll[i+9]; LogFile << " times; LHH "; LogFile << lhh[i+9]; LogFile<< " times"<<'\n';
    }
    
    LogFile.close();
    cout<<"Log Size "<<pin_names.size()-1 <<endl;
    cout<<"Log created."<<endl;


    return 0;
}
