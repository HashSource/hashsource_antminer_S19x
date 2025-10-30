int __fastcall sub_C4820(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r4

  if ( a1 && (v3 = *a1) != 0 && *(_DWORD *)(v3 + 12) )
  {
    if ( sub_C5C24(*a1, *a2, a3, 0) )
    {
      *a2 += a3;
    }
    else
    {
      v3 = 0;
      sub_D0048(16, 152, 16, "crypto/ec/ec_asn1.c", 1210);
    }
  }
  else
  {
    v3 = 0;
    sub_D0048(16, 152, 67, "crypto/ec/ec_asn1.c", 1205);
  }
  return v3;
}
