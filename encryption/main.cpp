#include <iostream>
using namespace std;
int main(){
    //making random numbers for generating random key
    srand(time(NULL));
    
    //the key and characters
   
    string car="abcdefghijklmnopqrstuvwxyz_";
    char key[27];
 
    int carlen = car.size();
    
    
    
    //operation chices
    cout<<"choose an operation by its number \n";
    cout<<"1.encrypt   2.decrypt  3.exit \n";
    int decide;
    cin>>decide;
    
    //making the infinite loop
    while(decide!=3){
        cout<<endl;
        
        
       
        //encryptin
        if(decide==1){
            string allkey="!@#$%^&*p()_+ol1ikyujmhn23tgb45rfv67890-=[]{edc};:,.<>?qazwsx";
            
            //generating random key
            for(int i=0;i<carlen;i++){
                int all_len=allkey.size();
                char remove=allkey[rand()%all_len];
                key[i]=remove;
                for(int j=0;j<all_len;j++){
                    if(allkey[j]==remove){
                        int all_len=allkey.size();
                        allkey.erase(allkey.begin()+j);
                        break;
                    }
                }
            }
            
            //the text to encrypt
            string words;
            
            cout<<"enter the text(no numbers) to encrypt use _ as space:\n";
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
            for(int i=0;i<carlen;i++){
                cout<<key[i];
            }
            for(int i=0;i<wordlen;i++){
                cout<<encrypt[i];
            }
            cout<<endl<<endl;
        }
        
        //---------------------------------------
        
        //decrypting
        else if (decide==2){
            
            //the text to decrept
            string code;
            cout<<"enter the encrypted text:\n";
            cin>>code;
            int codelen=code.size();
            
            //the decrepted text
            string decrypted[codelen];
            
            //the key to use (first 27 letters)
            char crack_Key[27];
            
            //getting the key from text
            
            
            //assigning characters to the decrypted text
            for(int i=0;i<codelen;i++){
                if(i<carlen){
                    crack_Key[i]=code[i];
                }
                else{
                for(int j=0;j<carlen;j++){
                    if(code[i]==crack_Key[j]){
                        decrypted[i]=car[j];}
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

