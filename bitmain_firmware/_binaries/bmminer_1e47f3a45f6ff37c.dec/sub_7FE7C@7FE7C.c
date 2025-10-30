int __fastcall sub_7FE7C(int a1, int a2)
{
  int v5; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v5 = 0;
  for ( i = 0; *(_DWORD *)(*(_DWORD *)(a1 + 1096) + 4) > i; ++i )
    v5 = sub_88E10(*(_DWORD *)(**(_DWORD **)(a1 + 1096) + 4 * i), a2);
  return v5;
}
