/*
First Greater Height
There are N students standing outside the class. The heights of these students is represented by a vector V.
Every student j knows the height of each student i standing in front of him (j>i). Each student tries to find the smallest height Vi greater than him Vj standing in front of him.
If such a student is the tallest among all students then print -1 for that student.

Input Format:
First-line contains the number of test case T.  Each test case contains N, the number of students and followed by the height of N students separated by spaces.

Output Format:
For each testcase, in a new line, print the next greater heights for each student.

User Task:
This is a function problem. You only need to complete the function greater_height() that takes a vector of heights as a parameter and returns the output vector.

Constraints:
1 <= T <= 100
1 <= N <= 105
1 <= Vi <= 105

Example
Input:
1
5
3 2 5 4 1
Output:
-1 3 -1 5 2

Explanation:
Testcase1: For 3 (j=0) we won't have any element greater than 3 to the left (j>i). For 2 we have 3. For 5 we don't have any greater element. For 4 we have 5, and for 1 we have 2, 3, 4, 5 but we have to choose the smallest
greater element, hence 2.
*/

class greater {
    int a;
    int b;
  public:
    bool operator < (greater& G) const {
        return this->b > G.b;
    }
};

vector<int> greater_height(vector<int>v)
{
    
    set <pair<int, int >> s1; // it will contain element along wiht index
    vector <int> vRes = v;
   // vRes.fill(vRes.begin(), vRes.end(), -1);
    int i = 0;
    for (auto d: v) {
        pair <int, int >x = make_pair(d, i);
        i++;
        s1.insert(x);
    }
    
    for (set<pair<int, int>>::iterator it = s1.begin(); it != s1.end();++it) {

       // cout << it->first << " " << it->second << endl;
        int p1_sec = it->second;
        it++;
        if (it == s1.end())
            break;
        int p2_sec = it->second;
        int p2_first = it->first;
        //cout << p1_sec << " " << p2_first << endl;
        if (p1_sec > p2_sec)
            vRes[p1_sec] = p2_first;
        else
            vRes[p1_sec] = -1;
            
       // cout << it->first << " " << it->second << endl;
        --it;

    }
    //set<pair<int, int>>::iterator it = s1.rbegin();
    const auto& it = s1.rbegin();
    //vRes[it->second] = -1;
    vRes[it->second] = -1;
    
    
   // cout << endl;
    //Your code here
    
    return vRes;
}
