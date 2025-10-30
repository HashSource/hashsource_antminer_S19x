int __fastcall sub_122A8C(const char *a1, char *s)
{
  size_t v4; // r5
  int result; // r0
  int v6; // r0
  bool v7; // zf
  int v8; // r0

  v4 = strlen(s);
  result = strncmp(a1, s, v4);
  if ( !result )
  {
    v6 = (unsigned __int8)a1[v4];
    v7 = v6 == 46;
    if ( v6 != 46 )
      v7 = v6 == 0;
    v8 = v7;
    return v8 ^ 1;
  }
  return result;
}
