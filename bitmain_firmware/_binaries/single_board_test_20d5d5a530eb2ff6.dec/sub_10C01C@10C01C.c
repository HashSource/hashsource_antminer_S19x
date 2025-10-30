int __fastcall sub_10C01C(_DWORD *a1, unsigned int a2)
{
  int v2; // r3

  v2 = a2 >> 31;
  if ( !a1 )
    v2 = 1;
  if ( v2 )
    return 0;
  if ( (signed int)a2 >= *a1 )
    return 0;
  return *(_DWORD *)(a1[1] + 4 * a2);
}
