int __fastcall sub_3050E0(int *a1, int a2, unsigned int a3)
{
  _DWORD *v7; // r4
  int v8; // r3
  unsigned int v9; // r3
  int v10; // r2
  int v11; // r2
  unsigned int i; // r3
  int v13; // r12
  int v14; // r10
  int v15; // r1
  unsigned int v16; // r6
  int v17; // r9
  int v18; // r5
  int v19; // lr
  int v20; // r8
  int v21; // r7
  int v22; // r3
  int v23; // t1
  unsigned int v25; // r2
  unsigned int v26; // r2
  int v27; // r0
  size_t v28; // r2
  char *v29; // r0
  int c; // [sp+8h] [bp-14h]
  int v32; // [sp+Ch] [bp-10h]
  int v33; // [sp+10h] [bp-Ch]
  _DWORD *v34; // [sp+14h] [bp-8h]

  if ( !a1 || !a1[8] || !a1[9] )
    return -2;
  if ( sub_305068((int)a1) || a2 == 0 )
    return -2;
  v7 = (_DWORD *)a1[7];
  v8 = v7[6];
  c = v8;
  if ( v8 == 2 )
    return -2;
  if ( v8 == 1 )
  {
    if ( v7[1] == 42 && !v7[29] )
    {
      v27 = sub_30C0D0(a1[12], a2, a3);
      v9 = v7[11];
      a1[12] = v27;
      v7[6] = 0;
      if ( a3 < v9 )
        goto LABEL_12;
      goto LABEL_20;
    }
    return -2;
  }
  if ( v7[29] )
    return -2;
  v9 = v7[11];
  v7[6] = 0;
  if ( v9 <= a3 )
  {
    if ( !c )
    {
      v34 = v7 + 1024;
      v28 = 2 * (v7[19] + 0x7FFFFFFF);
      v29 = (char *)v7[17];
      *(_WORD *)&v29[v28] = 0;
      memset(v29, 0, v28);
      v9 = v7[11];
      v7[27] = 0;
      v7[23] = 0;
      v7[1453] = 0;
      goto LABEL_21;
    }
LABEL_20:
    v34 = v7 + 1024;
LABEL_21:
    v26 = a3 - v9;
    a3 = v9;
    a2 += v26;
    goto LABEL_13;
  }
LABEL_12:
  v34 = v7 + 1024;
LABEL_13:
  v10 = a1[1];
  a1[1] = a3;
  v32 = v10;
  v11 = *a1;
  *a1 = a2;
  v33 = v11;
  sub_303F08(v7);
  for ( i = v7[29]; i > 2; i = v7[29] )
  {
    v13 = v7[27];
    v14 = v7[22];
    v15 = v13 + 1;
    v16 = v13 - 2 + i;
    v17 = v7[21];
    v18 = v7[17];
    v19 = v7[14] + v13 + 1;
    v20 = v7[16];
    v21 = v7[13];
    v22 = v7[18];
    while ( 1 )
    {
      v23 = *(unsigned __int8 *)++v19;
      v22 = (v23 ^ (v22 << v14)) & v17;
      v7[18] = v22;
      *(_WORD *)(v20 + 2 * (v21 & v13)) = *(_WORD *)(v18 + 2 * v22);
      *(_WORD *)(v18 + 2 * v22) = v13;
      v13 = v15;
      if ( v15 == v16 )
        break;
      ++v15;
    }
    v7[27] = v15;
    v7[29] = 2;
    sub_303F08(v7);
  }
  v25 = i + v7[27];
  v7[27] = v25;
  v7[23] = v25;
  v34[429] = i;
  v7[29] = 0;
  v7[26] = 0;
  v7[30] = 2;
  v7[24] = 2;
  *a1 = v33;
  a1[1] = v32;
  v7[6] = c;
  return 0;
}
