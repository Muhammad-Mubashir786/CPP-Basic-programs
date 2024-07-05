#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //create and write to the file
    ofstream myfile;char str;
    myfile.open("C:\\Users\\Admin\\Desktop\\file.txt");
    cout<<"File created successfully"<<endl;
    cout<<"Now you can write to the file"<<endl;
    myfile<<"This is a file in c++"<<endl;
    myfile.close();
    //read from the file
    ifstream infile;
    infile.open("C:\\Users\\Admin\\Desktop\\file.txt");
    while (getline(infile,str)) 
    {
        cout << str;
    }
    //copy file
    ofstream onfile;
    onfile.open("C:\\Users\\Admin\\Desktop\\file2.txt");
    while (infile.get(str))
    {
        onfile.put(str);
    }
    cout<<"File Copied"<<endl;
    onfile.close();
    

        return 0;
}