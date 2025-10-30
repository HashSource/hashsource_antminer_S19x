int __fastcall sub_F1008(int a1, int a2)
{
  char *v4; // r0

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)22 )
  {
    PKCS7_free(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 20));
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20) = a2;
    return 1;
  }
  else if ( v4 == (char *)25 )
  {
    PKCS7_free(*(_DWORD *)(*(_DWORD *)(a1 + 20) + 8));
    *(_DWORD *)(*(_DWORD *)(a1 + 20) + 8) = a2;
    return 1;
  }
  else
  {
    sub_D0048(33, 109, 112, (int)"crypto/pkcs7/pk7_lib.c", 99);
    return 0;
  }
}
