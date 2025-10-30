int __fastcall sub_40C04(unsigned int *a1, int a2, char *s, int a4)
{
  const char *v4; // r4
  char *v6; // r2
  char *v7; // r3
  unsigned int *v8; // r6
  char *v9; // r0
  char v10; // r3
  const char *v11; // r9
  int v12; // r0
  char *v13; // r12
  int v14; // r1
  int v15; // r4
  int v16; // r2
  char *v17; // r3
  int v18; // lr
  int v19; // t1
  bool v20; // zf
  int v21; // r6
  char *v22; // r2
  int v23; // r3
  int v25; // r0
  char v26; // [sp+7h] [bp-2Dh] BYREF
  unsigned int *v27; // [sp+8h] [bp-2Ch] BYREF
  int v28; // [sp+Ch] [bp-28h]

  v28 = a4;
  v27 = a1;
  if ( !dword_242F4C )
    return sub_3F65C(a1, 8, 0, 0, v28);
  v4 = s;
  if ( !s || !*s )
    return sub_3F65C(v27, 25, 0, 0, v28);
  if ( dword_242F4C > 0 )
  {
    v6 = &v26;
    v7 = (char *)&v27 + dword_242F4C - 1;
    do
      *++v6 = 0;
    while ( v6 != v7 );
  }
  v8 = 0;
  do
  {
    v9 = strchr(v4, 44);
    if ( v9 )
      v10 = 0;
    v11 = v9 + 1;
    if ( v9 )
      *v9 = v10;
    else
      v11 = 0;
    v12 = strtol(v4, 0, 10);
    v4 = v11;
    v13 = (char *)v8 + 1;
    if ( v12 < 0 )
      return sub_3F65C(v27, 26, v12, 0, v28);
    v14 = dword_242F4C;
    if ( dword_242F4C <= v12 )
      return sub_3F65C(v27, 26, v12, 0, v28);
    if ( *((_BYTE *)&v27 + v12) )
      return sub_3F65C(v27, 74, v12, 0, v28);
    (&v27)[v12] = v8;
    *((_BYTE *)&v27 + v12) = 1;
    v8 = (unsigned int *)((char *)v8 + 1);
  }
  while ( v11 && *v11 );
  v15 = dword_244048;
  v16 = 0;
  v17 = &v26;
  do
  {
    v19 = (unsigned __int8)*++v17;
    v18 = v19;
    v20 = v19 == 0;
    if ( v19 )
    {
      v18 = *(_DWORD *)(v15 + 4 * v16);
      v8 = (&v27)[v16];
    }
    ++v16;
    if ( !v20 )
      *(_DWORD *)(v18 + 4) = v8;
  }
  while ( v17 != &v26 + v14 );
  v21 = 0;
  do
  {
    v22 = &v26;
    v23 = 0;
    while ( 1 )
    {
      if ( !*++v22 )
      {
        v25 = *(_DWORD *)(v15 + 4 * v23);
        if ( *(_DWORD *)(v25 + 4) == v21 )
          break;
      }
      if ( v14 == ++v23 )
        goto LABEL_30;
    }
    *(_DWORD *)(v25 + 4) = v13++;
    *((_BYTE *)&v27 + v23) = 1;
LABEL_30:
    ++v21;
  }
  while ( v14 != v21 );
  if ( *(_DWORD *)(sub_58084() + 4) )
    sub_59E6C(0);
  return sub_3F65C(v27, 73, 0, 0, v28);
}
