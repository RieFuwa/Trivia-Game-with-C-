#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
using namespace std;

    char cevap;
    int Puan;

class Soru{
    public: 

    void setValues(string, string, string, string, string, char, int); ; //degerlerim
    void Sorularim();
    private:

    string Sorumlarim_Text;
    string cevap_1;
    string cevap_2;
    string cevap_3;
    string cevap_4;

    char Dogru_cevap;
    int Soru_puani;
    
    
};
int main()
{
    int deger;
    cout<<"----------SORU SAVASI----------"<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"-------------------------------"<<endl<<endl;

    cout<<"Oyunu baslatmak icin 1'i"<<endl;
    cout<<"Cikis yapmak icin 2'i tiklayiniz.."<<endl;
    cin>>deger;
    if(deger==1)
    {   
            system("cls");
            string ad;
            cout<<"SORU SAVASI OYUNUNA HOSGELDIN!!"<<endl<<endl;
            cout<<"Adini ogrenebilir miyiz?  ";
            cin>>ad;
            string cevap;
            cout<<"Seninle tanistigimiz icin cok sansliyiz, "<< ad <<endl<<endl<<endl;
            Sleep(4000);
            cout<<"Sorulari gormeye hazir misin?"<<endl;
            Sleep(2000);
            cout<<"Evet veya Hayir demen yeterli.."<<endl;
            cin>>cevap;
            if (cevap == "Evet" || cevap == "evet"){
                system("cls");
                cout<<"Senin icin birbirinden guzel 25 soru hazirladik."<<endl;
                Sleep(2000);
                cout<<"Tek yapman gereken dogru cevabi bulmak olacak."<<endl;
                Sleep(5000);
                cout<<"Sana iyi sanslar diliyoruz, "<< ad <<"!! "<<endl<<endl;
                Sleep(3000);
                cin.get();
                
            }else{
                cout<<"Hoscakal, bizi burda yalniz birakma"<<endl;
                cin.get();
                return 0;
            }
    Soru s1;
    Soru s2;
    Soru s3;
    Soru s4;
    Soru s5;
    Soru s6;
    Soru s7;
    Soru s8;
    Soru s9;
    Soru s10;
    Soru s11;
    Soru s12;
    Soru s13;
    Soru s14;
    Soru s15;
    Soru s16;
    Soru s17;
    Soru s18;
    Soru s19;
    Soru s20;
    Soru s21;
    Soru s22;
    Soru s23;
    Soru s24;
    Soru s25;
    system("cls");
    s1.setValues("1-) Avrupa kitasinin en guneyinde bulunan Gavdos adasi hangi ulke sinirlari icindedir ?",
        "Portekiz",
        "Yunanistan",
        "Italya",
        "Ispanya",
        'b',
        10);
    s2.setValues("2-) William Shakespeare nerelidir ?",
        "Fransa",
        "ABD",
        "Ingiltere",
        "Ispanya",
        'c',
        10);
    s3.setValues("3-) Beyzbol oynayan bir takim kac kisiden olusur ?",
        "11",
        "9",
        "6",
        "13",
        'b',
        10);
    s4.setValues("4-) Hangi bilim adami suyun kaldirma kuvvetini bulmustur ?",
        "Arshimed",
        "Einstein",
        "Newton",
        "Ausubell",
        'a',
        10);
    s5.setValues("5-) UEFA Avrupa Ligi’nde en cok şampiyon olan takim asagidakilerden hangisidir ?",
        "Fiorentina",
        "Juventus",
        "Valencia",
        "Sevilla",
        'd',
        10);
    s6.setValues("6-) Koala isimli hayvanin dogal yasam ortami hangi kitadadir ?",
        "Afrika",
        "Amerika",
        "Asya",
        "Avustralya",
        'd',
        10);
    s7.setValues("7-) The Odessa File kitabinin yazari kimdir ?",
        "Stephen King",
        "Agatha Christie",
        "Frederick Forsyth",
        "Dan Brown",
        'c',
        10);
    s8.setValues("8-) NBA de mac esnasinda bir takimin kaç yedek oyuncu bulundurma hakki vardir ?",
        "5",
        "8",
        "7",
        "6",
        'c',
        10);
    s9.setValues("9-) Ernest Hemingway in yazdıgı Yaslı Adam ve Deniz adli kitabindaki yaslı adamin adi nedir ?",
        "Pedro",
        "Santiago",
        "Ernest",
        "Kone",  
        'b',
        10);    
    s10.setValues("10-) NASA da calisan ilk Turk kimdir ?",
        "Nihat Dogan",
        "Ismail Akbay",
        "Prof. Dr. Mehmet Beyoglu",
        "Cahit Sitki Taranci",
        'b',
        10);
    s11.setValues("11-)Unlu Titanic filminin yonetmeni kimdir ?",
        "James Cameron",
        "Christopher Nolan",
        "Steven Spielberg",
        "Quentin Tarantino",
        'a',
        10);
    s12.setValues("12-) Gozdeki kubbe seklinde seffaf bolgenin adi nedir ?",
        "Gozaki",  
        "Kornea",
        "Retina",
        "Konjoktiv",
        'b',
        10);
    s13.setValues("13-) Hangisi psikolojik bir rahatsizliktir ?",
        "Sizofreni",
        "Anemi",
        "Sinuzit",
        "Losemi",
        'a',
        10);
    s14.setValues("14-) Kama Nehri hangi ulkededir ?",
        "Rusya",
        "Romanya",
        "Polonya",
        "Iran",
        'a',
        10);
    s15.setValues("15-) Hangi ülkenin Isvec ile siniri vardir ?",
        "Norvec",
        "Polonya",
        "Almanya",
        "Rusya",
        'a',
        10);
    s16.setValues("16-) 2009 yilinda dunyada en yüksek gise hasilati kazanan film hangisidir ?",
        "Titanic",
        "The Avengers",
        "Avatar",
        "Independence Day",
        'c',
        10);
    s17.setValues("17-) Asagidakilerden hangisi cekinik gen ile tasinir ?",
        "Yesil Göz",
        "Ayrik kulak memesi",
        "Kahverengi sac",
        "Koyu renk goz",
        'a',
        10);
    s18.setValues("18-) Danny Boyle hangi filmiyle en iyi yonetmen Oscarini almistir ?",
        "Trainspotting",
        "28 gun sonra",
        "127 saat",
        "Milyoner",
        'd',
        10);
    s19.setValues("19-) Denizcilikte kirmizi renkli lamba hangi yonu simgeler ?",
        "Sancak",
        "Iskele",
        "Pruva",
        "Pupa",
        'b',
        10);
    s20.setValues("20-) Elektronik mikroskop hangi yuzyilda icat edilmistir ?",
        "21. yuzyil",
        "20. yuzyil",
        "18. yuzyil",
        "19. yuzyil",
        'b',
        10);
    s21.setValues("21-) 2 Broke Girls dizisinde Max karakterini canlandiran oyuncunun adi nedir ?",
        "Beth Behrs",
        "Zooey Deschanel",
        "Kat Dennings",
        "Courteney Cox",
        'c',
        10);
    s22.setValues("22-) 2015 yilina kadar Birlesik Devletler takimindaki en iyi yuzucu kimdir ?",
        "Ryan Gorges",
        "Ryan Loctes",
        "Michael Phelps",
        "Michael Jordan",
        'c',
        10);
    s23.setValues("23-) Kursunun simgesi nedir ?",
        "Kr",
        "Pb",
        "Pp",
        "Kp",
        'b',
        10);
    s24.setValues("24-)22 Aralik ve 20 Ocak arasinda dogduysaniz burcunuz ne olur ?",
        "Terazi",
        "Oglak", 
        "Yay",
        "Kova",
        'b',
        10);
    s25.setValues("25-) Aclik Oyunlari filmindeki Katniss Everdeen kacinci bolgedendir ?",
        "3. bolge",
        "8. bolge",
        "12. bolge", 
        "11. bolge",
        'c',
        10);
    

    s1.Sorularim();
    s2.Sorularim();
    s3.Sorularim();
    s4.Sorularim();
    s5.Sorularim();
    s6.Sorularim();
    s7.Sorularim();
    s8.Sorularim();
    s10.Sorularim();
    s11.Sorularim();
    s12.Sorularim();
    s13.Sorularim();
    s14.Sorularim();
    s15.Sorularim();
    s16.Sorularim();
    s17.Sorularim();
    s18.Sorularim();
    s19.Sorularim();
    s20.Sorularim();
    s21.Sorularim();
    s22.Sorularim();
    s23.Sorularim();
    s24.Sorularim();
    s25.Sorularim();
    

    cout<<"Sorularin burada sona erdi!! "<<endl<<endl;
    cout<<"Topladigin toplam puan: " << Puan <<" tebrikler!!"<<endl;

    }

    if(deger==2)
    {
         return 0;   
    }

    
}
void Soru::setValues( string s, string a1, string a2, string a3, string a4, char a, int b)
    {
        Sorumlarim_Text = s;
        cevap_1 = a1;
        cevap_2 = a2;
        cevap_3 = a3;
        cevap_4 = a4;
        Dogru_cevap = a;
        Soru_puani = b;
    }
void Soru::Sorularim()
    {
        cout<<endl;
        cout<< Sorumlarim_Text <<endl;
        cout<<"a) "<<cevap_1<<endl;
        cout<<"b) "<<cevap_2<<endl;
        cout<<"c) "<<cevap_3<<endl;
        cout<<"d) "<<cevap_4<<endl;
        cout<<endl;

        cout<<" Bu soruya verecegin cevap nedir savasci ? "<<endl;
        cin>>cevap;

        if(cevap==Dogru_cevap){
            cout<<endl;
            Sleep(1000);
            cout<<"DOGRU CEVAP !!"<<endl<<endl;
            cout<<"--------------------------------------------";
            cout<<"--------------------------------------------";
            Sleep(2000);
            Puan +=Soru_puani ;
            
        }
        else
        {
            cout<<endl;
            Sleep(1000);
            cout<<"Uzgunum yanlis cevap verdin :/ "<<endl;
            Sleep(3000);
            cout<<"Sorunun dogru cevabi "<< Dogru_cevap<<" olacakti. "<<endl<<endl;
            cout<<"--------------------------------------------";
            cout<<"--------------------------------------------";
            Sleep(2000);

        }
    }