bool __fastcall sub_F0F48(_DWORD *a1, int a2, int a3)
{
  char *v6; // r0
  int v8; // r3
  _BOOL4 v9; // r4

  v6 = sub_EAC84(a1[4]);
  if ( a2 == 1 )
  {
    if ( v6 == (char *)22 )
    {
      a1[3] = a3;
      if ( a3 && sub_EAC84(*(_DWORD *)(*(_DWORD *)(a1[5] + 20) + 16)) == (char *)21 )
      {
        j_ASN1_STRING_free(*(_DWORD *)(*(_DWORD *)(a1[5] + 20) + 20));
        *(_DWORD *)(*(_DWORD *)(a1[5] + 20) + 20) = 0;
      }
      return a3;
    }
    sub_D0048(33, 104, 104, (int)"crypto/pkcs7/pk7_lib.c", 37);
    return 0;
  }
  else
  {
    if ( a2 != 2 )
    {
      a3 = 0;
      sub_D0048(33, 104, 110, (int)"crypto/pkcs7/pk7_lib.c", 57);
      return a3;
    }
    if ( v6 == (char *)22 )
    {
      v8 = a1[5];
      if ( v8 )
        v9 = *(_DWORD *)(*(_DWORD *)(v8 + 20) + 20) == 0;
      else
        v9 = 1;
      a1[3] = v9;
      return v9;
    }
    else
    {
      sub_D0048(33, 104, 104, (int)"crypto/pkcs7/pk7_lib.c", 51);
      return 0;
    }
  }
}
