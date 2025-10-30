int __fastcall sub_2FB83C(int a1)
{
  int v1; // r4

  v1 = **(_DWORD **)(a1 + 160);
  if ( v1 < 0 )
    sub_2A6BBC("plugin.c", 457);
  return 4 * (v1 + 1);
}
