int __fastcall sub_102764(int a1, int a2)
{
  FILE **v3; // r4

  v3 = (FILE **)(a1 + 4);
  sub_10270C((FILE **)(a1 + 4), (const char *)&word_356638);
  return sub_10270C(
           v3,
           "event {\n\tname = \"register\";\n\tid = %u;\n\tfields := struct { \n\t\tascii contents[%d];\n\t};\n};\n",
           0,
           a2);
}
