#include<bits/stdc++.h>
using namespace std;

int main(){
//store optable in an map
    map<string, int> opTable = {{"START", 99}, {"STL", 1}, {"JSUB", 2}, {"LDA", 3}, {"COMP", 4}, {"JEQ", 5}, {"+JSUB", 6}, {"J", 7}, {"LDX", 8}, {"TD", 9}, {"JEQ", 10}, {"RD", 11}, {"STCH", 12}, {"TIX", 13}, {"CLEAR", 14}, {"WD", 15}, {"JLT", 16}, {"LDB", 17}, {"BASE", 18}, {"LDT", 19}, {"+LDT", 20}, {"RD", 21}, {"COMPR", 22}, {"TIXR", 23}, {"STX", 24}, {"LDCH", 25}, {"RSUB", 26}, {"STA", 25}};
    
//make a map for symboltable
    map<string, int>SymbolTable;
    
    string line, OPCODE;
    vector<pair<string, int>>v;
    int LOCCTR, ADD = 0;
    int cnt = 0;

//open a file for reading purpose only
    ifstream fin("source_code.txt");


//traverse through every line of file
    while(getline(fin, line)){
       stringstream ss(line); // to split the line
        string word;
        vector<string>temp;
        while(ss >> word){ //(ss, word, ",")
             temp.push_back(word);
        }
    
//Conditions for OPCODE
        if(temp.size() == 3){
            OPCODE = temp[1];
        }
        else if(temp.size() <= 2){
            OPCODE = temp[0];
        }
        
//Update Location counter if OPCODE is START and store address in ADD variable
    if(cnt == 0){
        if(OPCODE == "START"){
            string s =  temp[2];
            ADD = stoi(s);
            LOCCTR = ADD;
        }
        else{
            LOCCTR = 0;
        }
    }

//If we reach to END then break
    else if(OPCODE == "END"){
            break;
        }
        

// If the line is not comment then update symbol table
    else if(OPCODE != "."){
            
        
            if(SymbolTable[temp[0]] < 0){
                cout << "Duplicate Found!!";
                break;
            }

            else if(temp.size() == 3){
                SymbolTable[temp[0]] = LOCCTR;
                v.push_back({temp[0], LOCCTR});
            }

            if(opTable[OPCODE] > 0){
                LOCCTR += 3;

            }

            else if(OPCODE == "WORD"){
                LOCCTR += 3;
            }
            else if(OPCODE == "RESW"){
                LOCCTR += 3* stoi(temp[2]);
            }

            else if(OPCODE == "RESB"){
                LOCCTR += stoi(temp[2]);
            }

            else if(OPCODE == "BYTE"){
                LOCCTR += 1;
            }

            else{
                cout << "INVALID OPERATION CODE" << OPCODE;
                break;
            }
        }
         

        temp.clear();
        cnt++;
    }


    int programCount = LOCCTR - ADD;
    cout << endl << "Program length is:" << programCount << endl;
    cout << endl;

    cout << "Symbol table:" << endl;

   for(int i = 0; i < v.size(); i++){
    cout << v[i].first << " " << v[i].second <<  endl;
   }
    
    return 0;
}
