#ifndef JAM_H_INCLUDED
#define JAM_H_INCLUDED
#define true 1
#define false 0
#define boolean unsigned char
typedef int Hour; //0..23
typedef int Minute; //0..59
typedef int Second; //0..59
typedef struct{
Hour HH;
Minute MM;
Second SS;
}TJam;
typedef TJam JAM;
//Pengganti fungsi Get dan Set
#define Hour(J) (J).HH
#define Minute(J) (J).MM
#define Second(J) (J).SS

void ResetJam(JAM J);

boolean IsJValid(int H,int M,int S);

JAM MakeJam(int HH,int MM,int SS);

void MakeJamTest(int HH,int MM,int SS);

int GetHour(JAM J);

int GetMinute(JAM J);

int GetSecond(JAM J);

void SetHH(JAM *J,int newHH);

void SetMM(JAM *J,int newMM);

void SetSS(JAM *J,int newSS);
/*Baca Tulis*/
void BacaJam(JAM *J);

void TulisJam(JAM J);

int Jam2Detik (JAM J);

JAM Detik2Jam (int N );

boolean JEQ (JAM J1, JAM J2);

boolean JNEQ (JAM J1,JAM J2);

boolean JLT (JAM J1,JAM J2);

boolean JGT (JAM J1,JAM J2);

JAM JPlus (JAM J1,JAM J2);

JAM JMinus (JAM J1,JAM J2);

JAM NextDetik (JAM J);

JAM NextNDetik (JAM J,int N);

JAM PrevDetik (JAM J);

JAM PrevNDetik (JAM J,int N);

int Durasi (JAM Jaw,JAM Jakh);

#endif // JAM_H_INCLUDED
