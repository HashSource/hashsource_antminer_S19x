int __fastcall sub_D23CC(int a1, unsigned __int8 *a2, _DWORD *a3, int a4)
{
  int v8; // r0
  bool v9; // zf
  int v10; // r10
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r0
  int v14; // kr00_4
  int v15; // r0
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v21; // r9
  int v22; // r0

  v8 = sub_D8934(a1);
  v9 = a3 == 0;
  if ( !a3 )
    v9 = a2 == 0;
  v10 = v9;
  if ( !v9 )
  {
    v11 = (_DWORD *)v8;
    if ( a2 )
    {
      v12 = sub_D8AD4(a1);
      if ( a4 )
      {
        v21 = sub_BC33C(a2, &a2[v12 / 2], v12 / 2);
        if ( !v21 )
        {
          sub_D0048(6, 209, 183, (int)"crypto/evp/e_aes.c", 3378);
          return v21;
        }
        v11[128] = v10;
        v22 = sub_D8AD4(a1);
        sub_123194(a2, 4 * v22, v11);
        v11[126] = AES_encrypt;
      }
      else
      {
        v11[128] = 0;
        v13 = sub_D8AD4(a1);
        sub_123A94(a2, 4 * v13, v11);
        v11[126] = AES_decrypt;
      }
      v14 = sub_D8AD4(a1);
      v15 = sub_D8AD4(a1);
      sub_123194(&a2[v14 / 2], 4 * v15, v11 + 62);
      v11[127] = AES_encrypt;
      v11[124] = v11;
    }
    if ( a3 )
    {
      v11[125] = v11 + 62;
      v16 = (_DWORD *)sub_D8AC0(a1);
      v17 = a3[1];
      v18 = a3[2];
      v19 = a3[3];
      *v16 = *a3;
      v16[1] = v17;
      v16[2] = v18;
      v16[3] = v19;
      return 1;
    }
  }
  return 1;
}
