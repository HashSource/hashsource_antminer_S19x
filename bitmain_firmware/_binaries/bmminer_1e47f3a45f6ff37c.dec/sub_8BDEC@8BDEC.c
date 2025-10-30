int __fastcall sub_8BDEC(_DWORD *a1, int (__fastcall *a2)(_DWORD, int), int a3)
{
  int i; // [sp+14h] [bp-8h]

  for ( i = 0; a1[1] > i && a2(*(_DWORD *)(*a1 + 4 * i), a3) <= 0; ++i )
    ;
  if ( a1[1] == i )
    return sub_8BC74((int)a1, a3);
  else
    return sub_8BCB0(a1, i, a3);
}
