int __fastcall sub_202308(int a1, int a2, int a3, int a4)
{
  int result; // r0
  const char *v6; // r4
  int v7; // r0

  result = sub_273FA0(a4, "version");
  if ( result )
  {
    v6 = *(const char **)(result + 4);
    result = strcmp(v6, "1.0");
    if ( result )
    {
      v7 = sub_273CF8(a1, "Library list has unsupported version \"%s\"", v6);
      return sub_202358(v7);
    }
  }
  return result;
}
