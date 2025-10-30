unsigned int __fastcall sub_3ED00(int a1, int a2, int a3)
{
  unsigned int v6; // r1
  unsigned int result; // r0
  _DWORD *v8; // r3
  _DWORD *v9; // r2
  unsigned int v10; // t1
  _DWORD s[259]; // [sp+4h] [bp-40Ch] BYREF

  memset(s, 0, sizeof(s));
  sub_3EC2C((int)s, a2);
  v6 = s[2];
  result = s[2];
  if ( a3 > 0 )
  {
    v8 = &s[2];
    v9 = &s[a3 + 1];
    if ( a1 )
      goto LABEL_7;
    while ( 1 )
    {
      if ( result >= v6 )
        result = v6;
      if ( v8 == v9 )
        break;
      while ( 1 )
      {
        v10 = v8[1];
        ++v8;
        v6 = v10;
        if ( !a1 )
          break;
LABEL_7:
        if ( result < v6 )
          result = v6;
        if ( v8 == v9 )
          return result;
      }
    }
  }
  return result;
}
