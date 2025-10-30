int __fastcall sub_B274C(_DWORD *a1, void **a2, int *a3, int a4)
{
  int v4; // r6
  int v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r4

  if ( !a3 )
    return 0;
  v4 = *a3;
  v5 = v4;
  if ( !v4 )
    return v5;
  v6 = *(_DWORD *)(a4 + 16);
  v5 = v6;
  if ( !v6 )
    return v5;
  v5 = *(_DWORD *)(v6 + 4) & 2;
  if ( !v5 )
    return v5;
  v7 = *(_DWORD *)(v6 + 20);
  v8 = v4 + v7;
  if ( !(v4 + v7) )
    return 0;
  if ( !*(_DWORD *)(v8 + 8) )
  {
    if ( a2 )
    {
      memcpy(*a2, *(const void **)(v4 + v7), *(_DWORD *)(v8 + 4));
      *a2 = (char *)*a2 + *(_DWORD *)(v8 + 4);
    }
    v5 = 1;
    if ( a1 )
      *a1 = *(_DWORD *)(v8 + 4);
    return v5;
  }
  return 0;
}
