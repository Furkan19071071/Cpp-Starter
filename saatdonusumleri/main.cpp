#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    cout << "saat donusumleri" << endl;
    
    cout << "lutfen 12'lik sistemde bir saat giriniz" << endl;
    
    char s[11]; //boyutunu belirtiyoruz
    cin >> s; //kullanıcıdan alıyoruz
    
    if (s[8]=='P') { //8.karaktere denk geldiği için
        char x[3]; //girilen verilerin ilk üç değerini alıyoruz (değiştirebilmek için)
        x[0]=s[0];
        x[1]=s[1];
        x[2]= '\0'; //bir dizgi olduğu için son karakteri end of string omalı
        
        /*eğer aşağıdaki saat hesaplamasını yapmak
         * istemiyorsanız atoi kodunu kullanabilirisiniz kolay yolu olarak
        int saat=0;
        saat += (x[0]-48) *10;
        saat += x[1]-48;
        */
        
        int saat= atoi(x); // karakter dizisini alıp integer değere çeviriyor
        saat += 12; 
        
        s[0]=(char)48 + saat/10;
        s[1]=(char)48 + saat%10;
        
        
        s[8]='\0'; // P ve geri kalan karakterler basılmayacaktır
        
        cout << "yeni saat: " << s << endl;
            }
    else { //geriye kalan tek durum else olduğu için else yapısını kullandık
        
        s[8]='\0'; // A ve geri kalan karakterler basılmayacaktır
        cout << "yeni saat: " << s << endl;
        }
    
    return 0;
}
