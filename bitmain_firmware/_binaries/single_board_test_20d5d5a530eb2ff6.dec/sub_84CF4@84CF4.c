int __fastcall sub_84CF4(int a1, int a2)
{
  int v4; // r0
  int v5; // r6
  int v7; // r0

  if ( !a2 )
    return 0;
  if ( !*(_DWORD *)(a1 + 164) )
  {
    v7 = sub_10BFCC();
    *(_DWORD *)(a1 + 164) = v7;
    if ( !v7 )
      return 0;
  }
  v4 = sub_10E660(a2);
  v5 = sub_115E5C(v4);
  if ( !v5 )
    return 0;
  if ( sub_10BD3C(*(_DWORD *)(a1 + 164), v5) )
    return 1;
  X509_NAME_free(v5);
  return 0;
}
