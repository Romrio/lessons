//Учіть функції=)))
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;
//тип  имя   тип параметра  имя
vector<string> get_vlexs(string foo, string tag);
string exml(const string & tag); 

int main()
{
	assert(get_vlexs("<tag>test1</tag>", "tag").size()  == 1);
	assert(get_vlexs("<tag>foo</tag>tryu", "tag")[0] == "<tag>foo</tag>");
	return 0;
}

vector<string> get_vlexs(string foo, string tag) {
  vector<string> result;
  string etag;

  while(foo.length()) {//4
    etag = exml(tag);//</tag>
cout <<foo.substr(0, foo.find(etag) + etag.length()     ) <<std::endl;

    result.push_back(    foo.substr(0, foo.find(etag) + etag.length()     )        );
cout << "1:    " << string::npos << std::endl;
    foo = foo.substr(foo.find("</")); // "tryu".substr(0, )
cout << "2" <<std::endl;
    if (foo.find(">") != foo.length() - 1)
      foo = foo.substr(foo.find(">") + 1);//aaaa 4
    else
      foo.clear();
  }

  return result;
}

string exml(const string & tag) {
  return "</" + tag + ">";
}
