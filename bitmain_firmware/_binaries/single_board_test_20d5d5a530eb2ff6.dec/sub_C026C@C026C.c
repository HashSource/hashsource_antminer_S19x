int __fastcall sub_C026C(int a1, int a2)
{
  int result; // r0
  int v4; // r0
  int v5; // r5
  _DWORD *v6; // r6
  int v7; // r8
  int v8; // r4
  int v9; // r2
  int v10; // r0
  int v11; // r0
  int v12; // r3
  void *v13; // [sp+8h] [bp-18h] BYREF
  int v14; // [sp+Ch] [bp-14h] BYREF
  int v15; // [sp+10h] [bp-10h] BYREF
  int v16; // [sp+14h] [bp-Ch] BYREF
  int *v17; // [sp+18h] [bp-8h] BYREF
  _DWORD *v18; // [sp+1Ch] [bp-4h] BYREF

  result = sub_AE64C(0, (int *)&v13, &v15, &v18, a2);
  if ( result )
  {
    sub_B294C(0, &v16, &v17, v18);
    v4 = sub_B2074(0, &v13, v15);
    v5 = v4;
    if ( v4
      && *(_DWORD *)(v4 + 4) != 258
      && v16 == 16
      && (v9 = *v17, v14 = v17[2], (v6 = (_DWORD *)d2i_DSAparams(0, &v14, v9)) != 0) )
    {
      v10 = sub_B8264();
      v6[6] = v10;
      if ( v10 && sub_12700C(v5, v10) )
      {
        v11 = sub_B822C();
        v6[5] = v11;
        if ( v11 )
        {
          v7 = sub_130B08();
          if ( v7 )
          {
            sub_B87B8(v6[6], 4);
            if ( sub_132330(v6[5], v6[4], v6[6], v6[2], v7) )
            {
              v8 = 1;
              sub_D9F44(a1, 116, v6, v12);
              goto LABEL_7;
            }
            sub_D0048(10, 115, 109, "crypto/dsa/dsa_ameth.c", 184);
          }
          else
          {
            sub_D0048(10, 115, 65, "crypto/dsa/dsa_ameth.c", 178);
          }
        }
        else
        {
          v7 = 0;
          sub_D0048(10, 115, 65, "crypto/dsa/dsa_ameth.c", 174);
        }
      }
      else
      {
        v7 = 0;
        sub_D0048(10, 115, 109, "crypto/dsa/dsa_ameth.c", 169);
      }
    }
    else
    {
      v6 = 0;
      v7 = 0;
      sub_D0048(10, 115, 104, "crypto/dsa/dsa_ameth.c", 194);
    }
    v8 = 0;
    sub_C09D0(v6);
LABEL_7:
    sub_130B5C(v7);
    sub_AE254(v5);
    return v8;
  }
  return result;
}
