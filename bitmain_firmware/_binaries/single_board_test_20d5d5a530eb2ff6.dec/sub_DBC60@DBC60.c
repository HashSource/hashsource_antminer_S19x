int __fastcall sub_DBC60(unsigned int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v10; // r4
  int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  int *v14; // r4
  int v15; // r1
  int v16; // r2
  int v17; // r6
  int v19; // r0
  int v20; // r2

  if ( a1 > 0xF )
  {
    sub_D0048(15, 113, 7, (int)"crypto/ex_data.c", 55);
    return -1;
  }
  if ( sub_10C594(&unk_6E1994, sub_DBB2C) && dword_6E1950 )
  {
    if ( dword_6E194C[0] )
    {
      v10 = a1;
      v11 = sub_10C554(dword_6E194C[0]);
      if ( dword_6E194C[v10 + 2] || (v19 = sub_10BFCC(v11), (dword_6E194C[v10 + 2] = v19) != 0) && sub_10BD3C(v19, 0) )
      {
        v12 = (_DWORD *)CRYPTO_malloc(20, "crypto/ex_data.c", 177);
        v13 = v12;
        if ( v12 )
        {
          *v12 = a2;
          v12[1] = a3;
          v12[2] = a4;
          v14 = &dword_6E194C[v10];
          v12[4] = a5;
          v12[3] = a6;
          if ( sub_10BD3C(v14[2], 0) )
          {
            v17 = sub_10C010(v14[2], v15, v16) - 1;
            sub_10C040(v14[2], v17, v13);
          }
          else
          {
            sub_D0048(15, 100, 65, (int)"crypto/ex_data.c", 189);
            v17 = -1;
            CRYPTO_free(v13, "crypto/ex_data.c", 190);
          }
          goto LABEL_9;
        }
        v20 = 179;
      }
      else
      {
        v20 = 172;
      }
      sub_D0048(15, 100, 65, (int)"crypto/ex_data.c", v20);
      v17 = -1;
LABEL_9:
      sub_10C564(dword_6E194C[0]);
      return v17;
    }
    return -1;
  }
  sub_D0048(15, 113, 65, (int)"crypto/ex_data.c", 60);
  return -1;
}
