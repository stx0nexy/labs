#include <iostream> 
#include <fstream> 
using namespace std;
struct Student
{
    char name[20];
    int ses[5];
};
double sredniy(Student*, int n, double* sr);   
double individum(Student*, int n, double* sr, double k);

int main()
{
    double k;
    int i, j;
    int n = 5;
    double sr[10];
    fstream fp;
    Student *st= new Student[n];
    fp.open("C:\\cpp\\TextFile.txt");
    if (!fp) {
        cout << "Mistake :( " << endl;
        return 0;
    }
    else {
        cout << endl << " Student  \t       Grades" << endl << endl;
        for (i = 0; i < n; i++) {
            fp >> st[i].name;
            cout << st[i].name;

            for (j = 0; j < 5; j++)
            {
                fp >> st[i].ses[j];
                cout << "    " << st[i].ses[j];
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "Enter the grade point average\n";
    cin >> k;
    sredniy(st, n, sr);
    individum(st, n, sr, k); 
    fp.close();
    delete [] st;
    system("pause");
    return 0;
}
double sredniy(Student* gr, int n, double* sr)
{
    double s; 
    double* avg = new double[n]; 

    
    for (int i = 0; i < n; i++)
    {
        s = 0.;
        for (int j = 0; j < 5; j++) {
            s += gr[i].ses[j];
            avg[i] = s / 5;
            sr[i] = avg[i];
        }
    }

    delete[] avg;
    return 0;
}
double individum(Student* gr, int n, double* sr, double k)
{
    int  z = 0;
    cout << endl << "Students with a grade point average of at least " << k << '\n' << endl;
    cout << endl << " Student        Grades                    Grade point average" << endl << endl;
    for (int i = 0; i < n; i++)
    {
        if (sr[i] >= k) { 
            cout << "\n" << gr[i].name<<" ";
            for (int j = 0; j < 5; j++)
                cout<<"    " << gr[i].ses[j] << " ";
            z++;
            cout << "    " << sr[i] << endl;
        }
    }
    if (z == 0) 
    {
        cout << endl << "There are no students with a higher score in this subject "<< k << endl; 
    }

    return 0;
}
