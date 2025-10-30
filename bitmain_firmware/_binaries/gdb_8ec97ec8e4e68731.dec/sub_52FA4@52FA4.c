unsigned __int8 *__fastcall sub_52FA4(unsigned __int8 *a1)
{
  unsigned __int8 *i; // r7
  int v3; // r4
  int v4; // r0
  bool v5; // zf
  int v6; // r2
  bool v7; // r3
  char v8; // r4
  bool v9; // r0
  _BOOL4 v10; // r0

  for ( i = a1; ; ++i )
  {
    v3 = *i;
    v4 = isalnum(v3);
    v5 = v3 == 95;
    if ( v3 != 95 )
      v5 = v3 == 36;
    v6 = v3 & 0xFD;
    v7 = !v5;
    v8 = v3 - 43;
    v9 = !v4 && v7;
    v10 = v6 != 60 && v9;
    if ( (v8 & 0xFD) == 0 )
      v10 = 0;
    if ( v10 )
      break;
  }
  return (unsigned __int8 *)(i - a1);
}
