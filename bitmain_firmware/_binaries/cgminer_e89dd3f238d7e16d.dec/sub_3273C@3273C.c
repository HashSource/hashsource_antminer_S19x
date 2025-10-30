int __fastcall sub_3273C(int a1)
{
  int v2; // [sp+8h] [bp-14h]
  int v3; // [sp+Ch] [bp-10h]
  int v4; // [sp+10h] [bp-Ch]
  int i; // [sp+14h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 156);
  v3 = a1;
  for ( i = 0; i < dword_90E90; ++i )
  {
    v2 = *(_DWORD *)(dword_90F34 + 4 * i);
    if ( !sub_326A0(v2) && v4 > *(_DWORD *)(v2 + 156) )
    {
      v4 = *(_DWORD *)(v2 + 156);
      v3 = v2;
    }
  }
  ++*(_DWORD *)(v3 + 156);
  return v3;
}
