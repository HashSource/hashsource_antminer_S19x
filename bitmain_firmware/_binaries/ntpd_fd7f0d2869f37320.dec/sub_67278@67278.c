int __fastcall sub_67278(int a1, unsigned int a2, int a3)
{
  int v6; // r0
  __int64 v7; // r2
  int v9; // r1
  int v10; // r12
  int v11; // r6
  int v12; // r6
  _DWORD v13[2]; // [sp+4h] [bp-10h] BYREF

  if ( a2 > 0xB )
  {
    sub_67144(v13, a2);
    v11 = v13[1];
    v12 = v11 + sub_670F0(a1 + v13[0]);
    return v12 - sub_670F0(a1) + a3;
  }
  else
  {
    v6 = a1 + 1;
    if ( (v6 & 3) != 0 )
    {
      HIDWORD(v7) = 0;
    }
    else
    {
      v9 = v6 >> 31;
      v7 = 1374389535LL * v6;
      v10 = v6 % 100;
      if ( v6 == 100 * (v6 / 100) )
      {
        v10 = (SHIDWORD(v7) >> 7) - v9;
        v9 = 400;
      }
      else
      {
        HIDWORD(v7) = 1;
      }
      if ( v6 == 100 * (v6 / 100) )
        HIDWORD(v7) = v6 == v9 * v10;
    }
    return *(unsigned __int16 *)&a164640Feb52025[26 * HIDWORD(v7) + 64 + 2 * a2] + a3;
  }
}
