/*#include<iostream>

using namespace std ; 

void reverse(char b[] , int n ){
    int s = 0 ; 
    int e = n - 1 ; 
    while(s<e){
        swap(b[s++],b[e--]) ; 
    }
}

int length(char a[]){
    int count = 0 ; 
    for(int i = 0 ; a[i] != '\0' ; i ++){
        count ++ ;
    }
    return count ; 
}

int main(){
    char ch[20] ; 
    cout << "Enter your name : " ;
    cin >> ch ; 

    //ch[2] = '\0' ; 

    cout << "Your name is " << ch << endl ; 

    int len = length(ch) ; 
    cout << "Length of your name is " << len << endl ; 

    reverse(ch,len) ; 
    cout << "In reverese your name " << ch << endl  ;

}

//check your string is  checkPalindrome
#include<iostream>

using namespace std ;

/*void reverse(char a[]){
    int s =0 ; 
    int e =a.size() - 1 ; 
    while(s<e){
        swap(a[s++],a[e--]) ; 
    }
}

int main(){
    char pel[100] ; 
    cout << "Enter a String to check is checkPalindrome or not : " ; 
    cin >> pel ; 

    int rev = reverse(pel) ;

    if(rev == ch){
        cout << "It is checkPalindrome .";
    }
    else{
        cout << "It is not checkPalindrome ."
    }
}

//for both upper and lower case and also for special characters

bool checkPalindrome(string s)
{
    int st = 0;
    int e = s.size() - 1;

    while (st < e)
    {
        while (st < e && !isalnum(s[st]))
            st++;

        while (st < e && !isalnum(s[e]))
            e--;

        if (tolower(s[st]) != tolower(s[e]))
            return false;

        st++;
        e--;
    }

    return true;
}

bool checkPalindrome(char a[] , int n){
    int s = 0 ; 
    int e = n - 1 ;
    while(s<=e){
        if(a[s] != a[e]){
            return 0 ; 
        }
        else{
            s++ ; 
            e-- ; 
        }
    }
    return 1 ; 
}
int length(char a[]){
    int count = 0 ; 
    for(int i = 0 ; a[i] != '\0' ; i ++){
        count ++ ;
    }
    return count ; 
}

int main(){
    char pel[100] ; 
    cout << "Enter a String to check is checkPalindrome or not : " ; 
    cin >> pel ;

    int len = length(pel) ; 

    cout <<"Your string is " << checkPalindrome(pel , len) << " checkPalindrome. " << endl ; 
    cout << checkPalindrome(pel) ; 
}


//VALID PELINDROME
#include<iostream>

using namespace std ;

bool valid(char ch){
    if((ch >= 'a' && ch <= 'z')||(ch >= 'A' && ch <= 'Z')||(ch >= '0' && ch <= '9')){
        return 1; 
    }
    else{
        return 0 ; 
    }
}
char lower(char ch){
    if((ch >= 'a' && ch <= 'z')||(ch >= '0' && ch <= '9')){
        return ch ; 
    }
    else{
        char temp = (ch - 'A') + 'a' ; 
        return temp ;  
    }
}
bool checkPalindrome(string a){
    int s = 0 ; 
    int e = a.length() - 1  ;
    while(s<=e){
        if(a[s] != a[e]){
            return 0 ; 
        }
        else{
            s++ ; 
            e-- ; 
        }
    }
    return 1 ; 
}

int main(){

    string sta ; 
    cout << "Enter your string : " ; 
    //cin >> sta ;
    getline(cin , sta) ;  
     
    string temp = "" ; 
    for(int j = 0 ; j < sta.length() ; j ++){
        if(valid(sta[j])){
            temp.push_back(sta[j]) ; 
        }
    }
    for(int j = 0 ; j < temp.length() ; j ++){
        temp[j] =  lower(temp[j]) ; 
    }

    int A  = checkPalindrome(temp) ; 

    if(checkPalindrome(temp)){
    cout << "Palindrome";
        }
    else{
    cout << "Not Palindrome";
        }
    

    return 0 ; 
}
    

//Reverse each Words
#include<iostream>
#include<algorithm>

using namespace std  ;

string reverseWord(string a){
    int start = 0 ; 
    for(int i = 0 ; i < a.length() ; i ++){
        if(a[i] == ' '){
            reverse(a.begin() + start , a.begin() + i) ; 
            start = i + 1 ; 
        }
    }
    reverse(a.begin() + start , a.end()) ; 
    return a ; 
}

int main(){
    string sta ;  
    getline(cin , sta) ; 

    string a = reverseWord(sta); 

    cout << a ; 

}

//Reverse Words in a String.
#include<iostream>
#include<algorithm>

using namespace std ; 

string reverse(string a){
    reverse(a.begin() , a.end()) ; 
    return a ; 
}
string slr(string ak){
    int start = 0 ; 
    for(int i = 0   ; i < ak.length() ; i ++){
        if(ak[i] == ' '){
            reverse(ak.begin() + start , ak.begin() + i ) ; 
            start = i + 1 ;
        }
    }
    reverse(ak.begin() + start , ak.end()) ; 
    return ak; 
}

int main(){
    string sta ; 
    getline(cin , sta) ;

    reverse(sta) ; 
    
    cout << slr(sta) << endl ; 
}

//MAXIMUM OCCURING CHARACTER
#include <iostream>
using namespace std;

char getmaximumoccChar(string s) {

    int temp[26] = {0};

    for (int i = 0; i < s.length(); i++) {

        char ch = s[i];
        int index;

        if (ch >= 'a' && ch <= 'z') {
            index = ch - 'a';
            temp[index]++;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            index = ch - 'A';
            temp[index]++;
        }
    }

    int maxi = -1;
    int ans = 0;

    for (int i = 0; i < 26; i++) {
        if (temp[i] > maxi) {
            maxi = temp[i];
            ans = i;
        }
    }

    return 'a' + ans;
}

int main() {

    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Maximum occurring character is: "
         << getmaximumoccChar(str);

    return 0;
}


//REPLACE SPACES
#include<iostream>
//#include<algorithm>
using namespace std ; 

string spaces(string a){
    string temp = {} ; 
    for(int i = 0 ; i < a.length() ; i ++){
        if(a[i] == ' '){
            temp.push_back('@') ;
            temp.push_back('4') ; 
            temp.push_back('0') ;
        }
        else{
            temp.push_back(a[i]) ; 
        }
    }
    return temp ; 
}

int main(){
    string str ; 
    cout << "Enter a String : " ; 
    getline(cin , str) ; 

    cout << "After replacing of space : " << spaces(str) << endl ; 

    return 0 ; 
}

//REMOVE ALL OCCURENCE OF SUBSTRING
#include<iostream>

using namespace std ; 

string removeSubPart(string s , string spart){
    while(s.length() != 0 && s.find(spart) < s.length()){
        s.erase(s.find(spart) , spart.length()) ;
    }
    return s ; 
}

int main(){
    string str ;  
    cout<<"Enter string : " ;
    getline(cin , str) ; 

    string spart ;
    cout<<"Enter subpart of given string to remove : " ;
    getline(cin , spart) ; 
    
    cout <<"Remaining part is : " << removeSubPart(str , spart) << endl ; 

    return 0 ; 
}
    
//PERMUTATION OF STRING 

#include <iostream>
using namespace std;

// Function to compare both frequency arrays
bool checkEqual(int count1[26], int count2[26]) {

    // Compare all 26 characters
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i])
            return false;
    }

    return true;
}

bool checkInclusion(string s1, string s2) {

    // PHASE 1
    // s1 ka frequency array banao
    int count1[26] = {0};

    for(int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // PHASE 2
    // s2 ki first window ka
    // frequency array banao
    int count2[26] = {0};

    int windowSize = s1.length();
    int i = 0;

    while(i < windowSize && i < s2.length()) {

        int index = s2[i] - 'a';
        count2[index]++;

        i++;
    }
    
    // PHASE 3
    // First window compare karo
    if(checkEqual(count1, count2))
        return true;

    // PHASE 4,5,6
    // Sliding Window
    while(i < s2.length()) {

       
        // PHASE 4
        // New character add karo
        int newIndex = s2[i] - 'a';
        count2[newIndex]++;

      
        // PHASE 5
        // Old character remove karo
        int oldIndex = s2[i - windowSize] - 'a';
        count2[oldIndex]--;

        // PHASE 6
        // Compare karo
        if(checkEqual(count1, count2))
            return true;

        // Window ko aage badhao
        i++;
    }

    return false;
}

int main() {

    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    if(checkInclusion(s1, s2))
        cout << "True";
    else
        cout << "False";

    return 0;
} 
 
#include <iostream>
using namespace std;

// Function to compare both frequency arrays
bool checkEqual(int count1[26], int count2[26]) {

    // Compare all 26 characters
    for(int i = 0; i < 26; i++) {
        if(count1[i] != count2[i])
            return false;
    }

    return true;
}

// CHANGED: bool ki jagah int return karega
int checkInclusion(string s1, string s2) {

    // PHASE 1
    // s1 ka frequency array banao
    int count1[26] = {0};

    for(int i = 0; i < s1.length(); i++) {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    // PHASE 2
    // s2 ki first window ka frequency array banao
    int count2[26] = {0};

    int windowSize = s1.length();
    int i = 0;

    while(i < windowSize && i < s2.length()) {

        int index = s2[i] - 'a';
        count2[index]++;

        i++;
    }

    // CHANGED: permutation count store karega
    int count = 0;

    // PHASE 3
    // First window compare karo
    if(checkEqual(count1, count2))
        count++;          // CHANGED

    // PHASE 4,5,6
    // Sliding Window
    while(i < s2.length()) {

        // PHASE 4
        // New character add karo
        int newIndex = s2[i] - 'a';
        count2[newIndex]++;

        // PHASE 5
        // Old character remove karo
        int oldIndex = s2[i - windowSize] - 'a';
        count2[oldIndex]--;

        // PHASE 6
        // Compare karo
        if(checkEqual(count1, count2))
            count++;      // CHANGED

        // Window ko aage badhao
        i++;
    }

    // CHANGED
    return count;
}

int main() {

    string s1, s2;

    cout << "Enter s1: ";
    cin >> s1;

    cout << "Enter s2: ";
    cin >> s2;

    // CHANGED
    int ans = checkInclusion(s1, s2);

    cout << "Total permutations found = " << ans << endl;

    return 0;
}


//REMOVING DUPLICATES
#include<iostream>
using namespace std;

string duplicate(string s) {
    int i = 0;

    while(i + 1 < s.length()) {

        if(s[i] == s[i + 1]) {
            s.erase(i, 2);

            if(i > 0)
                i--;
        }
        else {
            i++;
        }
    }

    return s;
}

int main() {

    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "After removing duplicates: " << duplicate(str);

    return 0;
}*/

//STRING COMPRESSION 
#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars) {

    int i = 0;
    int ansIndex = 0;
    int n = chars.size();

    while (i < n) {

        int j = i + 1;

        // Same characters count karo
        while (j < n && chars[j] == chars[i]) {
            j++;
        }

        // Character store karo
        chars[ansIndex++] = chars[i];

        // Count nikalo
        int count = j - i;

        // Agar count > 1 hai to count store karo
        if (count > 1) {

            string cnt = to_string(count);

            // Count ke har digit ko store karo
            for (char ch : cnt) {
                chars[ansIndex++] = ch;
            }
        }

        // Next group
        i = j;
    }

    return ansIndex;
}

int main() {

    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    vector<char> chars(n);

    cout << "Enter characters:\n";

    for (int i = 0; i < n; i++) {
        cin >> chars[i];
    }

    int newLength = compress(chars);

    cout << "\nCompressed Array: ";

    for (int i = 0; i < newLength; i++) {
        cout << chars[i] << " ";
    }

    cout << "\nNew Length = " << newLength << endl;

    return 0;
}