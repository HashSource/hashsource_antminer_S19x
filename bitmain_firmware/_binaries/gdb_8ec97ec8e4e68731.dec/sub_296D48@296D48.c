int __fastcall sub_296D48(char a1, int a2)
{
  unsigned int v3; // r3
  int result; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r0

  if ( !*((_BYTE *)off_46DED0 + 8 * a2) && *((_DWORD *)off_46DED0 + 2 * a2 + 1) == 2715628 )
  {
    if ( (a1 & 2) != 0 )
    {
      if ( (dword_48AAA0 & 0x80000) != 0 )
      {
        result = *((unsigned __int8 *)off_46DED0 + 8 * a2);
        dword_490154 |= 4u;
      }
      else
      {
        dword_48AAA0 |= 0x40u;
        v6 = sub_29334C();
        dword_48AAA0 &= ~0x40u;
        v7 = sub_28D478();
        sub_28D50C(v7);
        dword_48AAA0 &= ~0x400u;
        if ( v6 < 0 )
          return -1;
        else
          return sub_27F874(v6, (int *)off_46DED0);
      }
    }
    else
    {
      dword_46DEDC *= 4;
      return 1;
    }
  }
  else
  {
    v3 = (a2 & 0xFFFFFF7F) - 48;
    if ( v3 > 9 )
    {
      if ( (a2 & 0xFFFFFF7F) != 0x2D || dword_48AB0C )
      {
        if ( (dword_490154 & 1) != 0 && dword_46DEDC == 1 && !dword_48AB0C )
          dword_48AB0C = dword_46DEDC;
        v5 = sub_28D478();
        sub_28D50C(v5);
        dword_48AAA0 &= ~0x400u;
        result = sub_27F874(a2, (int *)off_46DED0);
        if ( (dword_48AAA0 & 0x80000) != 0 )
        {
          if ( !dword_48FF30 )
            off_470784(0);
          return 0;
        }
      }
      else
      {
        dword_490154 |= 1u;
        dword_46DEDC = 1;
        dword_46DEE0 = -1;
        return 1;
      }
    }
    else
    {
      if ( dword_48AB0C )
        v3 += 10 * dword_46DEDC;
      result = 1;
      dword_490154 |= 2u;
      dword_46DEDC = v3;
      dword_48AB0C = 1;
    }
  }
  return result;
}
