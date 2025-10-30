unsigned int __fastcall sub_57F2C(int a1, int a2, unsigned int a3, char *a4, unsigned int n, int a6, int c)
{
  int v7; // r4
  int v12; // r1
  __int64 v13; // r2
  int v14; // r6
  int v15; // r1
  __int64 v16; // r2
  int v17; // r1
  __int64 v18; // r2
  int v19; // r1
  int v20; // r2
  unsigned int v21; // r3
  int v22; // r12
  unsigned int v23; // r3
  unsigned int result; // r0
  int v25; // r6
  int v26; // r9
  int v27; // r6
  _DWORD v28[4]; // [sp+10h] [bp-4Ch] BYREF
  _QWORD s[7]; // [sp+20h] [bp-3Ch] BYREF

  v7 = c;
  if ( !c )
  {
    memset(s, 0, sizeof(s));
    goto LABEL_20;
  }
  v12 = *(_DWORD *)(c + 4);
  v13 = *(_QWORD *)(c + 8);
  LODWORD(s[0]) = *(_DWORD *)c;
  HIDWORD(s[0]) = v12;
  s[1] = v13;
  v14 = s[0];
  v15 = *(_DWORD *)(c + 20);
  v16 = *(_QWORD *)(c + 24);
  LODWORD(s[2]) = *(_DWORD *)(c + 16);
  HIDWORD(s[2]) = v15;
  s[3] = v16;
  v17 = *(_DWORD *)(c + 36);
  v18 = *(_QWORD *)(c + 40);
  LODWORD(s[4]) = *(_DWORD *)(c + 32);
  HIDWORD(s[4]) = v17;
  s[5] = v18;
  v19 = *(_DWORD *)(c + 52);
  LODWORD(s[6]) = *(_DWORD *)(c + 48);
  HIDWORD(s[6]) = v19;
  if ( s[2] )
    s[2] = n;
  if ( LODWORD(s[0]) <= 4 )
  {
    v7 = s[0];
LABEL_20:
    LODWORD(s[0]) = v7;
    HIDWORD(s[4]) = 1;
    v23 = 0x10000;
    if ( !v7 )
      goto LABEL_13;
    v14 = v7;
    goto LABEL_10;
  }
  v20 = 4;
  if ( n > 0x10000 )
  {
    v21 = 0x10000;
    while ( 1 )
    {
      v7 = v20 + 1;
      v21 *= 4;
      if ( (unsigned int)++v20 >= LODWORD(s[0]) )
        break;
      if ( n <= v21 )
        goto LABEL_20;
    }
    HIDWORD(s[4]) = 1;
LABEL_10:
    v22 = v14 - 4;
    if ( (unsigned int)(v14 - 4) > 3 )
    {
      v23 = -2;
      goto LABEL_13;
    }
    goto LABEL_29;
  }
  v22 = 0;
  LODWORD(s[0]) = 4;
  HIDWORD(s[4]) = 1;
LABEL_29:
  v23 = dword_1A00CC[v22];
LABEL_13:
  if ( n <= v23 )
    HIDWORD(s[0]) = 1;
  memset(&v28[1], 0, 12);
  v28[0] = 1;
  if ( a3 < sub_575CC(n, (int *)s) )
    return -11;
  result = sub_5782C(a1, a2, a3, a6, s);
  if ( result <= 0xFFFFFFEA )
  {
    v25 = a2 + result;
    v26 = a3 + a2;
    result = sub_57BFC(a1, a2 + result, v26 - (a2 + result), a4, n, v28, 0);
    if ( result <= 0xFFFFFFEA )
    {
      v27 = v25 + result;
      result = sub_57EAC(a1, v27, v26 - v27);
      if ( result <= 0xFFFFFFEA )
        return result + v27 - a2;
    }
  }
  return result;
}
