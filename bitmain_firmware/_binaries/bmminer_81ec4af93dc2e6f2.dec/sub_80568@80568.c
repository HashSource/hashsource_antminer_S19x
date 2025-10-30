int __fastcall sub_80568(_DWORD *a1, int a2)
{
  int v6; // [sp+Ch] [bp-8h]

  v6 = sub_89108(*a1, a2);
  if ( v6 )
    return v6;
  sub_89984(2, "src/mdc.c", 134, "zc_hashtable_get fail", a2, a1);
  return 0;
}
