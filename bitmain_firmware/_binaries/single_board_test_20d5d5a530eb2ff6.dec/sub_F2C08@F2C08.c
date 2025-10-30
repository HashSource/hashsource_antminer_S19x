int __fastcall sub_F2C08(int a1, int a2)
{
  int v2; // r4
  int v5; // r6

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  if ( *(_DWORD *)v2 != 32 )
    return 0;
  v5 = *(_DWORD *)(a1 + 20);
  sub_D8DA4(a2, 256);
  sub_D8DA0(a2, (int)sub_F2C44);
  sub_F1804((_DWORD *)(v5 + 16), *(_DWORD **)(v2 + 8));
  return 1;
}
