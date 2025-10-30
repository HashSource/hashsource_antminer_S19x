int __fastcall sub_D8E18(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // r0
  int (__fastcall *v5)(int, int); // r3
  int v6; // [sp+Ch] [bp-58h] BYREF
  _BYTE v7[84]; // [sp+10h] [bp-54h] BYREF

  result = sub_AE64C(&v6, 0, 0, 0, a1);
  if ( result )
  {
    v3 = EVP_PKEY_new();
    if ( !v3 )
    {
      sub_D0048(6, 111, 65, (int)"crypto/evp/evp_pkey.c", 31);
      return 0;
    }
    v4 = sub_EAC84(v6);
    if ( sub_D9CD4(v3, v4) )
    {
      v5 = *(int (__fastcall **)(int, int))(*(_DWORD *)(v3 + 12) + 36);
      if ( v5 )
      {
        if ( v5(v3, a1) )
          return v3;
        sub_D0048(6, 111, 145, (int)"crypto/evp/evp_pkey.c", 44);
      }
      else
      {
        sub_D0048(6, 111, 144, (int)"crypto/evp/evp_pkey.c", 48);
      }
    }
    else
    {
      sub_D0048(6, 111, 118, (int)"crypto/evp/evp_pkey.c", 36);
      sub_127D0C(v7, 80, v6);
      sub_D1240(2, "TYPE=", v7);
    }
    sub_DA240(v3);
    return 0;
  }
  return result;
}
