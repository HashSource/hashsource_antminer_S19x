int __fastcall sub_32601C(const char **a1, _BYTE **a2, char *s, char a4)
{
  size_t v8; // r7
  int v9; // r0
  _BYTE *v10; // r3
  bool v11; // zf
  int result; // r0

  v8 = strlen(s);
  v9 = strncmp(*a1, s, v8);
  v11 = v9 == 0;
  if ( v9 )
  {
    result = 0;
  }
  else
  {
    v10 = *a2;
    result = 1;
  }
  if ( v11 )
  {
    *v10 = a4;
    *a1 += v8;
    *a2 += result;
  }
  return result;
}
