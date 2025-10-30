int __fastcall sub_B25B0(int *a1, int a2, unsigned __int8 *a3)
{
  int v3; // r3
  bool v4; // zf
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // r5
  int v8; // r3
  int v9; // r6
  unsigned int *v10; // r2
  unsigned int v13; // r3
  unsigned int v14; // r3
  int v15; // r4
  int v16; // r0

  v3 = *a3;
  v4 = v3 == 1;
  if ( v3 != 1 )
    v4 = v3 == 6;
  if ( !v4 )
    return 0;
  v5 = (_DWORD *)*((_DWORD *)a3 + 4);
  if ( !v5 )
    return 0;
  v6 = v5[1] & 1;
  if ( !v6 )
    return v6;
  v7 = *a1;
  v8 = v5[2];
  v9 = v5[3];
  v10 = (unsigned int *)(*a1 + v8);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      do
        v13 = __ldrex(v10);
      while ( __strex(v13 + 1, v10) );
      return v13 + 1;
    }
    if ( a2 != -1 )
      return -1;
    do
      v14 = __ldrex(v10);
    while ( __strex(v14 - 1, v10) );
    v15 = v14 - 1;
    if ( v14 == 1 )
    {
      __dmb(0xBu);
      sub_10C574(*(_DWORD *)(v7 + v9));
      *(_DWORD *)(v7 + v9) = v15;
      return v15;
    }
  }
  else
  {
    v15 = 1;
    __dmb(0xBu);
    *(_DWORD *)(v7 + v8) = 1;
    __dmb(0xBu);
    v16 = sub_10C510(a1);
    *(_DWORD *)(v7 + v9) = v16;
    if ( !v16 )
    {
      sub_D0048(13, 233, 65, "crypto/asn1/tasn_utl.c", 79);
      return -1;
    }
  }
  return v15;
}
