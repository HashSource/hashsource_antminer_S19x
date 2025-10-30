int __fastcall sub_ADA4C(_DWORD *a1)
{
  int v2; // r0
  _DWORD s[36]; // [sp+8h] [bp-90h] BYREF

  memset(s, 0, sizeof(s));
  if ( a1[3] )
  {
    if ( (a1[2] & 1) == 0 )
      goto LABEL_3;
LABEL_10:
    sub_D0048(6, 188, 7, "crypto/asn1/ameth_lib.c", 155);
    return 0;
  }
  if ( (a1[2] & 1) == 0 )
    goto LABEL_10;
LABEL_3:
  v2 = dword_6DF3A4;
  if ( !dword_6DF3A4 )
  {
    v2 = sub_10BFD4(sub_AD8D4);
    dword_6DF3A4 = v2;
    if ( !v2 )
      return 0;
  }
  s[0] = *a1;
  if ( sub_10BC4C(v2, s) >= 0 )
  {
    sub_D0048(6, 188, 179, "crypto/asn1/ameth_lib.c", 168);
    return 0;
  }
  if ( !sub_10BD3C(dword_6DF3A4, a1) )
    return 0;
  sub_10C070(dword_6DF3A4);
  return 1;
}
