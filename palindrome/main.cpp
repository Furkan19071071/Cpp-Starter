#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

int main()
{
    cout << "palindrome" << endl;
    cout << "lutfen bir kelime giriniz.." << endl;
    
    char c[100]; //100 karakterlik bir boyut ayırdık
    cin >> c;
    
    char *p,*q;
    p=c; //dizginin en başından başlaması için
    q=c; /* dizginin en sonundan başlaması için bir 
     * while döngüsü atayacağız ve end of string kodunu
     * görene kadar ilerlemesini isteyeceğiz. 
     * Böylece q işaretçisi kelimenin en sonundan başlamış olacaktır */
     
while(*q!='\0') { //q'nun gösterdiği yerdeki değere bakmamız gerektiği için işaretçi kullanıyoruz
        q++;
        }
    q--; //en son eleman \0 olduğu için bir geri gelmesini sağlıyoruz
    
    bool palindrome=true; //ilk başta tüm kelimeleri palindrome kabul ediyoruz
    
    while (q>p) { //p ve q birbirine eşit olmadığı zaman (ortada karşılaşmadıklarında)
        
        if(*p!=*q) { //işaretçi olmalarının sebebi, oradaki değerleri karşılaştırmak istememiz
        palindrome=false; //eğer bir tane bile farklı eleman bulursak false döndürüyoruz
        }
        p++; //diğer harflere geçmeleri için 
        q--;
        }
    //sonuçları ekrana yansıtmak için
    if (palindrome) 
        cout << "girilen kelime bir palindrome'dur" << endl;
    else 
        cout << "girilen kelime bir palindrome degildir" << endl;
}
