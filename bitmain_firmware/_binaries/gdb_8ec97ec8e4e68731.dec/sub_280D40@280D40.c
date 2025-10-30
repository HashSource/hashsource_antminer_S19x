int __fastcall sub_280D40(int *a1)
{
  int v1; // r4
  unsigned int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r0
  int v10; // r3
  bool v11; // cc
  int v12; // r1

  v1 = a1[8];
  if ( !v1 )
    goto LABEL_3;
  if ( strchr(" hl^$0ftFT;,%wbeWBE|`", v1) )
  {
    if ( ((unsigned int)sub_180400 & ~dword_48AAA0) == 0 )
      dword_48AAA0 &= ~0x400u;
    return sub_28092C(a1);
  }
  v4 = a1[7];
  if ( v4 == v1 )
  {
    v11 = v4 > 0x79;
    if ( v4 != 121 )
      v11 = v4 - 99 > 1;
    if ( !v11 )
    {
      v12 = a1[7];
      dword_4900D4 = dword_4900DC;
      sub_2954D0(1, v12);
      dword_48ABA4 = v4;
      dword_48AAA0 &= ~0x100000u;
      return sub_280628(a1);
    }
  }
  if ( (unsigned int)(v1 - 48) > 9 )
  {
LABEL_3:
    dword_48AAA0 &= 0xFFEFFBFF;
    return 1;
  }
  if ( (dword_48AAA0 & 0x180400) == 0x180400 )
    return sub_280C90(v1);
  if ( (dword_48AAA0 & 0x180400) == 0x180000 )
  {
    dword_48AAA0 |= 0x400u;
    return sub_280C90(v1);
  }
  else
  {
    v5 = dword_46DEDC;
    dword_48AAA0 |= 0x400u;
    dword_48AB0C = 1;
    dword_46DEDC = v1 - 48;
    do
    {
      v7 = sub_296C9C();
      if ( v7 )
      {
        v8 = dword_48AAA0;
        goto LABEL_16;
      }
      v6 = sub_296CF4();
      v7 = sub_280C90(v6);
    }
    while ( v7 > 0 );
    v8 = dword_48AAA0 & 0xFFFFFBFF;
LABEL_16:
    dword_48AAA0 = v8 | 0x40;
    dword_46DEDC *= v5;
    v9 = sub_29334C(v7);
    v10 = dword_48AAA0;
    if ( v9 >= 0 )
      a1[8] = v9;
    dword_48AAA0 = v10 & 0xFFFFFFBF;
    if ( v9 >= 0 )
      return sub_28092C(a1);
    a1[8] = 0;
    return -1;
  }
}
