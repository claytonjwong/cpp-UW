/*

3. Write a function cat() that takes two C-style strings (i.e., char*) arguments
and returns a C-style string that is the concatenation of the arguments.
Use new to find store for the result. Write a second function cat that takes
two const std::string& arguments and returns a std::string that is a concatenation
of the arguments. The std::string version does not require new.
Which is the better approach?  Explain your rationale for which is the better approach?

[Clayton]: Using std::string is less error prone, and so it is less likely to cause
a security risk (buffer overflow).  std::string is also easier to read/write and maintain/understand.

For C-style strings, the client has to know that it is responsible for and remember
to free the memory returned from cat().  The client also has to check
if the return result is a nullptr, and has to remember to use delete[] instead of delete.

Therefore, std::string is a better approach.

*/

#include <string>
#include <cstdio>

using namespace std;

char* cat(char* a,char* b){
	if (!a || !b) return nullptr;
	size_t sizeA=strlen(a),sizeB=strlen(b),sizeC=sizeA+sizeB+1;
	char* c=new char[sizeC];
	snprintf(c,sizeC,"%s%s,",a,b); // I tried using strlcat here, but couldn't find #include for it
	return c;
}

string cat(const string& a,const string& b){
	return a+b;
}
