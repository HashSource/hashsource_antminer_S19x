int __fastcall sub_666E4(_DWORD *a1, _DWORD *a2)
{
  int v6; // [sp+8h] [bp-14h]
  int v7; // [sp+Ch] [bp-10h]
  unsigned int v8; // [sp+10h] [bp-Ch]
  unsigned int i; // [sp+14h] [bp-8h]

  v8 = sub_65E3C(a1);
  if ( v8 != sub_65E3C(a2) )
    return 0;
  for ( i = 0; i < v8; ++i )
  {
    v7 = sub_65E88(a1, i);
    v6 = sub_65E88(a2, i);
    if ( !sub_674F0(v7, v6) )
      return 0;
  }
  return 1;
}
