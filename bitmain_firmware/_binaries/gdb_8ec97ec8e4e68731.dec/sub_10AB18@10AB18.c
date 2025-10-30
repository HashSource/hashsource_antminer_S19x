int __fastcall sub_10AB18(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 8);
  *a2 = a1;
  a2[1] = 0;
  if ( v2 )
    return **(_DWORD **)(a1 + 12);
  else
    return 0;
}
