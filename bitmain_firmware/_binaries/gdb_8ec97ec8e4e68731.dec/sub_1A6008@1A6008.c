int __fastcall sub_1A6008(int a1, char *s)
{
  size_t v4; // r6
  int result; // r0
  int v6; // r3
  bool v7; // zf
  int v8; // r3
  bool v9; // zf

  v4 = strlen(s);
  while ( 1 )
  {
    result = sub_338BD4(a1, s);
    if ( !result )
      return result;
    v7 = a1 == result;
    a1 = result + 1;
    if ( v7 )
      goto LABEL_10;
    v6 = *(unsigned __int8 *)(result - 1);
    v7 = v6 == 9;
    if ( v6 != 9 )
      v7 = v6 == 32;
    if ( v7 )
    {
LABEL_10:
      v8 = *(unsigned __int8 *)(result + v4);
      v9 = (v8 & 0xDF) == 0;
      if ( (v8 & 0xDF) != 0 )
        v9 = v8 == 9;
      if ( v9 )
        return 1;
    }
  }
}
