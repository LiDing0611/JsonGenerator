#include <iostream>
#include <cmath>
#include "json-generator.h"
using namespace std;

int main()
{
auto writer = new JsonWriter;
writer->StartArray ();

  writer->StartShortObject ();
    writer->KeyValue ("name", "tony");
    writer->KeyValue ("age", 3);
  writer->EndObject ();

  writer->StartObject ();
    writer->KeyValue ("skills", "c++");
    writer->KeyValue ("skills","python");
    writer->KeyValue ("skills","php");
    writer->KeyValue ("skills","java");
    writer->KeyValue ("url", "https://github.com/LiDing0611/");

    writer->Key ("path");
    writer->StartArray ();
      writer->Value ("web");
      writer->Value ("algorithm");
      writer->Value ("linux");
    writer->EndArray ();

    writer->Key ("short-array");
    writer->StartShortArray ();
      writer->Value (1);
      writer->Value ((uint64_t)0xabcdef123456);
      writer->Value (M_PI);
    writer->EndContainer ();

  writer->EndObject (),
  writer->Value (false);
writer->EndArray ();
}
