int __fastcall sub_10794C(int a1, _DWORD *a2, int a3, unsigned int a4, int a5)
{
  int v5; // r4
  _DWORD *v9; // r10
  int *v10; // r6
  int v11; // r0
  bool v12; // zf
  int v13; // r5
  int v14; // r9
  int v15; // r0
  int v16; // r7
  int v17; // r0
  signed int v18; // r7
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  _DWORD *v23; // [sp+10h] [bp-24h]
  _DWORD *v24; // [sp+14h] [bp-20h]
  _DWORD *v25; // [sp+18h] [bp-1Ch]
  _DWORD *v26; // [sp+1Ch] [bp-18h]
  _DWORD *v27; // [sp+20h] [bp-14h]
  _DWORD *v28; // [sp+24h] [bp-10h]
  char v29; // [sp+2Fh] [bp-5h] BYREF

  v5 = 0;
  v29 = 0;
  v9 = (_DWORD *)sub_C59B8(a5);
  v10 = (int *)sub_D14F4();
  v11 = sub_130B08(v10);
  v12 = v11 == 0;
  if ( v11 )
    v12 = v10 == 0;
  v13 = v11;
  v14 = v12;
  if ( v12 )
  {
    v14 = 0;
    sub_D0048(53, 113, 65, (int)"crypto/sm2/sm2_sign.c", 47);
  }
  else
  {
    v23 = (_DWORD *)sub_130CCC(v11);
    v24 = (_DWORD *)sub_130CCC(v13);
    v25 = (_DWORD *)sub_130CCC(v13);
    v26 = (_DWORD *)sub_130CCC(v13);
    v27 = (_DWORD *)sub_130CCC(v13);
    v28 = (_DWORD *)sub_130CCC(v13);
    v5 = sub_130CCC(v13);
    if ( v5 )
    {
      if ( sub_D16C0(v10, a2) )
      {
        if ( a4 > 0x1FFE )
        {
          v5 = v14;
          sub_D0048(53, 113, 111, (int)"crypto/sm2/sm2_sign.c", 73);
        }
        else
        {
          v29 = (unsigned __int16)a4 >> 5;
          if ( sub_D16D8((int)v10, (int)&v29, 1) )
          {
            v29 = 8 * a4;
            if ( sub_D16D8((int)v10, (int)&v29, 1) )
            {
              if ( a4 && !sub_D16D8((int)v10, a3, a4) )
              {
                v14 = 0;
                v5 = 0;
                sub_D0048(53, 113, 6, (int)"crypto/sm2/sm2_sign.c", 91);
              }
              else if ( sub_C6348((int)v9) )
              {
                v15 = sub_B85BC(v23);
                v16 = v15 + 14;
                v17 = v15 + 7;
                if ( v17 < 0 )
                  v17 = v16;
                v18 = v17 >> 3;
                v14 = (int)sub_E0740((void *)(v17 >> 3));
                if ( v14 )
                {
                  if ( sub_B8CD4(v24, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && sub_B8CD4(v25, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && (v19 = (_DWORD *)sub_C6214((int)v9), sub_C6D34(v9, v19, (int)v26, (int)v27, v13))
                    && sub_B8CD4(v26, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && sub_B8CD4(v27, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && (v20 = (_DWORD *)sub_C5A68(a5), sub_C6D34(v9, v20, (int)v28, v5, v13))
                    && sub_B8CD4(v28, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && sub_B8CD4((_DWORD *)v5, v14, v18) >= 0
                    && sub_D16D8((int)v10, v14, v18)
                    && sub_D1734(v10, a1, 0) )
                  {
                    v5 = 1;
                  }
                  else
                  {
                    v5 = 0;
                    sub_D0048(53, 113, 68, (int)"crypto/sm2/sm2_sign.c", 126);
                  }
                }
                else
                {
                  sub_D0048(53, 113, 65, (int)"crypto/sm2/sm2_sign.c", 103);
                  v5 = 0;
                }
              }
              else
              {
                v14 = 0;
                v5 = 0;
                sub_D0048(53, 113, 16, (int)"crypto/sm2/sm2_sign.c", 96);
              }
            }
            else
            {
              v14 = 0;
              v5 = 0;
              sub_D0048(53, 113, 6, (int)"crypto/sm2/sm2_sign.c", 86);
            }
          }
          else
          {
            v14 = 0;
            v5 = 0;
            sub_D0048(53, 113, 6, (int)"crypto/sm2/sm2_sign.c", 81);
          }
        }
      }
      else
      {
        v14 = 0;
        v5 = 0;
        sub_D0048(53, 113, 6, (int)"crypto/sm2/sm2_sign.c", 65);
      }
    }
    else
    {
      v14 = 0;
      sub_D0048(53, 113, 65, (int)"crypto/sm2/sm2_sign.c", 60);
    }
  }
  CRYPTO_free((void *)v14);
  sub_130B5C(v13);
  sub_D1504(v10);
  return v5;
}
