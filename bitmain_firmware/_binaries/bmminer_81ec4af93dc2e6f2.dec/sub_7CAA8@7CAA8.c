int __fastcall sub_7CAA8(int a1, int a2)
{
  int v5; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(*(_DWORD *)(a1 + 1096) + 4); ++i )
    v5 = sub_85A58(*(_DWORD *)(**(_DWORD **)(a1 + 1096) + 4 * i), a2);
  return v5;
}
