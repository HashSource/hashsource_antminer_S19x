int __fastcall sub_88A54(_DWORD *a1, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; i < a1[1] && a2(*(_DWORD *)(*a1 + 4 * i), a3) <= 0; ++i )
    ;
  if ( i == a1[1] )
    return sub_888DC((int)a1, a3);
  else
    return sub_88918(a1, i, a3);
}
