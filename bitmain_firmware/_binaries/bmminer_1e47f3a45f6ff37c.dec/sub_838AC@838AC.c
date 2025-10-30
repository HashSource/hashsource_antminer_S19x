int __fastcall sub_838AC(_DWORD *a1, int a2)
{
  int v6; // [sp+Ch] [bp-8h]

  v6 = sub_8C498(*a1, a2);
  if ( v6 )
    return v6 + 1025;
  sub_8CD10(2, "src/mdc.c", 121, "zc_hashtable_get fail", a2, a1);
  return 0;
}
