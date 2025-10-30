int __fastcall sub_F171C(int a1, int a2)
{
  char *v4; // r0
  int v5; // r6
  int v6; // r4

  v4 = sub_EAC84(*(_DWORD *)(a1 + 16));
  if ( v4 == (char *)23 )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 8);
    v6 = sub_D8ADC(a2);
    if ( v6 )
      goto LABEL_4;
  }
  else
  {
    if ( v4 != (char *)24 )
    {
      sub_D0048(33, 108, 113, (int)"crypto/pkcs7/pk7_lib.c", 531);
      return 0;
    }
    v5 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 20);
    v6 = sub_D8ADC(a2);
    if ( v6 )
    {
LABEL_4:
      *(_DWORD *)(v5 + 12) = a2;
      return 1;
    }
  }
  sub_D0048(33, 108, 144, (int)"crypto/pkcs7/pk7_lib.c", 539);
  return v6;
}
