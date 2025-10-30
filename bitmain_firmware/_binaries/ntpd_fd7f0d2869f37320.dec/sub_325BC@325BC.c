void sub_325BC()
{
  int i; // r4
  _DWORD *v1; // r0
  int v2; // r8
  int v3; // r3
  bool v4; // zf
  char v5; // r3

  for ( i = peer_list; i; i = *(_DWORD *)i )
  {
    if ( !*(_DWORD *)(i + 56) || (*(_BYTE *)(i + 298) & 3) == 0 )
    {
      v1 = (_DWORD *)sub_18EB8(i, i + 16, 0);
      v2 = *(_DWORD *)(i + 56);
      sub_32358(i, v1);
      v3 = *(_DWORD *)(i + 56);
      if ( v3 )
      {
        v4 = v2 == v3;
        v5 = *(_BYTE *)(i + 72);
        if ( !v4 && (*(_BYTE *)(i + 72) & 0x10) == 0 && *(_BYTE *)(i + 92) != 5 )
        {
          sub_367D8(i, "XFAC");
          v5 = *(_BYTE *)(i + 72);
        }
        if ( (v5 & 4) != 0 )
        {
          sub_16274(*(_DWORD *)(i + 56), (unsigned __int16 *)(i + 16));
          v5 = *(_BYTE *)(i + 72);
        }
        if ( (v5 & 2) != 0 )
          sub_16318(*(_DWORD *)(i + 56), (unsigned __int16 *)(i + 16));
      }
    }
  }
}
