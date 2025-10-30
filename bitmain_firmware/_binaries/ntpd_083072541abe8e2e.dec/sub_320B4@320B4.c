void sub_320B4()
{
  int i; // r4
  char *v1; // r0
  int v2; // r8
  int v3; // r3
  bool v4; // zf
  char v5; // r3

  for ( i = peer_list; i; i = *(_DWORD *)i )
  {
    if ( !*(_DWORD *)(i + 56) || (*(_BYTE *)(i + 298) & 3) == 0 )
    {
      v1 = sub_18C28(i, i + 16, 0);
      v2 = *(_DWORD *)(i + 56);
      sub_31E54(i, (int)v1);
      v3 = *(_DWORD *)(i + 56);
      if ( v3 )
      {
        v4 = v2 == v3;
        v5 = *(_BYTE *)(i + 72);
        if ( !v4 && (*(_BYTE *)(i + 72) & 0x10) == 0 && *(_BYTE *)(i + 92) != 5 )
        {
          sub_36214(i, "XFAC");
          v5 = *(_BYTE *)(i + 72);
        }
        if ( (v5 & 4) != 0 )
        {
          sub_16020(*(_DWORD *)(i + 56), (unsigned __int16 *)(i + 16));
          v5 = *(_BYTE *)(i + 72);
        }
        if ( (v5 & 2) != 0 )
          sub_160C4(*(_DWORD *)(i + 56), (unsigned __int16 *)(i + 16));
      }
    }
  }
}
