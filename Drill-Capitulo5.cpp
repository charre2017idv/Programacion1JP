#include <iostream>
#include <string>
#include <vector>
using namespace std;

int drill5()
{
	try {
		cout << "Success!\n";
		cout << "Success!\n";
		cout << "Success" << "!\n";
		cout << "success" << '\n'; 
		string res = "7"; vector<string> v(10); v[5] = res; cout << "Success!\n"; 
		vector<int> v2(10); v[5] = 7; if (v2[5] == 7) cout << "Success!\n";
		if (true) cout << "Success!\n"; else cout << "Fail!\n";
		bool c = true; if (c) cout << "Success!\n"; else cout << "Fail!\n";  
		string s = "ape"; bool cr = "fool"<s; if (cr) cout << "Success!\n"; 
		string se = "ape"; if (se == "ape") cout << "Success!\n";  
		string sa = "ape"; if (sa == "fool") cout << "Success!\n";  
		string sas = "ape"; if (sas == "fool") cout << "Success!\n";
		vector<char> vi(5); for (int i = 0; i== vi.size(); ++i); cout << "Success!\n";  
		vector<char> va(5); for (int i = 0; i == va.size(); ++i); cout << "Success!\n";

		string osas = "Success!\n"; for (int i = 0; i<6; ++i) cout << osas[i]; //
		if (true) cout << "Success!\n"; else cout << "Fail!\n"; 
		int x = 2000; int cac = x; if (cac == 2000) cout << "Success!\n";

		string ssi = "Success!\n"; for (int i = 0; i<10; ++i) cout << ssi[i];  //
		vector<char> vr(5); for (int i = 0; i <= vr.size(); ++i); cout << "Success!\n"; 

		int i = 0; int j = 9; while (i<10) ++j; if (j<i) cout << "Success!\n";  

		int xd = 2; double d = 5 / (xd-0.8888888889); if (d == 2 * xd + 0.5) cout << "Success!\n"; 
		string ss = "Success!\n"; for (int i = 0; i <= 10; ++i) cout << ss[i];  

		int ir = 0; int jr = 9; while (ir < 10) ++jr; if (jr < ir) cout << "Success!\n";
		int xr = 4; double dr = 5 / (xr-0.8888888889); if (dr = 2 * x + 0.5) cout << "Success!\n"; 
		cout << "Success!\n";

		cout << "Success!" << endl;
		// keep_window_open();          
		return 0; 
	}
	catch (exception& e) { 
		cerr << "error: " << e.what() << '\n';           
		// keep_window_open();          
		return 1; }
	catch (...) {
		cerr << "Oops: unknown exception!\n";
		// keep_window_open();          
		return 2;
	}
}

int main()
{
	int opcion;
	cout << "Ingresa el numero (1) para iniciar el programa: ";
	cin >> opcion;

	if (opcion == 1)
	{
		cout << drill5();
	}
	cin.ignore();
	cin.get();
	return 0;
}