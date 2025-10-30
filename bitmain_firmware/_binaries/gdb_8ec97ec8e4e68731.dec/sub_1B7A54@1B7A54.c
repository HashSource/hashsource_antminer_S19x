int __fastcall sub_1B7A54(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 132);
  if ( !v1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x10) != 0 || !*(_DWORD *)(v1 + 12) )
    return (**(int (***)(void))(v1 + 40))();
  return 1;
}
