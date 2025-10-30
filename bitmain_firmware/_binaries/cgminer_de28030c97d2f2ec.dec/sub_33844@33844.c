int __fastcall sub_33844(int a1)
{
  int v2; // [sp+8h] [bp-14h]
  int v3; // [sp+Ch] [bp-10h]
  int v4; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 156);
  v3 = a1;
  for ( i = 0; i < dword_92028; ++i )
  {
    v2 = *(_DWORD *)(dword_920CC + 4 * i);
    if ( !sub_337A8(v2) && *(_DWORD *)(v2 + 156) < v4 )
    {
      v4 = *(_DWORD *)(v2 + 156);
      v3 = v2;
    }
  }
  ++*(_DWORD *)(v3 + 156);
  return v3;
}
