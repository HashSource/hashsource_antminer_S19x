int __fastcall sub_F0D5C(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v9; // r8
  int v10; // r0
  int v11; // r6

  if ( !a4 )
  {
    sub_D0048(33, 107, 143, (int)"crypto/pkcs7/pk7_doit.c", 891);
    return 0;
  }
  if ( !*(_DWORD *)(a4 + 20) )
  {
    sub_D0048(33, 107, 122, (int)"crypto/pkcs7/pk7_doit.c", 896);
    return 0;
  }
  if ( sub_EAC84(*(_DWORD *)(a4 + 16)) == (char *)22 || sub_EAC84(*(_DWORD *)(a4 + 16)) == (char *)24 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)(a4 + 20) + 8);
    v10 = sub_10E824(v9, **(_DWORD **)(a5 + 4), *(_DWORD *)(*(_DWORD *)(a5 + 4) + 4));
    v11 = v10;
    if ( v10 )
    {
      if ( sub_112DA0(a2, a1, v10, v9) )
      {
        sub_112CC0(a2, 4);
        if ( sub_112694(a2) > 0 )
        {
          sub_112D28(a2);
          return sub_F0AEC(a3, a4, a5, v11);
        }
        sub_D0048(33, 107, 11, (int)"crypto/pkcs7/pk7_doit.c", 928);
        sub_112D28(a2);
      }
      else
      {
        sub_D0048(33, 107, 11, (int)"crypto/pkcs7/pk7_doit.c", 922);
      }
    }
    else
    {
      sub_D0048(33, 107, 106, (int)"crypto/pkcs7/pk7_doit.c", 916);
    }
    return 0;
  }
  sub_D0048(33, 107, 114, (int)"crypto/pkcs7/pk7_doit.c", 905);
  return 0;
}
