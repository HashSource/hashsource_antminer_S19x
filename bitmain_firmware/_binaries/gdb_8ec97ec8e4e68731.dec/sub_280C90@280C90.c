int __fastcall sub_280C90(int a1)
{
  unsigned int v2; // r3

  if ( a1 < 0 || *((_BYTE *)off_46DED0 + 8 * a1) || *((_DWORD *)off_46DED0 + 2 * a1 + 1) != 2715628 )
  {
    v2 = (a1 & 0xFFFFFF7F) - 48;
    if ( v2 > 9 )
    {
      sub_28D50C();
      sub_292FEC(a1);
      return 0;
    }
    else
    {
      if ( dword_48AB0C )
        v2 += 10 * dword_46DEDC;
      dword_48AB0C = 1;
      dword_46DEDC = v2;
      return 1;
    }
  }
  else
  {
    dword_46DEDC *= 4;
    return 1;
  }
}
