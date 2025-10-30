int __fastcall sub_33B64(int a1, int a2, int a3, int a4)
{
  bool v4; // zf
  int v5; // r0
  int v6; // r2
  unsigned __int8 s1[8]; // [sp+4h] [bp-10h] BYREF

  v4 = a1 == 3;
  if ( a1 == 3 )
    v4 = a2 == 16;
  v5 = v4;
  if ( a3 == 4 )
    v6 = v5;
  else
    v6 = 0;
  *(_DWORD *)s1 = a4;
  if ( !v6 )
    return 0;
  if ( !memcmp(s1, "RATE", 4u) )
    return 1;
  if ( !memcmp(s1, "DENY", 4u) )
    return 2;
  if ( !memcmp(s1, "RSTR", 4u) )
    return 3;
  if ( s1[0] == 88 )
    return 4;
  return 0;
}
