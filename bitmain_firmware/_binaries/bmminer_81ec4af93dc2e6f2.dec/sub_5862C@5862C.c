int __fastcall sub_5862C(_DWORD *a1, int a2, int a3)
{
  int v6; // [sp+14h] [bp-8h]

  if ( !a1 )
    return 0;
  v6 = sub_58E60(*a1, a2);
  if ( !v6 )
    return 0;
  sub_5A078(*(_DWORD *)(v6 + 20), a3);
  return 1;
}
