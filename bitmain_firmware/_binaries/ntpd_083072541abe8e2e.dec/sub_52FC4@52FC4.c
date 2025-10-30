__int16 *__fastcall sub_52FC4(__int16 *result, int a2)
{
  int v3; // r4
  __int16 *v4; // r7
  int v5; // r5
  int v6; // r1

  v3 = *(_DWORD *)(a2 + 84);
  v4 = result;
  v5 = *(_DWORD *)v3;
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 4);
  ++*(_DWORD *)(v3 + 776);
  if ( v6 > 0 )
    result = sub_394A0((__int16 *)a2, 1);
  *(_DWORD *)(v5 + 4) = 2;
  if ( (*(_BYTE *)(v3 + 768) & 2) == 0 )
  {
    if ( *(_DWORD *)(v5 + 140) == 1 )
    {
      result = (__int16 *)write(*(_DWORD *)(*(_DWORD *)(a2 + 84) + 28), "SPSTAT\r\n", 8u);
      if ( (int)result >= 0 )
      {
        praecis_msg = 1;
        return result;
      }
      sub_64E00(3, "Palisade(%d) write: %m:", v4);
    }
    result = (__int16 *)sub_52E7C(v3);
    if ( (int)result < 0 )
      return sub_394A0((__int16 *)a2, 3);
  }
  return result;
}
