int __fastcall sub_DC2BC(unsigned int a1, int a2, _DWORD *a3)
{
  int *v6; // r11
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r8
  int v11; // r2
  _BYTE *v12; // r10
  _DWORD *v13; // r5
  int v14; // r4
  int v15; // r7
  int *v16; // r6
  int v17; // r11
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r1
  _DWORD *v23; // r11
  int v24; // r1
  int v25; // r4
  _BYTE *v26; // r11
  int v27; // r2
  int v28; // r5
  int v29; // t1
  int v30; // r0
  int result; // r0
  int v32; // r5
  int v33; // r6
  int v34; // r2
  int v35; // r0
  unsigned int v36; // [sp+Ch] [bp-38h]
  _DWORD *v37; // [sp+14h] [bp-30h]
  _BYTE v38[44]; // [sp+18h] [bp-2Ch] BYREF

  if ( a1 > 0xF )
  {
    sub_D0048(15, 113, 7, (int)"crypto/ex_data.c", 55);
    goto LABEL_21;
  }
  if ( !sub_10C594(&unk_6E1994, sub_DBB2C) || !dword_6E1950 )
  {
    sub_D0048(15, 113, 65, (int)"crypto/ex_data.c", 60);
    goto LABEL_21;
  }
  if ( !dword_6E194C[0] )
    goto LABEL_21;
  v6 = &dword_6E194C[a1];
  v36 = a1;
  sub_10C554(dword_6E194C[0]);
  v9 = sub_10C010(v6[2], v7, v8);
  v10 = v9;
  if ( v9 <= 0 )
  {
    v12 = 0;
    sub_10C564(dword_6E194C[0]);
LABEL_20:
    CRYPTO_free(v12, "crypto/ex_data.c", 359);
    goto LABEL_21;
  }
  if ( v9 > 9 )
  {
    v12 = (_BYTE *)CRYPTO_malloc(4 * v9, "crypto/ex_data.c", 337);
    if ( !v12 )
    {
      v32 = 0;
      sub_10C564(dword_6E194C[0]);
      do
      {
        sub_10C554(dword_6E194C[0]);
        v33 = sub_10C01C(v6[2], v32);
        sub_10C564(dword_6E194C[0]);
        if ( v33 && *(_DWORD *)(v33 + 12) )
        {
          v35 = sub_DBE20(a3, v32, v34);
          (*(void (__fastcall **)(int, int, _DWORD *, int, _DWORD, _DWORD))(v33 + 12))(
            a2,
            v35,
            a3,
            v32,
            *(_DWORD *)v33,
            *(_DWORD *)(v33 + 4));
        }
        ++v32;
      }
      while ( v10 != v32 );
      goto LABEL_20;
    }
    v11 = v10 - 7;
    goto LABEL_9;
  }
  v11 = v9 - 7;
  if ( v9 > 8 )
  {
    v12 = v38;
LABEL_9:
    v13 = v12 + 40;
    v37 = a3;
    v14 = 0;
    v15 = 1;
    v16 = &dword_6E194C[v36];
    v17 = v11;
    do
    {
      v18 = sub_10C01C(v16[2], v14);
      v19 = v15;
      *(v13 - 10) = v18;
      v20 = v16[2];
      v15 += 8;
      __pld(v13);
      v13 += 8;
      *(v13 - 17) = sub_10C01C(v20, v19);
      *(v13 - 16) = sub_10C01C(v16[2], v14 + 2);
      *(v13 - 15) = sub_10C01C(v16[2], v14 + 3);
      *(v13 - 14) = sub_10C01C(v16[2], v14 + 4);
      *(v13 - 13) = sub_10C01C(v16[2], v14 + 5);
      v21 = sub_10C01C(v16[2], v14 + 6);
      v22 = v14 + 7;
      *(v13 - 12) = v21;
      v14 += 8;
      *(v13 - 11) = sub_10C01C(v16[2], v22);
    }
    while ( v17 > v15 );
    a3 = v37;
    goto LABEL_12;
  }
  v14 = 0;
  v12 = v38;
LABEL_12:
  v23 = &v12[4 * v14];
  do
  {
    v24 = v14++;
    *v23++ = sub_10C01C(dword_6E194C[v36 + 2], v24);
  }
  while ( v14 < v10 );
  v25 = 0;
  v26 = v12 - 4;
  sub_10C564(dword_6E194C[0]);
  do
  {
    v29 = *((_DWORD *)v26 + 1);
    v26 += 4;
    v28 = v29;
    if ( v29 && *(_DWORD *)(v28 + 12) )
    {
      v30 = sub_DBE20(a3, v25, v27);
      (*(void (__fastcall **)(int, int, _DWORD *, int, _DWORD, _DWORD))(v28 + 12))(
        a2,
        v30,
        a3,
        v25,
        *(_DWORD *)v28,
        *(_DWORD *)(v28 + 4));
    }
    ++v25;
  }
  while ( v25 != v10 );
  if ( v12 != v38 )
    goto LABEL_20;
LABEL_21:
  result = sub_10BDB4(*a3);
  *a3 = 0;
  return result;
}
