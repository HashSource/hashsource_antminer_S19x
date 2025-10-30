int __fastcall sub_66274(int a1, unsigned int a2, int a3)
{
  int v5; // r0
  int v7; // r3
  int v9; // r1
  int v10; // r7
  int v11; // r7
  _DWORD v12[2]; // [sp+4h] [bp-10h] BYREF

  if ( a2 > 0xB )
  {
    sub_66148(v12, a2);
    v10 = v12[1];
    v11 = v10 + sub_660F4(a1 + v12[0]);
    return v11 - sub_660F4(a1) + a3;
  }
  else
  {
    v5 = a1 + 1;
    if ( ((a1 + 1) & 3) != 0 )
    {
      v7 = 0;
    }
    else
    {
      v9 = v5 >> 31;
      if ( v5 == 100 * (v5 / 100) )
      {
        v9 = v5 / 400;
        v7 = 400;
      }
      else
      {
        v7 = 1;
      }
      if ( v5 == 100 * (v5 / 100) )
        v7 = v5 == v7 * v9;
    }
    return *(unsigned __int16 *)&a171005Jan14202[26 * v7 + 64 + 2 * a2] + a3;
  }
}
