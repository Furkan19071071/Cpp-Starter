
//Furkan TÜRKOĞLU cpp notları 

/*
#include<iostream>
// C de ki gibi standart ktp çağırdık . Cpp deki standart kütüphane iostream dır , bu kütüphane basic input output işlemlerini sağlar 


// bir nevi fonksiyon ayracıdır
using namespace std;
// bu fonksiyou kullandığmızda çoğu fonksiyonu std kullandığımız için özel olarak kullandığımız fonksiyonların başına sdt diye tanımlamamıza gerk yoktur



int main(){
	// c de printf kullanırken cpp de cout kullannılır parantez yerine iki tane << işareti kullanılır

	//cout << "Merhaba Dünya  \n " ;
	//cout << "Merhaba dünya 2" ;

// <<endl ve \n aynı anlama gelir çok bir farkı yoktur 


	int a=2;
	float b=3.5 ;


    //cpp de değişkenleri tanımlarken byte yani bellek kısmını da tanılayabiliriz 
    // örnek olarak char16_t de byte sayısı 16 olarak ayarlanmıştır
    //bunu 32 olarak da ayarlayabilriz
    //signed veri tipleri içinde negatif sayıöları da kapsayabilirken unsigned veri tipleri içinde negatif sayıları kapsayasmaz 
    // signed v-char da ise bizim sekiz bitlik sistemde kullandığımız eğer sonu 0 ile bitiyorsa işaretli eğer sonu 0 ile bitmiyorsa işaretsiz mantığı vardır 
    // örnek olarak 00000000 işaretli 10000000 işaretsizdir
    // cpp de değişkenlerin başına unsigned veya signed yazarak değişkenin işaretli veya işaretsiz olmasını sağlayabiliriz
    // örnek olarak unsigned int a=2; şeklinde kullanabiliriz
    // cpp de değişkenlerin başına long veya short yazarak değişkenin uzun veya kısa olmasını sağlayabiliriz
    // örnek olarak long int a=2; şeklinde kullanabiliriz
    // cpp de değişkenlerin başına const yazarak değişkenin sabit olmasını sağlayabiliriz
    // örnek olarak const int a=2; şeklinde kullanabiliriz
    // cpp de değişkenlerin başına static yazarak değişkenin sabit olmasını sağlayabiliriz
    // örnek olarak static int a=2; şeklinde kullanabiliriz
    //


#include "conio.h"
#import <Foundation/Foundation.h>

int main(int argc,char *argv[])
{
    NSAutoreleasePool *pool=[[NSAutoreleasePool  alloc] init];
    
    float kare(float x);
    float say;
    char cevap;
    do
    {
        NSLog(@"\nBİR SAYI GİRİNİZ..");
        scanf("%f",&say);
        NSLog(@"\nSAYINIZIN KARESİ=%12.3f",kare(say));
        NSLog(@"\nDEVAM e/h  ");
        cevap=getche();
    }
    while(cevap=='e'||cevap=='E');
    [pool drain];
    return 0;
}

float kare(float a)
{
    static int sayac=0;
    sayac++;
    NSLog(@"\nÇAĞRI SAYISI=%i",sayac);
    return a*a;
}


// yukarıdaki kodu static ve constun farkını anlamak için kullandık 
//BİTWİSE OPERATİON DA SAYININ İKİLİK  KARŞILIĞINI BULUP    << VE >> OPERATÖRLERİNİ KILLANAMRAK SAYILARA ENİ DEĞERLER ATAYABİLİRİZ
// örnek olarak 10 luk tabandaki 10 sayısının binary karşılığı 1010 dır bunu <<2 işlemini kullnark 2 ileri kaydırırsak sayı 101000 şeklini alır ve sayısının 10 luk tabanda yeni karşılığı 40 olur
//




// burdaki işlemde binary işlmelerde kullandığımız logic gates operatörlerini kullandık 

#include <iostream>
using namespace std;
int main()
{
    cout << "bitwise operatorleri" << endl;
    
    //sola kaydÄ±rma
    
    int r = 19;
    cout << r << endl;
    
    int b = r << 2;
    cout << b << endl;
    
    // saÄŸa kaydÄ±rma
    
    int g = 18;
    cout << g << endl;
    
    int u = g >> 2;
    cout << u << endl;
    
    //and ( & ) operatÃ¶rÃ¼
    
    int k = 22 & 13 ;
    
    cout << k << endl;
    
    // veya ( | ) operatÃ¶rÃ¼
    
    int a = 12 | 6;
    
    cout << a << endl;
    
    // ya da ( ^ ) operatÃ¶rÃ¼
    
    int m = 5 ^ 28;
    
    cout << m << endl;
    
    return 0;
}


//


	double c=3.366;
    char d='F';
    bool t=true;  // bool normmal logic gates deki 1 ve 0 dır (bool algebria)

    cout <<a <<endl;
    cout <<b <<endl;
    cout <<" c nın değeri " <<c <<endl;
    cout <<" d nın değeri " <<d <<endl;
    cout <<" t nın değeri " <<t <<endl;
    
     // ++a ve a++ nın farkı önemli
    // cin ile karakter alma "c de scanf kullanırken cpp de cin kullanırız kullandığımız << işaretini ters çeviriiz ,
    // >> işareti input girmeye yarar 
    // c de ki gibi %d veya %f gibi operatörler kulanmadık şimdilik 
    // yine  c ddeki gibi bir değişkeni diğerine dönştürebiliriz 
    // örnek olarak int top; şeklinde bir değişken tanımladık ve bunu cin ile kullanıcıdan aldık
    // cin >> top ; şeklinde kullanılır
    // typecasting yapılabilir

    int top;

    cin >> top ; // şeklinde kullanılır 
    // c cde string veri tipi yokkan cpp de string veri tipi vardır 
    // string veri tiipi cpp nin kolay yanlarından biridir 

    string str1="Benim arabam megane ";
     
     cout <<"string 1"<< str1 <<endl ;
     // cpp de operatör yardımıyla iki stringi toplayabiliriz , bu da bir kolaylıktır 


     string str2="Arabamın jantı parlak";
    string str3=str1+str2;

       cout  <<"satır 3 ="<<str3<<endl;
       
        // c de stringleri birbirine aktarırken string.h kütüphanesinin fonksiyonlarını kullanırız cpp de ise direlt operatörleri kullanabiliriz 

        // bunun kendine göre metotları var ve bu metotları ilerde bakacağız

        // if else ve else if kullanımının c den çok farkı yok aşağıdaki basit örnekteki gibi if else lullanımın pek bir farkı yok 




/*
      #include <iostream>
//basic password examples 

using namespace std;

int main()
{
    string str1="Fenerbahce";

    string input ;

    cout<<"Sifreyşi  giriniz "<< endl;
    cin>>input ;
    if(input==str1){
        cout<<"Password is true , documents has opening"<<endl;
    }
    else
        cout<<"Password is false, files are protected "<<endl;



    return 0;
}


*/ 
//else if bloklarının görünenden farklı bir yanı yok , yine C de Kİ GİBİ kulanım yapıyoruz 



// basic calculator 
/*


#include<iostream>

using namespace std;

int main(){

   cout << " Bu program toplama , çıkarma , çarapma ve bölme olmak üzere 4 işlemi yapabilir" <<endl;

     
    float num1,num2;

       string opt;

     cout << "1. sayıyı giriniz "<<endl ;
     cin >> num1;

       cout <<"Yapmak istediğiniz işlemi giriniz "<< endl;
       cin >> opt ;

      cout << "2. sayıyı giriniz "<<endl ;
      cin >> num2;

      if(opt=="+"){
        
       cout << "İşlemin toplamı = "<<num1+num2 <<endl;

      }
         if(opt=="-"){
        cout << "İşlemin farkı = "<<num1-num2 <<endl;

      }

           if(opt=="*"){
            cout << "İşlemin çarpımı = "<<num1*num2 <<endl;
        
      }
    
                  if(opt=="/"){
            cout << "İşlemin çarpımı = "<<num1/num2 <<endl;
        

      }
     


// bir daha gerizekalı gibi çift tırnak ve tek tırnak farkını unutma 



}


*/

// mantıksal operatörler c deki gibi || (or gates) && (and gates)  ! not gates bu zaten çok zor değil 
// logic gates dersinde bun konu hakkında  daha derine ineceğiz 
// basic input output işlemlerinde bunlar yeterli 
// if, else if ve else için daha farklı örnekler de çözülebilir 
// else if bloklarına kadar tek farklı yanı  endl ve cout ve cin ; bunların dışında çok bir farklı yanı yok sadece string alırken daha kolay alınıyor 



// while döngüleri (olm bunun da C den fazla bir farkı yok göz at geç aq)
// buraya kadar anladığım kadarıyla cpp nin c den farkı oop olması ve bir kaç farklı fonksiyon ve kolaylık olması
// do while da yine c nin aynısı sadece tek bir farkı var 
// sen while kullan o daha kolay 
 

 // yarın cpp de döngülere kadar olan yerlerden örnekler çöz 
 // for döngülerinin de çok fazla bir farkı yok
 // bundan sonra tipik bir faktöriyel örneği çöz (unutmamak adına)
 //do while ile yazmaya çalış 

/*

// tipik bir conditions örneği

#include<iostream>

using namespace std;

int main(){
    float ptr;
    cout<<"Please log in your points"<<endl;

    cin>>ptr;

    if(ptr>=0&&ptr<=50){
        cout<<"Yoo are too bad"<<endl;
    }
    else if(ptr>50&&ptr<70)
       {
        cout<<"your point is C"<<endl;


    }
      else if(ptr>=70&&ptr<90){
        cout<<"your point is B"<<endl;
        
    }
      else if(ptr>=90&&ptr<=100){
        cout<<"you are too succesful"<<endl;
        
    }
    return 0;




}

// burdan devam edecez ,şimdi yemek molası 
// yemek bitti devam =D

#include<iostream>

using namespace std ;

int main(){

int a,b,c;

cout<<"birinci sayıyı giriniz"<<endl;
cin>>a;

cout<<"ikinci sayıyı giriniz"<<endl;
cin>>b;

cout<<"üçüncü sayıyı giriniz"<<endl;
cin>>c;

if(a>b && a>c){
    cout<<"A en büyük sayıdır"<<endl;
}
else{
    cout<<"A en büyük değildir"<<endl;
}


// burda karşılaştırma operatörleri kullanılarak kod devaö ettirilebir
// buna şu an gerk yok =D




}

// işçi sorusunun cevabı
#include<iostream>

using namespace std ;

int main(){

int emp,day;

cout<<"bir işi bir işçi kaç günde bitirmiştir"<<endl;
cin>>emp >> day  ;
float pay = (10*emp)+(25/365)*day ;
printf("bu çalışanın %d gün boyunca ücreti %.2f TL'dir",day ,pay);
return 0;

}





// basic fact program 




 #include<iostream>

using namespace std;

int main(){
    int a=0,fact=1;

    cout<<"please log in to number which you want to take a fact"<<endl;
    cin >> a;

if(a<0){
    cout<<"Negative numbers dont have a fact" <<endl;
}

else{
    while(a>1){

        fact*=a;
        a--;

    }

     cout<<"Your numbers fact is = "<< fact <<endl;
}

return 0;


}

*/
// break; kullanımı yine aynı "break çalıştığı anda direkt döngü biter"
// continue: ,compiler continue gördüpü anda alttakı satırları işleme sokmaz (bazı durumlarda işlevsel olabilir)
// while döngülerinde komple çıkar o yüzden while ddöngülerinde biz continue dikkatli kullanılır bazı işlemler önden de yapılır 
// while döngülerinin sonsuza kadar devam etmesini istersek bool terimlerini kullanabiliriz 
// bu bizi bazen yormaz ama ille de inat adececm diyorsa boş dönen döngü de atıp araya break komutu koyabilirsin
// array cpp nin c den farklı özelliklerinden bir tanesidir (bazı özellikleri)
// cpp stringlerde c kadar uğraştırmaz matris stringlerine gerk yoktur 
// tam sayılar için durum farklıdır tam sayılarda çok boyutlu arrayler vardır 
// çok boyutlu arraylerin bellekte diziliş şekline bir bak ama karnın tok iken  =D
// switch case yapılarının if else yapılarından farkını zaten biliyoruz (ezan okunduktan sonra cpp de ki switch case şn c den fakına bakacağız )
// her zaman ki gibi mantık olark tüm case lerimizin içinde break komutu olacak
// yine aptal gibi tek parantez ve çift parantezin farkını ayıramadın =()
// ders 17 de kaLdın git şimdi biraz makale oku 

// cpp de stringleri karşılaştıem ak için == kullanabiliriz fakat c de bunu yapamayız c de bunun yerine string.h kütüphanesinnden strcmp fonksiyonunu kullanmalıyız
// Ccpp de ki fonksiyon yapısı tüm proglamlama dillerinde olduğu gibi kodu minimalize etmek ve kodun daha derli toplu olmasını sağlar
// C   de ki gibi void fonksiyonunda çıktı alınmaz 
// C ile aynı yapıya sahip fonksiyonlar 
// bununla ilgili standart 2 ya da 3 tane örnek çöz 
// return fonksiyonlarıızda döndüreceğimiz değerin fonksiyonunu yazarız int ise int char ise char 
// main fonksiyonlarında ne olur olmaz return 0 yaz , yada 1 her neyse 
//  c deki gibi yine srand(time(NULL)) ile rastgele bellekten sayı tutulur 
// burda bizim c deki gibi time.h kütüphanesi eklememize gerek yok 
// array işlemlerinde c deki gibi fonksiyonda arrayın eleman sayısını belirtmemize gerek yok 
// cpp deki arraylerin c deki gibi bir çok özelliği yoktur
// cpp de c deki gibi amelelik yapmayacağız
/*
#include<iostream>

using namespace std;

float average(int lenght,int a[]){
    int sum=0;
    for(int i=0;i<lenght;i++){
        sum+=a[i];
    }
    return sum/lenght;

}

void arrsett(int lenght,int b[],int arrs[]){

    int enk,enb;
    enk=b[0];
    enb=b[0];
    for(int i=0;i<lenght;i++){
        if(b[i]<=enk){
             arrs[0]=b[i];
        }
        if(b[i]>enb){
            arrs[1]=b[i];
        }
    }
}



int main(){
    int a[4], b[2];

    cout<<"Dizinize girmek istediğiniz sayıları giriniz"<<endl;

    for(int i=0;i<4;i++){
        cin>>a[i];
    }
     int avr= average(4,a);
        arrsett(4,a,b);
        cout<<"Dizinin ortalaması:"<<avr<<endl;
        cout<<"Dizinin en büyük elemanı:"<<b[1]<<endl;
        cout<<"Dizinin en küçük elemanı:"<<b[0]<<endl;
        return 0;



}

//bu da basit bir cpp array örneği kod yazdıkça array mantığını daha iyi anlayacağız  
//yine c deki gibi işlem yapma limitimiz vardır 




-------------POİNTERS----------------

//  burda da c den farklı bir şey yok . Çok can sıkıcı bir hal almaya başladı 
//c++ ile pointerların kullanımına geçelim


#include <iostream>
using namespace std ;
const int max =5;//max dizi boyutu belirlenmiştir.
typedef struct { //struct yapısının içerisinde yer alan değişkenlerde tanımlama yapılmıştır.
    int id;
    string name;
    string surname;
    int age;
}person;

void print(person *p){//print fonksiyonu tanımlanmıştır.
    cout<<"id:"<<p->id<<endl;
    cout<<"name:"<<p->name<<endl;
    cout<<"surname:"<<p->surname<<endl;
    cout<<"age:"<<p->age<<endl;
}
int main(){
    person p[max];//person tipinde p dizisi tanımlanmıştır.
    for(int i=0;i<max;i++){//for döngüsü ile dizinin elemanlarına değerler atanmıştır.
        p[i].id=i+1;
        cout<<"name:";
        cin>>p[i].name;
        cout<<"surname:";
        cin>>p[i].surname;
        cout<<"age:";
        cin>>p[i].age;
    }
    for(int i=0;i<max;i++){//for döngüsü ile dizinin elemanlarına değerler atanmıştır.
        //print(&p[i]);
    }
    return 0;
}
// burda da c deki gibi pointer kullanımı vardır
// c deki gibi dizi pointerında refereans yöntemi ile çağırma yapabiliriz
// değişkenlerin geçerlilik alanı yine c deiyle aynıdır 
// c deki gibi pointerlar ile fonksiyonlara değer gönderebiliriz
// c deki gibi pointerlar ile fonksiyonlardan değer alabiliriz
// değer ile çağırma ve atıf ile çağırma arasındaki farklar hala aynı 
// call by refeerence yöntemiyle fonksiyondan birden fazla değer döndürebiliriz
//  int *p= (int)malloc(sizeof(int)*3) şeklinde dizi atıyoruz
// her tipte çalışmasını istediğimiz durumlarda da void yazabiliriz
// stringlerde ppointers dizisi kullanırken memory allocation yapmaya gwerek yok çünkü  azten stringlerde bunu otomatik olark yapar 
// cppp de dtring olarak tanımlı olan bir değeri değiştirme şansıkmız yok 
// ama karakter dizisi olarak tanımlı bir diziyi değiştirebiliriz
// karakter tiplerinde cpp nin sunduğu en önelş özellşkm belkş de class ömantığından gelen string fonksiyonudur
//


// 12 lik dilimdeki bir saati 324 lük dilime çeviren kodu 

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
    cout << "saat donusumleri" << endl;
    
    cout << "lutfen 12'lik sistemde bir saat giriniz" << endl;
    
    char s[11]; //boyutunu belirtiyoruz
    cin >> s; //kullanÄ±cÄ±dan alÄ±yoruz
    
    if (s[8]=='P') { //8.karaktere denk geldiÄŸi iÃ§in
        char x[3]; //girilen verilerin ilk Ã¼Ã§ deÄŸerini alÄ±yoruz (deÄŸiÅŸtirebilmek iÃ§in)
        x[0]=s[0];
        x[1]=s[1];
        x[2]= '\0'; //bir dizgi olduÄŸu iÃ§in son karakteri end of string omalÄ±
        
        eÄŸer aÅŸaÄŸÄ±daki saat hesaplamasÄ±nÄ± yapmak
         istemiyorsanÄ±z atoi kodunu kullanabilirisiniz kolay yolu olarak
        int saat=0;
        saat += (x[0]-48) *10;
        saat += x[1]-48;
        
        
        int saat= atoi(x); // karakter dizisini alÄ±p integer deÄŸere Ã§eviriyor
        saat += 12; 
        
        s[0]=(char)48 + saat/10;
        s[1]=(char)48 + saat%10;
        
        
        s[8]='\0'; // P ve geri kalan karakterler basÄ±lmayacaktÄ±r
        
        cout << "yeni saat: " << s << endl;
            }
    else { //geriye kalan tek durum else olduÄŸu iÃ§in else yapÄ±sÄ±nÄ± kullandÄ±k
        
        s[8]='\0'; // A ve geri kalan karakterler basÄ±lmayacaktÄ±r
        cout << "yeni saat: " << s << endl;
        }
    
    return 0;
}


// DİZGİ OYUNU

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

    
    char * f(char *s) {
        int i=0;
        char c=s[i];
        if (c=='\0')
            return s;
        
        bool kontrol=false;
        while(c != '\0') {
            char c1= s[i+1];
        if(c==c1&&i==0) {
            s= &s[i+2];
            kontrol=true;
            }
        
        else if (c==c1) {
            kontrol=true;
            while (s[i]!='\0'){
                s[i]=s[i+2];
                i++;
                }
            s[i]= '\0';
            
        }
        i++;
        c=s[i];
        }
        if(kontrol ==false)
            return s;
        else
            return f(s);
            }
int main()
{
    cout << "dizgi oyunu" << endl;
    
    cout << "lutfen bir dizgi giriniz: " << endl;
    
    char c[100];
    
    cin >> c;
    cout << f(c) << endl;
}


// Stringlerle polindrom verenn uygulama 



using namespace std;

int main()
{
    cout << "palindrome" << endl;
    cout << "lutfen bir kelime giriniz.." << endl;
    
    char c[100]; //100 karakterlik bir boyut ayÄ±rdÄ±k
    cin >> c;
    
    char *p,*q;
    p=c; //dizginin en baÅŸÄ±ndan baÅŸlamasÄ± iÃ§in
    q=c; /* dizginin en sonundan baÅŸlamasÄ± iÃ§in bir 
     * while dÃ¶ngÃ¼sÃ¼ atayacaÄŸÄ±z ve end of string kodunu
     * gÃ¶rene kadar ilerlemesini isteyeceÄŸiz. 
     * BÃ¶ylece q iÅŸaretÃ§isi kelimenin en sonundan baÅŸlamÄ±ÅŸ olacaktÄ±r */
     
while(*q!='\0') { //q'nun gÃ¶sterdiÄŸi yerdeki deÄŸere bakmamÄ±z gerektiÄŸi iÃ§in iÅŸaretÃ§i kullanÄ±yoruz
        q++;
        }
    q--; //en son eleman \0 olduÄŸu iÃ§in bir geri gelmesini saÄŸlÄ±yoruz
    
    bool palindrome=true; //ilk baÅŸta tÃ¼m kelimeleri palindrome kabul ediyoruz
    
    while (q>p) { //p ve q birbirine eÅŸit olmadÄ±ÄŸÄ± zaman (ortada karÅŸÄ±laÅŸmadÄ±klarÄ±nda)
        
        if(*p!=*q) { //iÅŸaretÃ§i olmalarÄ±nÄ±n sebebi, oradaki deÄŸerleri karÅŸÄ±laÅŸtÄ±rmak istememiz
        palindrome=false; //eÄŸer bir tane bile farklÄ± eleman bulursak false dÃ¶ndÃ¼rÃ¼yoruz
        }
        p++; //diÄŸer harflere geÃ§meleri iÃ§in 
        q--;
        }
    //sonuÃ§larÄ± ekrana yansÄ±tmak iÃ§in
    if (palindrome) 
        cout << "girilen kelime bir palindrome'dur" << endl;
    else 
        cout << "girilen kelime bir palindrome degildir" << endl;
}



























     

    











