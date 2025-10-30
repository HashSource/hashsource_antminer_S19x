int __fastcall sub_3B544(int result)
{
  int v1; // [sp+Ch] [bp-10h]
  int v2; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]
  int j; // [sp+14h] [bp-8h]

  v2 = dword_92028 - 1;
  for ( i = 0; i < dword_92028; ++i )
  {
    v1 = *(_DWORD *)(dword_920CC + 4 * i);
    if ( *(_DWORD *)(v1 + 4) > *(_DWORD *)(result + 4) )
      --*(_DWORD *)(v1 + 4);
  }
  if ( *(_DWORD *)result < v2 )
  {
    for ( j = *(_DWORD *)result; j < v2; ++j )
    {
      *(_DWORD *)(dword_920CC + 4 * j) = *(_DWORD *)(dword_920CC + 4 * (j + 1));
      **(_DWORD **)(dword_920CC + 4 * j) = j;
    }
  }
  *(_DWORD *)result = dword_92028;
  *(_BYTE *)(result + 105) = 1;
  --dword_92028;
  return result;
}
