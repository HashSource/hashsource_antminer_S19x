int __fastcall sub_123010(char *a1)
{
  char *v2; // r0
  char *v3; // r4
  char *v4; // r0
  char *v5; // r5
  int v6; // r4
  int v7; // r0
  char *v8; // r4
  int v9; // r6
  int v10; // r9
  _BOOL4 v11; // r3
  int v12; // r0
  int v13; // r4
  _DWORD v15[9]; // [sp+0h] [bp-24h] BYREF

  v2 = strchr(a1, 47);
  if ( v2 )
  {
    v3 = v2;
    v4 = sub_E9E3C(a1);
    v5 = v4;
    if ( v4 )
    {
      v6 = v3 - a1;
      v4[v6] = 0;
      v7 = sub_122ED4(v15, v4);
      v8 = &v5[v6 + 1];
      v9 = v7;
      if ( v7 )
      {
        v10 = sub_122ED4((_DWORD *)((char *)v15 + v7), v8);
        CRYPTO_free(v5);
        v11 = v9 != v10;
        if ( !v10 )
          v11 = 1;
        if ( v11 || (v12 = sub_B2068(), (v13 = v12) == 0) )
        {
          v5 = 0;
          v13 = 0;
        }
        else
        {
          v5 = (char *)sub_1280A4(v12, (char *)v15, v9 + v10);
          if ( v5 )
            return v13;
        }
      }
      else
      {
        v13 = 0;
      }
      CRYPTO_free(v5);
      j_ASN1_STRING_free(v13);
    }
  }
  return 0;
}
