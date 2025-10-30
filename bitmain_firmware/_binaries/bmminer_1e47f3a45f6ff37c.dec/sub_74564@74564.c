int __fastcall sub_74564(_DWORD *a1, char a2, int a3)
{
  int v8; // [sp+14h] [bp-8h]

  a1[14] = 0;
  sub_73B74(a1, a3);
  if ( (a2 & 4) != 0 || a1[15] == 91 || a1[15] == 123 )
  {
    v8 = sub_742F8(a1, a2, a3);
    if ( v8 )
    {
      if ( (a2 & 2) != 0 || (sub_73B74(a1, a3), !a1[15]) )
      {
        if ( a3 )
          *(_DWORD *)(a3 + 8) = a1[9];
        return v8;
      }
      else
      {
        sub_727DC(a3, a1, 7, "end of file expected");
        sub_72778(v8);
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    sub_727DC(a3, a1, 8, "'[' or '{' expected");
    return 0;
  }
}
