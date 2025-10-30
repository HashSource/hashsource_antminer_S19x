int __fastcall sub_5432C(int result, int a2)
{
  int v2; // r4
  int v4; // r7
  int v5; // r5
  int v6; // r2

  v2 = *(_DWORD *)(a2 + 84);
  v4 = result;
  v5 = *(_DWORD *)v2;
  v6 = *(_DWORD *)(*(_DWORD *)v2 + 4);
  ++*(_DWORD *)(v2 + 776);
  if ( v6 > 0 )
    result = sub_39C88(a2, 1);
  *(_DWORD *)(v5 + 4) = 2;
  if ( (*(_BYTE *)(v2 + 768) & 2) == 0 )
  {
    if ( *(_DWORD *)(v5 + 140) == 1 )
    {
      result = write(*(_DWORD *)(*(_DWORD *)(a2 + 84) + 28), "SPSTAT\r\n", 8u);
      if ( result >= 0 )
      {
        praecis_msg = 1;
        return result;
      }
      sub_65D40(3, "Palisade(%d) write: %m:", v4);
    }
    result = sub_541E4(v2);
    if ( result < 0 )
      return sub_39C88(a2, 3);
  }
  return result;
}
