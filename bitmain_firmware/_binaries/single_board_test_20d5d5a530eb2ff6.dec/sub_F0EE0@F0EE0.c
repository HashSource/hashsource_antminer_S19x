int __fastcall sub_F0EE0(int a1, int a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int i; // r4
  int v8; // r6
  __int64 v9; // r0
  int v10; // r0
  int v11; // r1

  sub_10BFDC(*(_DWORD *)(a1 + 24), X509_ATTRIBUTE_free);
  v4 = sub_10BDE0(a2);
  *(_DWORD *)(a1 + 24) = v4;
  if ( !v4 )
    return 0;
  for ( i = 0; i < sub_10C010(a2, v5, v6); ++i )
  {
    v8 = *(_DWORD *)(a1 + 24);
    v9 = sub_10C01C(a2, i);
    v10 = sub_114DEC(v9, HIDWORD(v9));
    v11 = i;
    if ( !sub_10C040(v8, v11, v10) )
      return 0;
  }
  return 1;
}
