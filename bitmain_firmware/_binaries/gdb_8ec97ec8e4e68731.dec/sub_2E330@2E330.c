int __fastcall sub_2E330(int a1, int a2)
{
  int result; // r0
  int v3; // r3
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  if ( sub_BC304(a2, 16, &v4) != 1 )
    return 0;
  result = v4 & 0x40;
  if ( (v4 & 0x40) != 0 )
  {
    if ( (v4 & 0x1000) != 0 )
    {
      return dword_4717E4;
    }
    else
    {
      if ( (v4 & 0x6000) == 0x2000 )
        LOWORD(v3) = 6112;
      else
        LOWORD(v3) = 6108;
      HIWORD(v3) = 71;
      return *(_DWORD *)v3;
    }
  }
  return result;
}
