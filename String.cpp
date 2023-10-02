#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

// int main()
// {
//    string str;
//    str = "ahfuahefneufb";
  
//    //converting into upper case

//    for(int i=0; i<str.size(); i++)
//    {   
//       if(str[i] >= 'a' && str[i] <='z')
//       {
//         str[i]-= 32;

//       }
//       cout<<str[i]<<" ";
//    }
//    cout<<endl; 

//    //converting into lower case

//    for(int i=0; i<str.size(); i++)
//    {
//       if(str[i] >='A' && str[i] <='Z')
//       {
//         str[i] += 32;
//       }
//       cout<<str[i]<<" ";
//    }
  
     
// }


//converting to upper case using function ##

// int main ()
// {
//     string str;
//     cin>>str;

//     transform(str.begin(), str.end(), str.begin(),::toupper);

//     cout<<str<<endl;

//     transform(str.begin(),str.end(), str.begin(),::tolower);

//     cout<<str<<endl;
// }

// make a maximum number using numeric string ##

// int main ()
// {
//     string str;
//     cin>>str;

//     sort(str.begin(),str.end(), greater<int>());

//     cout<<str<<endl;

//       //smallest number ##

//     sort(str.begin(), str.end(), less<int>());

//     cout<<str<<endl;

// }

//output the most repeating character ##
//output maximum frequent character ##

int main ()
{
    string s;
    cin>>s;

    int freq[26];

    for(int i=0; i<26; i++)
    {
        freq[i] = 0;
    }

    for(int i=0; i<s.size(); i++)
    {
        freq[s[i] - 'a']++;
    }

    char ans = 'a';
    int maxFreq = 0;

    for(int i=0; i<26; i++)
    {
        if(freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            ans = i+'a';
        }
    }
    cout<< ans <<" "<< maxFreq<<endl;
}
