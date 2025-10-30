unsigned int __fastcall sub_186D0(int a1, unsigned int a2, int a3, int a4)
{
  int v6; // r7
  int v7; // r5
  unsigned int v9; // r4
  int v10; // r0
  unsigned int v11; // r0
  unsigned int result; // r0
  char v13; // r1

  v6 = a2 & 0xF;
  v7 = (a2 >> 5) & 3;
  if ( (a2 & 0x10) == 0 )
  {
    v9 = (a2 >> 7) & 0x1F;
    if ( v6 != 15 )
      goto LABEL_12;
    v10 = 8;
    goto LABEL_5;
  }
  if ( ((a2 >> 8) & 0xF) != 0xF )
  {
    v9 = (unsigned __int8)((int (*)(void))sub_92FEC)();
    if ( v6 != 15 )
      goto LABEL_12;
    v10 = 12;
LABEL_5:
    v11 = v10 + a4;
    if ( v7 != 2 )
      goto LABEL_6;
LABEL_13:
    if ( v9 >= 0x1F )
      v13 = 31;
    else
      v13 = v9;
    if ( (v11 & 0x80000000) == 0 )
      return v11 >> v13;
    else
      return ~(~v11 >> v13);
  }
  v9 = (unsigned __int8)(a4 + 8);
  if ( v6 == 15 )
  {
    v10 = 12;
    goto LABEL_5;
  }
LABEL_12:
  v11 = sub_92FEC(a1, v6);
  if ( v7 == 2 )
    goto LABEL_13;
LABEL_6:
  if ( v7 == 3 )
  {
    if ( (v9 & 0x1F) != 0 )
    {
      return __ROR4__(v11, v9 & 0x1F);
    }
    else
    {
      result = v11 >> 1;
      if ( a3 )
        result |= 0x80000000;
    }
  }
  else
  {
    if ( v7 != 1 )
    {
      if ( v9 <= 0x1F )
        return v11 << v9;
      return 0;
    }
    if ( v9 > 0x1F )
      return 0;
    return v11 >> v9;
  }
  return result;
}
