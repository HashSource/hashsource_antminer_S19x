int __fastcall sub_8F72C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v9; // r10
  char **v10; // r4
  int v11; // r3
  int v12; // r1
  int (__fastcall *v13)(_DWORD *, int, int, int, int); // r6
  int v14; // r4
  int v16; // r0
  _BYTE *v17; // r10
  _DWORD *v18; // r7
  int v19; // r3
  int v20; // r1
  int (__fastcall *v21)(_DWORD *, int, int, int, int); // r4
  int v22; // r0
  _BYTE v23[4]; // [sp+10h] [bp-Ch] BYREF
  int v24; // [sp+14h] [bp-8h] BYREF

  v24 = 0;
  if ( !sub_A8398(a2, 2) || (a3 & 0x180) != 0 && !sub_A7D88(a2, 2) )
  {
    sub_95494(a1, 80, 447, 68, "ssl/statem/extensions.c", 819);
    return 0;
  }
  if ( (a3 & 0x80) != 0 )
  {
    v16 = sub_9CFC8(a1, v23, &v24, 0);
    if ( v16 )
    {
      sub_95494(a1, 80, 447, v16, "ssl/statem/extensions.c", 827);
      return 0;
    }
    sub_9234C(a1[257] + 240);
  }
  if ( !sub_92434(a1, a3, a2, a4, a5, v24) )
    return 0;
  if ( (a3 & 0x6080) == 0 )
  {
    v9 = a4;
    v10 = (char **)&unk_216334;
    while ( 1 )
    {
      v11 = v24;
      v12 = (int)*(v10 - 32);
      __pld(v10);
      if ( sub_8F6EC(a1, v12, a3, v11) )
      {
        v13 = (int (__fastcall *)(_DWORD *, int, int, int, int))*(v10 - 28);
        if ( !a1[7] )
          v13 = (int (__fastcall *)(_DWORD *, int, int, int, int))*(v10 - 27);
        if ( v13 && !v13(a1, a2, a3, v9, a5) )
          return 0;
      }
      v10 += 8;
      if ( v10 == &off_216674 )
      {
        v14 = sub_A7EDC(a2);
        if ( !v14 )
          goto LABEL_30;
        return 1;
      }
    }
  }
  v17 = a1 + 325;
  v18 = &unk_216334;
  do
  {
    v19 = v24;
    v20 = *(v18 - 32);
    __pld(v18);
    if ( sub_8F6EC(a1, v20, a3, v19) )
    {
      v21 = (int (__fastcall *)(_DWORD *, int, int, int, int))*(v18 - 28);
      if ( !a1[7] )
        v21 = (int (__fastcall *)(_DWORD *, int, int, int, int))*(v18 - 27);
      if ( v21 )
      {
        v22 = v21(a1, a2, a3, a4, a5);
        if ( !v22 )
          return 0;
        if ( v22 == 1 )
          *v17 |= 2u;
      }
    }
    ++v17;
    v18 += 8;
  }
  while ( v17 != (char *)a1 + 1326 );
  v14 = sub_A7EDC(a2);
  if ( v14 )
    return 1;
LABEL_30:
  sub_95494(a1, 80, 447, 68, "ssl/statem/extensions.c", 871);
  return v14;
}
