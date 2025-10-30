int __fastcall sub_10D724(int a1, int a2)
{
  int v4; // r7
  void *v5; // r4
  void *v6; // r5
  _DWORD *v7; // r0
  char *v8; // r10
  char *v9; // r4
  int v10; // t1
  int v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r4
  _DWORD *v15; // r0
  int v16; // t1
  void *v18; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v19[20]; // [sp+Ch] [bp-18h] BYREF
  char v20; // [sp+20h] [bp-4h] BYREF

  if ( sub_B550C(a1, "        Subject OCSP hash: ") > 0
    && (v4 = sub_10E660(a2), v5 = (void *)sub_115C40(v4, 0), v6 = CRYPTO_malloc(v5), (v18 = v6) != 0) )
  {
    sub_115C40(v4, &v18);
    v7 = sub_D93D8();
    if ( sub_D18F0((int)v6, (int)v5, (int)v19, 0, v7, 0) )
    {
      v8 = v19;
      v9 = v19;
      while ( 1 )
      {
        v10 = (unsigned __int8)*v9++;
        if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v10) <= 0 )
          break;
        if ( v9 == &v20 )
        {
          CRYPTO_free(v6);
          if ( sub_B550C(a1, "\n        Public key OCSP hash: ") > 0 )
          {
            v11 = sub_1164B0(a2);
            v12 = v11;
            if ( v11 )
            {
              v13 = sub_AE2B4(v11);
              v14 = sub_AE2A8(v12);
              v15 = sub_D93D8();
              if ( sub_D18F0(v13, v14, (int)v19, 0, v15, 0) )
              {
                while ( 1 )
                {
                  v16 = (unsigned __int8)*v8++;
                  if ( sub_B550C(a1, (unsigned __int8 *)"%02X", v16) <= 0 )
                    break;
                  if ( v8 == &v20 )
                  {
                    sub_B550C(a1, (unsigned __int8 *)"\n");
                    return 1;
                  }
                }
              }
            }
          }
          goto LABEL_13;
        }
      }
    }
  }
  else
  {
LABEL_13:
    v6 = 0;
  }
  CRYPTO_free(v6);
  return 0;
}
