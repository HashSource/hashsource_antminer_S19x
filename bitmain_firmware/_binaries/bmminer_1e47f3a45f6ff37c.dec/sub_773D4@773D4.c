int __fastcall sub_773D4(_DWORD *a1, _DWORD *a2)
{
  int v6; // [sp+8h] [bp-14h]
  int v7; // [sp+Ch] [bp-10h]
  unsigned int v8; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  v8 = sub_76B34(a1);
  if ( sub_76B34(a2) != v8 )
    return 0;
  for ( i = 0; i < v8; ++i )
  {
    v7 = sub_76B80(a1, i);
    v6 = sub_76B80(a2, i);
    if ( !sub_78180(v7, v6) )
      return 0;
  }
  return 1;
}
