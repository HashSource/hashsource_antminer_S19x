bool __fastcall sub_DE05C(int a1, int a2, int a3)
{
  int v4; // r6
  int v7; // r6

  if ( dword_6E1A1C )
  {
    if ( (a1 & 0x40000) == 0 )
      sub_D0048(15, 116, 70, (int)"crypto/init.c", 615);
    return 0;
  }
  if ( sub_10C594(&unk_6E1A24, sub_DDE34) && dword_6E1A18 )
  {
    if ( (a1 & 0x40000) != 0 )
      return 1;
    if ( (a1 & 0x80000) != 0 )
    {
      if ( sub_10C594(&unk_6E1A28, sub_DDCE8) )
      {
LABEL_11:
        if ( !dword_6E19D8
          || !sub_10C594(&unk_6E1A2C, sub_DDCF8)
          || !dword_6E19DC
          || (a1 & 1) != 0 && (!sub_10C594(&unk_6E1A30, sub_DDD08) || !dword_6E19E0)
          || (a1 & 2) != 0 && (!sub_10C594(&unk_6E1A30, sub_DDDF8) || !dword_6E19E0)
          || (a1 & 0x10) != 0 && (!sub_10C594(&unk_6E1A34, sub_DDD18) || !dword_6E19E4)
          || (a1 & 4) != 0 && (!sub_10C594(&unk_6E1A34, sub_DDDE4) || !dword_6E19E4)
          || (a1 & 0x20) != 0 && (!sub_10C594(&unk_6E1A38, sub_DDD28) || !dword_6E19E8)
          || (a1 & 8) != 0 && (!sub_10C594(&unk_6E1A38, sub_DDDD0) || !dword_6E19E8)
          || (a1 & 0x20000) != 0 && !sub_10C610()
          || (a1 & 0x80) != 0 && (!sub_10C594(&unk_6E1A3C, sub_DDDBC) || !dword_6E1A0C) )
        {
          return 0;
        }
        if ( (a1 & 0x40) != 0 )
        {
          sub_10C554(dword_6E1A10);
          dword_6E1A08 = a3;
          v4 = sub_10C594(&unk_6E1A3C, sub_DDDA8);
          if ( !v4 )
          {
            dword_6E1A08 = 0;
            sub_10C564(dword_6E1A10);
            return v4;
          }
          v7 = dword_6E1A0C;
          dword_6E1A08 = 0;
          sub_10C564(dword_6E1A10);
          if ( v7 <= 0 )
            return 0;
        }
        if ( (a1 & 0x100) != 0 && (!sub_10C594(&unk_6E1A40, sub_DDD84) || !dword_6E1A04)
          || (a1 & 0x800) != 0 && (!sub_10C594(&unk_6E1A44, sub_DDD70) || !dword_6E19FC)
          || (a1 & 0x200) != 0 && (!sub_10C594(&unk_6E1A48, sub_DDD5C) || !dword_6E19F8)
          || (a1 & 0x400) != 0 && (!sub_10C594(&unk_6E1A4C, sub_DDD48) || !dword_6E19F4) )
        {
          return 0;
        }
        if ( (a1 & 0xFE00) != 0 )
          sub_15AD34();
        if ( (a1 & 0x10000) != 0 )
        {
          if ( sub_10C594(&unk_6E1A50, sub_DDD38) )
            return dword_6E19F0 != 0;
          return 0;
        }
        return 1;
      }
    }
    else if ( sub_10C594(&unk_6E1A28, sub_DDE0C) )
    {
      goto LABEL_11;
    }
  }
  return 0;
}
