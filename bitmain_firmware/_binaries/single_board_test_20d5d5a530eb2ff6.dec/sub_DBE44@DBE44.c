int __fastcall sub_DBE44(unsigned int a1, int a2, _DWORD *a3)
{
  _BYTE *v6; // r7
  int v7; // r1
  int v8; // r2
  int v9; // r0
  int v10; // r8
  int v11; // r2
  _BYTE *v12; // r7
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
  int v25; // r5
  int v26; // r2
  int v27; // r3
  int v28; // r0
  unsigned int v30; // [sp+Ch] [bp-38h]
  _BYTE *v31; // [sp+14h] [bp-30h]
  _BYTE v32[44]; // [sp+18h] [bp-2Ch] BYREF

  if ( a1 > 0xF )
  {
    sub_D0048(15, 113, 7, (int)"crypto/ex_data.c", 55);
  }
  else
  {
    if ( !sub_10C594(&unk_6E1994, sub_DBB2C) || !dword_6E1950 )
    {
      sub_D0048(15, 113, 65, (int)"crypto/ex_data.c", 60);
      return 0;
    }
    if ( dword_6E194C[0] )
    {
      v6 = 0;
      v30 = a1;
      sub_10C554(dword_6E194C[0]);
      *a3 = 0;
      v9 = sub_10C010(dword_6E194C[a1 + 2], v7, v8);
      v10 = v9;
      if ( v9 <= 0 )
      {
        sub_10C564(dword_6E194C[0]);
LABEL_21:
        CRYPTO_free(v6, "crypto/ex_data.c", 245);
        return 1;
      }
      if ( v9 > 9 )
      {
        v12 = (_BYTE *)CRYPTO_malloc(4 * v9, "crypto/ex_data.c", 226);
        if ( !v12 )
        {
          sub_10C564(dword_6E194C[0]);
          sub_D0048(15, 112, 65, (int)"crypto/ex_data.c", 234);
          return 0;
        }
        v11 = v10 - 7;
      }
      else
      {
        v11 = v9 - 7;
        if ( v9 <= 8 )
        {
          v14 = 0;
          v6 = v32;
LABEL_12:
          v23 = &v6[4 * v14];
          do
          {
            v24 = v14++;
            *v23++ = sub_10C01C(dword_6E194C[v30 + 2], v24);
          }
          while ( v14 < v10 );
          v25 = 0;
          sub_10C564(dword_6E194C[0]);
          do
          {
            v27 = *(_DWORD *)&v6[4 * v25];
            if ( v27 )
            {
              if ( *(_DWORD *)(v27 + 8) )
              {
                v28 = sub_DBE20(a3, v25, v26);
                (*(void (__fastcall **)(int, int, _DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)&v6[4 * v25] + 8))(
                  a2,
                  v28,
                  a3,
                  v25,
                  **(_DWORD **)&v6[4 * v25],
                  *(_DWORD *)(*(_DWORD *)&v6[4 * v25] + 4));
              }
            }
            ++v25;
          }
          while ( v25 < v10 );
          if ( v6 == v32 )
            return 1;
          goto LABEL_21;
        }
        v12 = v32;
      }
      v13 = v12 + 40;
      v31 = v12;
      v14 = 0;
      v15 = 1;
      v16 = &dword_6E194C[v30];
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
      v6 = v31;
      goto LABEL_12;
    }
  }
  return 0;
}
