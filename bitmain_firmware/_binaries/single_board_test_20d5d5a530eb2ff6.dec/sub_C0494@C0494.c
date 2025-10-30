int __fastcall sub_C0494(int a1, int a2)
{
  int result; // r0
  bool v4; // zf
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r2
  void *v12; // [sp+8h] [bp-18h] BYREF
  int v13; // [sp+Ch] [bp-14h] BYREF
  int v14; // [sp+10h] [bp-10h] BYREF
  int v15; // [sp+14h] [bp-Ch] BYREF
  int *v16; // [sp+18h] [bp-8h] BYREF
  _DWORD *v17; // [sp+1Ch] [bp-4h] BYREF

  result = sub_116488(0, &v12, &v14, &v17, a2);
  if ( result )
  {
    sub_B294C(0, &v15, &v16, v17);
    if ( v15 == 16 )
    {
      v11 = *v16;
      v13 = v16[2];
      v5 = d2i_DSAparams(0, &v13, v11);
      if ( v5 )
        goto LABEL_9;
      v10 = 0;
      sub_D0048(10, 117, 104, "crypto/dsa/dsa_ameth.c", 42);
    }
    else
    {
      v4 = v15 == -1;
      if ( v15 != -1 )
        v4 = v15 == 5;
      if ( v4 )
      {
        v6 = DSA_new();
        v5 = v6;
        if ( v6 )
        {
LABEL_9:
          v7 = sub_B2074(0, &v12, v14);
          v10 = v7;
          if ( v7 )
          {
            v8 = sub_12700C(v7, 0);
            *(_DWORD *)(v5 + 20) = v8;
            if ( v8 )
            {
              ASN1_INTEGER_free(v10);
              sub_D9F44(a1, 116, v5, v9);
              return 1;
            }
            sub_D0048(10, 117, 108, "crypto/dsa/dsa_ameth.c", 62);
          }
          else
          {
            sub_D0048(10, 117, 104, "crypto/dsa/dsa_ameth.c", 57);
          }
          goto LABEL_12;
        }
        v10 = 0;
        sub_D0048(10, 117, 65, "crypto/dsa/dsa_ameth.c", 48);
      }
      else
      {
        v5 = 0;
        v10 = 0;
        sub_D0048(10, 117, 105, "crypto/dsa/dsa_ameth.c", 52);
      }
    }
LABEL_12:
    ASN1_INTEGER_free(v10);
    sub_C09D0(v5);
    return 0;
  }
  return result;
}
