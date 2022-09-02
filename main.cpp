#include <iostream>
#include <windows.h>//library untuk bisa menggunakan function sleep atau yang lain
#include <conio.h> //library untuk getch dan lain lain
#include <fstream> //library untuk load atau mengupload file
//#include <cstdlib> //library untuk mengubah resolusi console

using namespace std;

//int framesDelay;
//bool exitConsole=false;
///bool inGame;
string pilihan, namaPlayer, map, exitgame;
int o = 0;
char c; 


class Textmappulau{  //TEXT MAP PULAU STEP 1
	public:
		string kata1;
		string kata2;
		string kata3;
		string kata4;
		string kata5;
		string kata6;
		string kata7;
		string kata8;
		string kata9;
		string kata10;
		string kata11;
		string kata12;
		string kata13;
		string kata14;
		string kata15;
		string kata16;
		string kata17;
		string kata18;
		string kata19;
		string kata20;
		string kata21;
		string kata22;
		string kata23;
		string kata24;
		string kata25;
		string kata26;
		string kata27;
		string kata28;
		string kata29;
		string kata30;
		Textmappulau(string x, string y, string z, string u, string h, string q, string t, string f, string k, string p, string s, 
		string m, string v, string e, string n, string c, string j, string d, string r, string o, string qw, string er, string ty, 
		string ui, string op, string as, string df, string gh, string jk, string lz){
			kata1 = x;
			kata2 = y;
			kata3 = z;
			kata4 = u;
			kata5 = h;
			kata6 = q;
			kata7 = t;
			kata8 = f;
			kata9 = k;
			kata10 = p;
			kata11 = s;
			kata12 = m;
			kata13 = v;
			kata14 = e;
			kata15 = n;
			kata16 = c;
			kata17 = j;
			kata18 = d;
			kata19 = r;
			kata20 = o;
			kata21 = qw;
			kata22 = er;
			kata23 = ty;
			kata24 = ui;
			kata25 = op;
			kata26 = as;
			kata27 = df;
			kata28 = gh;
			kata29 = jk;
			kata30 = lz;
		}

};


class Textstart { //TEXT START ATAU MULAI
	public:
		string kata1;
		string kata2;
		string kata3;
		string kata4;
		Textstart(string x, string y, string z, string u){
			kata1 = x;
			kata2 = y;
			kata3 = z;
			kata4 = u;
		}

};



void color(int color){ //function untuk warna font karakter
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE),color);
}

void gotoxy(int x, int y){ //function untuk membuat jarak karakter.
	COORD c;
	c.X=x;
	c.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

void loaddata(string fileName)    /// Function untuk mengupload file 
{
    string getContent;
    ifstream openfile(fileName.c_str());
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
    if(openfile.is_open())
    {
        while(! openfile.eof())
        {
            getline(openfile, getContent);
            cout << getContent << endl;
        }
    }
}

void infotextgame (){
	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    gotoxy(100,0);
    cout<<"-------------------";
    
    gotoxy(100,1);
    cout<<"      INFO: ";
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void map_kota(){
	
}



void exit (){
	system("cls");
	loaddata("gameselesai.txt");
}

void map_pulau(){
	string pilihannext;
	system("cls");
	loaddata("mappulau.txt");
	infotextgame();
	Textmappulau text("Hai !!! ", "Selamat datang di pulau yang tidak berpenghuni.....", "Disini kamu mempunyai misi untuk mencari sebuah patung kuno !", "Apakah kamu sudah siap untuk bermain ?", 
	"Kamu memasuki pulau yang tidak berpenghuni ini.", "Pulau ini adalah gurun pasir.", "Dipulau ini ada sebuah temple !!!", "Didalam temple tersebut ada sebuah patung." ,
	"tugas kamu disini pergi mencari temple tersebut dan ambil patung kuno tersebut !!! ", "walk walk walk walk walk", "Didepan kamu ada senjata, ambil atau tidak ?", "Pilih senjata yang mau di ambil !!!",
	"Kamu memilih senjata M4A1 dan kamu melanjutkan perjalanan lagi.", "Bahaya datang !!!", "Didepan kamu ada skeleton, Skeleton itu mau menyerang mu. ", "kamu mau menyerang atau kabur ?", "BANG BANG BANG BANG BANG",
	"Kamu terkena tebasan kapak dari skeleton !!!", "tetap menyerang atau kabur ?", "Kamu telah mengalahkan skeleton, dan melanjutkan perjalanan.", "Ditengah perjalanan kamu melihat bagunan kuno di balik bukit.....",
	"Dan kamu melanjutkan perjalanan ke balik bukit tersebut...", "Kamu menemukan temple tersebut...", "Pergi cari patung tersebut.", "Kamu memasuki temple tersebut...", "kamu harus mencari patung tersebut", 
	"..........................", "Kamu menemukan patung kuno tersebut !!!", "Segera ambil patung itu dan keluar dari pulau ini.", "Selamat kamu telah menyelesaikan misi di pulau ini.");
	
	gotoxy(7,25);
	cout << "MOD : \n";
	
	int x=0;
	gotoxy(9,26);
	while (text.kata1[x] != '\0' )
	{
		cout << text.kata1[x];
		Sleep(55);
		x++;
	}
	
	int y=0;
	gotoxy(17,26);
	while (namaPlayer[y] != '\0' )
	{
		cout << namaPlayer[y];
		Sleep(55);
		y++;
	}
	
	int z=0;
	gotoxy(9,27);
	while (text.kata2[z] != '\0' )
	{
		cout << text.kata2[z];
		Sleep(55);
		z++;
	}
	
	int p=0;
	gotoxy(9,28);
	while (text.kata3[p] != '\0' )
	{
		cout << text.kata3[p];
		Sleep(55);
		p++;
	}
	
	int a=0;
	gotoxy(9,29);
	while (text.kata4[a] != '\0' )
	{
		cout << text.kata4[a];
		Sleep(55);
		a++;
	}
	
    
    char c = '0';
	int pilihan=0;
	gotoxy(17,31);
    cout<<"READY";
    gotoxy(17,32);
    cout<<"EXIT";
    while (c!=char(13)){
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    	gotoxy(14,31+pilihan);
    	cout<<"=>";
    	gotoxy(0,0);
        c=getch();
        gotoxy(14,31+pilihan);
        cout<<"  ";
        if (c=='s')
        {
            if (pilihan<1)
            {
                pilihan+=1;
            }
        }
        if (c=='w')
        {
            if (pilihan>0)
            {
                pilihan-=1;
            }
        }
	}if (pilihan==0)
    {
    	//STAGE SELANJUTNYA 1
        system("cls");
    	loaddata("hutan.txt");
    	
    	gotoxy(7,25);
		cout << "MOD : \n";
		int h=0;
		gotoxy(9,26);
		while (text.kata5[h] != '\0' )
		{
		cout << text.kata5[h];
		Sleep(55);
		h++;
		}
		
		int q=0;
		gotoxy(9,27);
		while (text.kata6[q] != '\0' )
		{
		cout << text.kata6[q];
		Sleep(55);
		q++;
		}
		
		int t=0;
		gotoxy(9,28);
		while (text.kata7[t] != '\0' )
		{
		cout << text.kata7[t];
		Sleep(55);
		t++;
		}
		
		int f=0;
		gotoxy(9,29);
		while (text.kata8[f] != '\0' )
		{
		cout << text.kata8[f];
		Sleep(55);
		f++;
		}
		
		int k=0;
		gotoxy(9,30);
		while (text.kata9[k] != '\0' )
		{
		cout << text.kata9[k];
		Sleep(55);
		k++;
		}

    	char c = '0';
		int pilihan=0;
		gotoxy(17,32);
    	cout<<"MAJU";
    	gotoxy(17,33);
    	cout<<"EXIT";
    	while (c!=char(13)){
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    	gotoxy(14,32+pilihan);
    	cout<<"=>";
    	gotoxy(0,0);
        c=getch();
        gotoxy(14,32+pilihan);
        cout<<"  ";
        if (c=='s')
        {
            if (pilihan<1)
            {
                pilihan+=1;
            }
        }
        if (c=='w')
        {
            if (pilihan>0)
            {
                pilihan-=1;
            }
        }
	}if (pilihan==0)
    {
    	//STAGE SELANJUTNYA 2
        	system("cls");
    		loaddata("hutan.txt");
    		
    		gotoxy(7,25);
			cout << "*Sedang berjalan : \n";
			
			int p=0;
			gotoxy(9,26);
			while (text.kata10[p] != '\0' )
			{
			cout << text.kata10[p];
			Sleep(150);
			p++;
			}
			
			system("cls");
    		loaddata("hutan.txt");
    		
    		gotoxy(7,25);
			cout << "MOD : \n";
			
			int s=0;
			gotoxy(9,26);
			while (text.kata11[s] != '\0' )
			{
			cout << text.kata11[s];
			Sleep(55);
			s++;
			}
    		
    		char c = '0';
			int pilihan=0;
			gotoxy(17,31);
    		cout<<"AMBIL";
    		gotoxy(17,32);
    		cout<<"TIDAK AMBIL";
    		while (c!=char(13)){
    		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    		gotoxy(14,31+pilihan);
    		cout<<"=>";
    		gotoxy(0,0);
        	c=getch();
        	gotoxy(14,31+pilihan);
        	cout<<"  ";
        	if (c=='s')
        	{
            	if (pilihan<1)
            	{
                pilihan+=1;
            	}
        	}
        	if (c=='w')
        	{
            if (pilihan>0)
            {
                pilihan-=1;
            }	
        	}	
			}if (pilihan==0)
    		{
    			//STAGE SELANJUTNYA 3 "AMBIL"
        		system("cls");
    			loaddata("senjata.txt");
    		
    			gotoxy(7,25);
				cout << "MOD : \n";
				
				int m=0;
				gotoxy(9,26);
				while (text.kata12[m] != '\0' )
				{
				cout << text.kata12[m];
				Sleep(55);
				m++;
				}	
    			
    			char c = '0';
				int pilihan=0;
				gotoxy(17,31);
    			cout<<"M4A1";
    			gotoxy(17,32);
    			cout<<"SWORD";
    			while (c!=char(13)){
    			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    				gotoxy(14,31+pilihan);
    				cout<<"=>";
    				gotoxy(0,0);
        			c=getch();
        			gotoxy(14,31+pilihan);
        			cout<<"  ";
        			if (c=='s')
        			{
            			if (pilihan<1)
            			{
                			pilihan+=1;
            			}
        			}
        			if (c=='w')
        			{
            			if (pilihan>0)
            			{
                			pilihan-=1;
            			}
        			}
				}if (pilihan==0)
    			{
    				//STAGE SELANJUTNYA 4
        			system("cls");
    				loaddata("hutan.txt");
    		
    				gotoxy(7,25);
					cout << "MOD : \n";
					
					int v=0;
					gotoxy(9,26);
					while (text.kata13[v] != '\0' )
					{
					cout << text.kata13[v];
					Sleep(55);
					v++;
					}	
    				
    				char c = '0';
					int pilihan=0;
					gotoxy(17,31);
    				cout<<"MELANJUTKAN";
    				gotoxy(17,32);
    				cout<<"MUNDUR";
    				while (c!=char(13)){
    					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    					gotoxy(14,31+pilihan);
    					cout<<"=>";
    					gotoxy(0,0);
        				c=getch();
        				gotoxy(14,31+pilihan);
        				cout<<"  ";
        				if (c=='s')
        				{
            				if (pilihan<1)
            				{
                			pilihan+=1;
            				}
        				}
        				if (c=='w')
        				{
            				if (pilihan>0)
            				{
             				pilihan-=1;
            				}
        				}
						}if (pilihan==0)
    					{
    						//STAGE SELANJUTNYA 5
        					system("cls");
    						loaddata("skeleton.txt");
    		
    						gotoxy(7,41);
							cout << "MOD : \n";
						
							int e=0;
							gotoxy(9,42);
							while (text.kata14[e] != '\0' )
							{
							cout << text.kata14[e];
							Sleep(55);
							e++;
							}
						
							int n=0;
							gotoxy(9,43);
							while (text.kata15[n] != '\0' )
							{
							cout << text.kata15[n];
							Sleep(55);
							n++;
							}
						
							int c=0;
							gotoxy(9,44);
							while (text.kata16[c] != '\0' )
							{
							cout << text.kata16[c];
							Sleep(55);
							c++;
							}
    						
    						char h = '0';
							int pilihan=0;
							gotoxy(17,47);
    						cout<<"MENYERANG";
    						gotoxy(17,48);
    						cout<<"KABUR";
    						while (h!=char(13)){
    							SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    							gotoxy(14,47+pilihan);
    							cout<<"=>";
    							gotoxy(0,0);
        						h=getch();
        						gotoxy(14,47+pilihan);
        						cout<<"  ";
        						if (h=='s')
        						{
            						if (pilihan<1)
            						{
                						pilihan+=1;
           							}
       							}
        						if (h=='w')
        						{
            						if (pilihan>0)
            						{
            					    	pilihan-=1;
           							}
        						}
								}if (pilihan==0)
    							{
    								//STAGE SELANJUTNYA 6
        							system("cls");
    								loaddata("skeleton.txt");
    		
    								gotoxy(7,41);
									cout << "*Sedang menyerang : ";
						
									int j=0;
									gotoxy(9,42);
									while (text.kata17[j] != '\0' )
									{
									cout << text.kata17[j];
									Sleep(150);
									j++;
									}
									
									system("cls");
									loaddata("skeleton.txt");
									
									gotoxy(7,41);
									cout << "MOD : \n";
						
									int d=0;
									gotoxy(9,42);
									while (text.kata18[d] != '\0' )
									{
									cout << text.kata18[d];
									Sleep(55);
									d++;
									}
									
									int r=0;
									gotoxy(9,43);
									while (text.kata19[r] != '\0' )
									{
									cout << text.kata19[r];
									Sleep(55);
									r++;
									}
									
									char h = '0';
									int pilihan=0;
									gotoxy(17,47);
    								cout<<"TETAP MENYERANG";
    								gotoxy(17,48);
    								cout<<"KABUR";
    								while (h!=char(13)){
   									 	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    									gotoxy(14,47+pilihan);
    									cout<<"=>";
    									gotoxy(0,0);
        								h=getch();
       								 	gotoxy(14,47+pilihan);
       						 			cout<<"  ";
        								if (h=='s')
        								{
        							    	if (pilihan<1)
           									{
                								pilihan+=1;
            								}
        								}
        								if (h=='w')
        								{
        								    if (pilihan>0)
           									{
            								    pilihan-=1;
           									}
        								}
									}if (pilihan==0)
    								{
    									//STAGE SELANJUTNYA 7 "TETAP MENYERANG"
    								    system("cls");
    									loaddata("skeleton.txt");
    		
    									gotoxy(7,41);
										cout << "*Sedang menyerang : ";
						
										int j=0;
										gotoxy(9,42);
										while (text.kata17[j] != '\0' )
										{
										cout << text.kata17[j];
										Sleep(150);
										j++;
										}
										
										system("cls");
										loaddata("gurun2.txt");
										
										gotoxy(7,25);
										cout << "MOD : \n";
										
										int o=0;
										gotoxy(9,26);
										while (text.kata20[o] != '\0' )
										{
										cout << text.kata20[o];
										Sleep(55);
										o++;
										}
										
										system("cls");
										loaddata("gurun2.txt");
										
										gotoxy(7,25);
										cout << "MOD : \n";
										
										int qw=0;
										gotoxy(9,26);
										while (text.kata21[qw] != '\0' )
										{
										cout << text.kata21[qw];
										Sleep(55);
										qw++;
										}
										
										int er=0;
										gotoxy(9,27);
										while (text.kata22[er] != '\0' )
										{
										cout << text.kata22[er];
										Sleep(55);
										er++;
										}
					
										system("cls");
										loaddata("temple.txt");
										gotoxy(7,31);
										cout << "MOD : \n";
										
										int ty=0;
										gotoxy(9,32);
										while (text.kata23[ty] != '\0' )
										{
										cout << text.kata23[ty];
										Sleep(55);
										ty++;
										}
										
										int ui=0;
										gotoxy(9,33);
										while (text.kata24[ui] != '\0' )
										{
										cout << text.kata24[ui];
										Sleep(55);
										ui++;
										}
										
										char c = '0';
										int pilihan=0;
										gotoxy(17,36);
   										cout<<"MASUK KE TEMPLE";
   										gotoxy(17,37);
    									cout<<"KABUR";
   										while (c!=char(13)){
    										SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    										gotoxy(14,36+pilihan);
    										cout<<"=>";
    										gotoxy(0,0);
       										c=getch();
       										gotoxy(14,36+pilihan);
       										cout<<"  ";
        									if (c=='s')
        									{
        									    if (pilihan<1)
        									    {
        								        pilihan+=1;
        									    }
    									    }
    										    if (c=='w')
    									    {
    									        if (pilihan>0)
    									        {
   										             pilihan-=1;
    									        }
   										    }
											}if (pilihan==0)
   											{
    											//STAGE SELANJUTNYA 8 "MENCARI"
    										    system("cls");
												loaddata("ruangantemple.txt");
										
												gotoxy(7,25);
												cout << "MOD : \n";
										
										
												int op=0;
												gotoxy(9,26);
												while (text.kata25[op] != '\0' )
												{
												cout << text.kata25[op];
												Sleep(55);
												op++;
												}
												
												int as=0;
												gotoxy(9,27);
												while (text.kata26[as] != '\0' )
												{
												cout << text.kata26[as];
												Sleep(55);
												as++;
												}
												
												char c = '0';
												int pilihan=0;
												gotoxy(17,30);
 												cout<<"MENCARI";
  												gotoxy(17,31);
    											cout<<"KELUAR DARI TEMPLE";
   												while (c!=char(13)){
    												SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    												gotoxy(14,30+pilihan);
    												cout<<"=>";
    												gotoxy(0,0);
    											    c=getch();
    											    gotoxy(14,30+pilihan);
    											    cout<<"  ";
    											    if (c=='s')
    											    {
    										        	if (pilihan<1)
    										        	{
   											            	pilihan+=1;
   												    	}
       												}
       												if (c=='w')
   												    {
    											        if (pilihan>0)
    											        {
    											            pilihan-=1;
    											        }
   												    }
													}if (pilihan==0)
   													{
    													//STAGE SELANJUTNYA 9 "MENCARI"
   													    system("cls");
														loaddata("ruangantemple.txt");
										
														gotoxy(7,25);
														cout << "*Sedang mencari : ";
														
														int df=0;
														gotoxy(9,26);
														while (text.kata27[df] != '\0' )
														{
														cout << text.kata27[df];
														Sleep(200);
														df++;
														}
														
														system("cls");
														loaddata("patung.txt");
														
														gotoxy(7,25);
														cout << "MOD : \n";
														
														int gh=0;
														gotoxy(9,26);
														while (text.kata28[gh] != '\0' )
														{
														cout << text.kata28[gh];
														Sleep(55);
														gh++;
														}
														
														int jk=0;
														gotoxy(9,27);
														while (text.kata29[jk] != '\0' )
														{
														cout << text.kata29[jk];
														Sleep(55);
														jk++;
														}
														
														char c = '0';
														int pilihan=0;
														gotoxy(17,31);
													    cout<<"AMBIL DAN KELUAR TEMPLE";
													    gotoxy(17,32);
													    cout<<"TIDAK AMBIL DAN KELUAR TEMPLE";
													    while (c!=char(13)){
													    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
													    	gotoxy(14,31+pilihan);
													    	cout<<"=>";
													    	gotoxy(0,0);
													        c=getch();
 														    gotoxy(14,31+pilihan);
													        cout<<"  ";
													        if (c=='s')
													        {
													            if (pilihan<1)
 														        {
 													               pilihan+=1;
 														        }
 														    }
													        if (c=='w')
													        {
													            if (pilihan>0)
													            {
 													            	pilihan-=1;
 													            }
													        }
															}if (pilihan==0)
 															{
														    	//STAGE SELANJUTNYA 10 "AMBIL DAN KELUAR TEMPLE
														        system("cls");
																loaddata("mappulau.txt");
																
																gotoxy(7,25);
																cout << "MOD : \n";
																
																int lz=0;
																gotoxy(9,27);
																while (text.kata30[lz] != '\0' )
																{
																cout << text.kata30[lz];
																Sleep(55);
																lz++;
																}
																
																char c = '0';
																int pilihan=0;
																gotoxy(17,31);
	   															cout<<"BERMAIN LAGI";
																gotoxy(17,32);
															    cout<<"EXIT";
															    while (c!=char(13)){
															    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
															    	gotoxy(14,31+pilihan);
																    cout<<"=>";
															    	gotoxy(0,0);
 																    c=getch();
															        gotoxy(14,31+pilihan);
															        cout<<"  ";
															        if (c=='s')
															        {
														            	if (pilihan<1)
 															        	{
														               		pilihan+=1;
															            }
															        }
															        if (c=='w')
															        {
															            if (pilihan>0)
 															            {
  																            pilihan-=1;
															            }
 																    }
																	}if (pilihan==0)
 																	{
																    	//STAGE SELANJUTNYA
																        map_pulau();
 																	}
 																    if (pilihan==1)
 																    {
																    	//STAGE KEMBALI
																        exit();
  																	}
   
																
 															}
														    if (pilihan==1)
														    {
 															   	//STAGE KEMBALI 10 "TIDAK AMBIL DAN KELUAR TEMPLE"
														        exit();
   															}
														
														
    												}
    												if (pilihan==1)
    												{
    													//STAGE KEMBALI 9 "KELUAR TEMPLE"
    												    exit();
    												}
   
												
    										}
    										if (pilihan==1)
   											{
    											//STAGE KEMBALI 8 "KABUR"
    										    exit();
    										}
   
										
										
   									}
    								if (pilihan==1)
    								{
    									//STAGE KEMBALI 7 "KABUR"
    								    exit();
    								}
						
    							}
    							if (pilihan==1)
    							{
    								//STAGE KEMBALI 6 "KABUR"
    							    exit();
   								 }
    						
    					}
    					if (pilihan==1)
    					{
    						//STAGE KEMBALI 5 "MUNDUR"
        					exit();
    					}
    			}
    			if (pilihan==1)
    			{
    				//STAGE 4 PILIHAN PEDANG "SWORD"
        			exit();
    			}
    			
    		}
    		if (pilihan==1)
    		{
    			//STAGE KEMBALI 3 "TIDAK AMBIL"
        		exit();
    		}
    		
    }
    if (pilihan==1)
    {
    	//STAGE KEMBALI 2 "MUNDUR"
        exit();
    }
    }
    if (pilihan==1)
    {
    	//STAGE KEMBALI 1
        exit();
    }
   
    
    
}


void textstart(){
	loaddata("judul.txt");
	Textstart text("Hai Player Selamat Datang di Game Adventure !!!", "Masukan Nama karakter anda !", "Nama karakter anda adalah ", "Pilih Map yang mau dimainkan !");
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
	gotoxy(72,17);
	cout << "INTRUKSI";
	gotoxy(53,18);
	cout << "Cara memilih pilihan, Tekan tombol "<<"(W)"<<" untuk keatas";
	gotoxy(59,19);
	cout << "Dan tekan tombol "<<"(S)"<<" untuk kebawah";
	gotoxy(57,20);
	cout << "Tekan tombol (ENTER) untuk pilihannya";
	
	
	
	 
	
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
	int x=0;
	gotoxy(10,27);
	while (text.kata1[x] != '\0' )
	{
		cout << text.kata1[x];
		Sleep(55);
		x++;
	}
	
	int g=0;
	gotoxy(10,28);
	while (text.kata2[g] != '\0' )
	{
		cout << text.kata2[g];
		Sleep(55);
		g++;
	}
	
	gotoxy(10,39);
	cout <<"> ";
	cin >> namaPlayer;
	
	int f=0;
	gotoxy(10,29);
    while (text.kata3[f] != '\0' )
	{
		cout << text.kata3[f];
		Sleep(55);
		f++;
	}
	
	//gotoxy(10,30);
	int l=0;
	gotoxy(36,29);
    while (namaPlayer[l] != '\0' )
	{
		cout << namaPlayer[l];
		Sleep(55);
		l++;
	}
	
	
	int u=0;
	gotoxy(10,30);
    while (text.kata4[u] != '\0' )
	{
		cout << text.kata4[u];
		Sleep(55);
		u++;
	}


	
	char c = '0';
	int pilihan=0;
	gotoxy(10,35);
    cout<<"PULAU";
    gotoxy(10,36);
    cout<<"KOTA (MAP BELUM TERSEDIA)";
    gotoxy(10,37);
    cout<<"EXIT";
    while (c!=char(13)){
    	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);
    	gotoxy(7,35+pilihan);
    	cout<<"=>";
    	gotoxy(0,0);
        c=getch();
        gotoxy(7,35+pilihan);
        cout<<"  ";
        if (c=='s')
        {
            if (pilihan<2)
            {
                pilihan+=1;
            }
        }
        if (c=='w')
        {
            if (pilihan>0)
            {
                pilihan-=1;
            }
        }
	}if (pilihan==0)
    {
        map_pulau();
    }
    if (pilihan==1)
    {
        system("cls");
		loaddata("mapkota.txt");
		
		gotoxy(10,25);
		cout<<"> Tekan Tombol ESC untuk kembali";
            while (c!=char(27))
            {
                c=getch();
            }
            system("cls");
            textstart();
            
    }
    if (pilihan==2)
    {
        exit();
    }
    
}


void startGame(){
	system("cls");	
	textstart();
}


void menu()
{
	int kembali;
    //JUDUL dan intruksi
	loaddata("juduldanintruksi.txt"); 
  
    	gotoxy(45,41);
    	cout<<"START";
    	gotoxy(70,41);
    	cout<<"INFO";
    	gotoxy(95,41);
    	cout<<"EXIT";
    	cout<<endl;
    	gotoxy(9,46);
    	cout <<"Pilih Menu : ";
    	gotoxy(10,47);
    	cout<<"> ";
		cin>>pilihan;
		system("cls");
		
		if(pilihan == "1"){
			startGame();
		}if(pilihan == "START"){
			startGame();
		}if(pilihan == "Start"){
			startGame();
		}if(pilihan == "start"){
			startGame();
		}if(pilihan == "2"){
			system("cls");
			loaddata("info.txt");
			gotoxy(70,30);
			cout << "	1. BACK";
			gotoxy(70,31);
			cout << "2. EXIT GAME";
			gotoxy(70,32);
			cout << "> ";
			cin >> kembali;
			switch(kembali){
				case 1:
					system("cls");
					menu();
				break;
				case 2:
					exit();
				break;
				default : 
					gotoxy(50,34);
					cout << "Pilihan Anda Tidak Tersedia";
			}
				
		}if(pilihan == "INFO"){
			system("cls");
			loaddata("info.txt");
			gotoxy(70,30);
			cout << "	1. BACK";
			gotoxy(70,31);
			cout << "2. EXIT GAME";
			gotoxy(70,32);
			cout << "> ";
			cin >> kembali;
			switch(kembali){
				case 1:
					system("cls");
					menu();
				break;
				case 2:
					exit();
				break;
				default : 
					gotoxy(50,34);
					cout << "Pilihan Anda Tidak Tersedia";
			}
		}if(pilihan == "Info"){
			system("cls");
			loaddata("info.txt");
			gotoxy(70,30);
			cout << "	1. BACK";
			gotoxy(70,31);
			cout << "2. EXIT GAME";
			gotoxy(70,32);
			cout << "> ";
			cin >> kembali;
			switch(kembali){
				case 1:
					system("cls");
					menu();
				break;
				case 2:
					exit();
				break;
				default : 
					gotoxy(50,34);
					cout << "Pilihan Anda Tidak Tersedia";
			}
		}if(pilihan == "info"){
			system("cls");
			loaddata("info.txt");
			gotoxy(70,30);
			cout << "	1. BACK";
			gotoxy(70,31);
			cout << "2. EXIT GAME";
			gotoxy(70,32);
			cout << "> ";
			cin >> kembali;
			switch(kembali){
				case 1:
					system("cls");
					menu();
				break;
				case 2:
					exit();
				break;
				default : 
					gotoxy(50,34);
					cout << "Pilihan Anda Tidak Tersedia";
			}
		}else if (pilihan == "3"){
			exit();
		}else if (pilihan == "EXIT"){
			exit();
		}else if (pilihan == "Exit"){
			exit();
		}else if (pilihan == "exit"){
			exit();
		}else{
			cout << "Invalid input";
		}
}

	


int main(void){
	menu();

  	system("pause>0");
	//system("MODE CON COLS=25 LINES=22"); //function untuk mengubah resolusi console
	return 0;
	
}
