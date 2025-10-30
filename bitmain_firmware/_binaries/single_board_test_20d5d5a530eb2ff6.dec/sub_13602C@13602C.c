bool __fastcall sub_13602C(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // r5
  int v7; // r2
  int v9; // r5
  char *v12; // r0
  char *v13; // r6
  int v14; // r11
  char *v15; // r10
  int v16; // r4
  bool v17; // nf
  int v18; // r3
  int v19; // r4
  int v20; // r3
  char v21; // r3
  _BOOL4 v22; // r4
  char v24[5]; // [sp+Fh] [bp-5h] BYREF

  v5 = a3 + 14;
  v7 = a3 + 7;
  if ( v7 >= 0 )
    v5 = v7;
  v9 = v5 >> 3;
  v12 = (char *)CRYPTO_malloc((void *)v9);
  v13 = v12;
  if ( !v12 )
  {
    sub_D0048(3, 127, 65, (int)"crypto/bn/bn_rand.c", 41);
    v22 = 0;
    goto LABEL_26;
  }
  if ( !a1 )
  {
    if ( sub_F497C((int)v12, v9) > 0 )
      goto LABEL_19;
LABEL_25:
    v22 = 0;
    goto LABEL_26;
  }
  if ( (int)sub_F49BC((int)v12, v9) <= 0 )
    goto LABEL_25;
  if ( a1 == 1 && v9 > 0 )
  {
    v14 = 0;
    v15 = v13 - 1;
    while ( sub_F497C((int)v24, 1) > 0 )
    {
      if ( v24[0] < 0 )
      {
        if ( v14 )
          v15[1] = *v15;
      }
      else if ( (unsigned __int8)v24[0] > 0x29u )
      {
        if ( (unsigned __int8)v24[0] <= 0x53u )
          v15[1] = -1;
      }
      else
      {
        v15[1] = 0;
      }
      ++v14;
      ++v15;
      if ( v9 == v14 )
        goto LABEL_19;
    }
    goto LABEL_25;
  }
LABEL_19:
  v16 = a3 - 1;
  v18 = -v16;
  v17 = -v16 < 0;
  v19 = v16 & 7;
  v20 = v18 & 7;
  if ( !v17 )
    v19 = -v20;
  if ( a4 < 0 )
  {
    v21 = *v13;
  }
  else if ( a4 )
  {
    if ( v19 )
    {
      v21 = *v13 | (3 << (v19 - 1));
    }
    else
    {
      v21 = 1;
      v13[1] |= 0x80u;
    }
  }
  else
  {
    v21 = (1 << v19) | *v13;
  }
  *v13 = v21 & ~(-1 << (v19 + 1));
  if ( a5 )
    v13[v9 - 1] |= 1u;
  v22 = sub_B8AEC(v13, v9, a2) != 0;
LABEL_26:
  sub_E0758(v13, v9, (size_t)"crypto/bn/bn_rand.c");
  return v22;
}
