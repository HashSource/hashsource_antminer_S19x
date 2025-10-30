bool __fastcall sub_F15BC(int a1, int a2)
{
  char *v4; // r0
  int v5; // r0

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)23 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 4);
    return sub_10BD3C(v5, a2) != 0;
  }
  if ( v4 == (char *)24 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 24);
    return sub_10BD3C(v5, a2) != 0;
  }
  sub_D0048(33, 102, 113, (int)"crypto/pkcs7/pk7_lib.c", 453);
  return 0;
}
