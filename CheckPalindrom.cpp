--------this is only the function ----------


bool isPalindrome(string& str) {
   if(str.length()==0||str.length()==1)
    {
        return true;
    }
char a = str.front();
char b= str.back();
if(a== b)
{ 
    string sub= str.substr(1, str.length()-2);
    return isPalindrome(sub);
}
return false;
}
