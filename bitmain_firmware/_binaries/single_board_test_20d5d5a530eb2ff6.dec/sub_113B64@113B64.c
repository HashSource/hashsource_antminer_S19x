int __fastcall sub_113B64(int a1)
{
  signed int v2; // r4

  v2 = 0;
  sub_10C070(*(_DWORD *)(a1 + 24));
  while ( v2 < sub_10C010(*(_DWORD *)(a1 + 24)) )
  {
    *(_DWORD *)(sub_10C01C(*(_DWORD **)(a1 + 24), v2) + 32) = v2;
    ++v2;
  }
  *(_DWORD *)(a1 + 40) = 1;
  return 1;
}
