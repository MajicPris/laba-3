//kino.h
using namespace std;
class kino
{
private: 
		char* Cname; 
		 char* Fname; 
		 int timeH;
		 int timeM;
		 int coast; 
		 char* adres;

public: 
		kino(char* Cn, char* Fn, int tH, int tM, int c, char* a);
		kino();
		char* getCname(){ return Cname; }
		void setCname(string C){ Cname = C; }
		char* getFname(){ return Fname; }
		void setFname(string F){ Fname = F; }
		int gettimeH(){ return timeH; }
		void settimeH(int H){ timeH = H; }
		int gettimeM(){ return timeM; }
		void settimeM(int M){ timeM = M; }
		int getcoast(){ return coast; }
		void setcoast(int C){ coast = C; }
		char* getadres(){ return adres; }
		void setadres(string A){ adres = A; }
};

kino::kino()
{
	setCname("Unknow");
	setFname("Unknow");
	settimeH(0);
	settimeM(0);
	setcoast(0);
	setadres("Unknow");
}

kino::kino(char* Cn, char* Fn, int tH, int tM, int c, char* a)
{

	setCname(Cn);
	setFname(Fn);
	settimeH(tH);
	settimeM(tM);
	setcoast(c);
	setadres(a);
}
