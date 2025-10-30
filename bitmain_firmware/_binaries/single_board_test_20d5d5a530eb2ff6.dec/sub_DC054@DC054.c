int __fastcall sub_DC054(unsigned int a1, int *a2, _DWORD *a3)
{
  int v6; // r1
  int v7; // r2
  int v8; // r7
  int v9; // r1
  int v10; // r2
  int v11; // r0
  _BYTE *v12; // r3
  int v13; // r11
  _DWORD *v14; // r5
  int v15; // r8
  int v16; // r4
  int *v17; // r6
  int v18; // r0
  int v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r1
  _DWORD *v23; // r6
  int v24; // r1
  int v25; // r2
  int v26; // r0
  int v27; // r2
  int v28; // r4
  _BYTE *v29; // r6
  int v30; // r12
  _DWORD *v31; // lr
  _DWORD *v32; // t1
  int (__fastcall *v33)(int *, _DWORD *, int *, int, _DWORD, _DWORD); // r5
  int v34; // r1
  int v35; // r4
  int result; // r0
  _BYTE *v37; // [sp+Ch] [bp-64h]
  unsigned int v38; // [sp+10h] [bp-60h]
  int v39; // [sp+1Ch] [bp-54h] BYREF
  _BYTE v40[80]; // [sp+20h] [bp-50h] BYREF

  if ( !*a3 )
    return 1;
  if ( a1 > 0xF )
  {
    sub_D0048(15, 113, 7, (int)"crypto/ex_data.c", 55);
    return 0;
  }
  if ( !sub_10C594(&unk_6E1994, sub_DBB2C) || !dword_6E1950 )
  {
    sub_D0048(15, 113, 65, (int)"crypto/ex_data.c", 60);
    return 0;
  }
  if ( !dword_6E194C[0] )
    return 0;
  v38 = a1;
  sub_10C554(dword_6E194C[0]);
  v8 = sub_10C010(dword_6E194C[a1 + 2], v6, v7);
  v11 = sub_10C010(*a3, v9, v10);
  if ( v8 >= v11 )
    v8 = v11;
  if ( v8 <= 0 )
  {
    sub_10C564(dword_6E194C[0]);
    result = 1;
    if ( !v8 )
      return result;
    goto LABEL_38;
  }
  if ( v8 > 9 )
  {
    v37 = (_BYTE *)CRYPTO_malloc(4 * v8, "crypto/ex_data.c", 277);
    if ( v37 )
    {
      v13 = v8 - 7;
      v12 = v37;
LABEL_12:
      v14 = v12 + 40;
      v15 = 1;
      v16 = 0;
      v17 = &dword_6E194C[v38];
      do
      {
        v18 = sub_10C01C(v17[2], v16);
        v19 = v15;
        *(v14 - 10) = v18;
        v20 = v17[2];
        v15 += 8;
        __pld(v14);
        v14 += 8;
        *(v14 - 17) = sub_10C01C(v20, v19);
        *(v14 - 16) = sub_10C01C(v17[2], v16 + 2);
        *(v14 - 15) = sub_10C01C(v17[2], v16 + 3);
        *(v14 - 14) = sub_10C01C(v17[2], v16 + 4);
        *(v14 - 13) = sub_10C01C(v17[2], v16 + 5);
        v21 = sub_10C01C(v17[2], v16 + 6);
        v22 = v16 + 7;
        *(v14 - 12) = v21;
        v16 += 8;
        *(v14 - 11) = sub_10C01C(v17[2], v22);
      }
      while ( v13 > v15 );
      v12 = v37;
      goto LABEL_15;
    }
    sub_10C564(dword_6E194C[0]);
LABEL_38:
    sub_D0048(15, 110, 65, (int)"crypto/ex_data.c", 287);
    return 0;
  }
  v12 = v40;
  v13 = v8 - 7;
  if ( v8 > 8 )
  {
    v37 = v40;
    goto LABEL_12;
  }
  v16 = 0;
  v37 = v40;
LABEL_15:
  v23 = &v12[4 * v16];
  do
  {
    v24 = v16++;
    *v23++ = sub_10C01C(dword_6E194C[v38 + 2], v24);
  }
  while ( v16 < v8 );
  sub_10C564(dword_6E194C[0]);
  v26 = sub_DBE20(a2, v8 - 1, v25);
  if ( sub_DBDA0(a2, v8 - 1, v26) )
  {
    v28 = 0;
    v29 = v37 - 4;
    do
    {
      v30 = sub_DBE20(a3, v28, v27);
      v39 = v30;
      v32 = (_DWORD *)*((_DWORD *)v29 + 1);
      v29 += 4;
      v31 = v32;
      if ( v32 )
      {
        v33 = (int (__fastcall *)(int *, _DWORD *, int *, int, _DWORD, _DWORD))v31[4];
        if ( v33 )
        {
          if ( !v33(a2, a3, &v39, v28, *v31, v31[1]) )
            goto LABEL_25;
          v30 = v39;
        }
      }
      v34 = v28++;
      sub_DBDA0(a2, v34, v30);
    }
    while ( v28 != v8 );
    v35 = 1;
  }
  else
  {
LABEL_25:
    v35 = 0;
  }
  if ( v37 != v40 )
    CRYPTO_free(v37, "crypto/ex_data.c", 311);
  return v35;
}
