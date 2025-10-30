int __fastcall sub_3AA94(int a1, const char *a2, const char *a3, int a4)
{
  int v5; // r4
  int v6; // r3

  v5 = *(_DWORD *)(a1 + 12);
  if ( !v5 )
  {
    if ( *(_BYTE *)(a1 + 4) )
      return v5;
    sub_3A3DC((const char **)a1, a2, a3, a4);
    if ( !*(_DWORD *)(a1 + 12) )
      return v5;
    v5 = *(_DWORD *)(a1 + 12);
  }
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 12) = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 4) = 0;
  }
  else if ( *(_BYTE *)(a1 + 44) )
  {
    *(_DWORD *)(a1 + 16) = 0;
  }
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 4) = 0;
  --*(_DWORD *)(a1 + 28);
  return v5;
}
