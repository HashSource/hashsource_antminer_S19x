int __fastcall sub_10C040(_DWORD *a1, unsigned int a2, int a3)
{
  int v3; // r3
  int v4; // r2

  v3 = a2 >> 31;
  if ( !a1 )
    v3 = 1;
  if ( v3 )
    return 0;
  if ( (signed int)a2 >= *a1 )
    return 0;
  *(_DWORD *)(a1[1] + 4 * a2) = a3;
  v4 = a1[1];
  a1[2] = 0;
  return *(_DWORD *)(v4 + 4 * a2);
}
