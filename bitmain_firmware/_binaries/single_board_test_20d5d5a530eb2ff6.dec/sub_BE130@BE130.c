int __fastcall sub_BE130(int a1, int a2, int a3)
{
  int v4; // r4

  if ( *(_UNKNOWN **)(a1 + 12) == &dhx_asn1_meth )
  {
    v4 = sub_BF258(0, a2, a3);
    if ( v4 )
      goto LABEL_3;
  }
  else
  {
    v4 = sub_BF210(0, a2, a3);
    if ( v4 )
    {
LABEL_3:
      sub_D9F44(a1, **(_DWORD **)(a1 + 12), v4, *(_DWORD *)(a1 + 12));
      return 1;
    }
  }
  sub_D0048(5, 107, 5, "crypto/dh/dh_ameth.c", 255);
  return v4;
}
