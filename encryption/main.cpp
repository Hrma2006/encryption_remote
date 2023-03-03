#include <iostream>
using namespace std;
int main(){
    
    //operation chices
    cout<<"choose an operation by its number \n";
    cout<<"1.encrypt   2.decrypt  3.exit \n";
    int decide;
    cin>>decide;
    
    //making the infinite loop
    while(decide!=3){
        cout<<endl;
        //the key and characters
        string car="abcdefghijklmnopqrstuvwxyz_";
        string key="1!@#$%^&*()_+{}:<>?/§,/[].|";
        int carlen = car.size();
        
        //encryptin
        if(decide==1){
            //the text to encrypt
            string words;
            cout<<"enter the text to encrypt use _ as space:\n";
            cin >> words;
            int wordlen = words.size();
            
            //the increpted text
            string encrypt[wordlen];
            
            //assigning characters to the encrypted text
            for(int i=0;i<wordlen;i++){
                for(int j=0;j<carlen;j++){
                    if(words[i]==car[j]){
                        encrypt[i]=key[j];
                    }
                }
            }
            
            //showing the encrypted text
            for(int i=0;i<wordlen;i++){
                cout<<encrypt[i];
            }
            cout<<endl<<endl;
        }
        
        
        //decrypting
        else if (decide==2){
            
            //the text to decrept
            string code;
            cout<<"enter the encrypted text:\n";
            cin>>code;
            int codelen=code.size();
            
            //the decrepted text
            string decrypted[codelen];
            
            //assigning characters to the decrypted text
            for(int i=0;i<codelen;i++){
                for(int j=0;j<carlen;j++){
                    if(code[i]==key[j]){
                        decrypted[i]=car[j];
                    }
                }
            }
            
            //showing the decrypted text
            for(int i=0;i<codelen;i++){
                cout<<decrypted[i];
            }
            cout<<endl<<endl;
        }
        //continue to choose
        cout<<"choose an operation by its number \n";
        cout<<"1.encrypt   2.decrypt  3.exit \n";
        cin>>decide;
    }
}

