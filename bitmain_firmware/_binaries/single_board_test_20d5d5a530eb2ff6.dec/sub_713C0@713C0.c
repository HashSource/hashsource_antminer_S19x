int __fastcall sub_713C0(int a1, int a2, int a3)
{
  int v4; // r4
  unsigned int v5; // r3
  bool v6; // zf
  _BOOL4 v7; // r0
  int v8; // r6
  int v9; // r8
  int v10; // r5
  int v11; // r4
  int v13; // r4
  int v14; // r5
  _DWORD v15[2]; // [sp+0h] [bp-8h]

  v4 = 0;
  v5 = 0;
  v15[0] = 0;
  v15[1] = 0;
  do
  {
    v6 = ((1 << v5) & a3) == 0;
    if ( ((1 << v5) & a3) != 0 )
      *((_BYTE *)v15 + v4) = v5;
    ++v5;
    if ( !v6 )
      ++v4;
    v7 = v5 <= 0x1F;
    if ( v4 > 7 )
      v7 = 0;
  }
  while ( v7 );
  if ( a2 == 4 )
  {
    sub_6E0BC(46, a1);
    v13 = (1 << SLOBYTE(v15[0])) | a1;
    sub_6E0BC(58, v13);
    v14 = 1 << SBYTE1(v15[0]);
    sub_6E0BC(59, a1 | (1 << SBYTE1(v15[0])));
    return sub_6E0BC(60, v13 | v14);
  }
  else if ( a2 == 8 )
  {
    sub_6E0BC(46, a1);
    v8 = (1 << SLOBYTE(v15[0])) | a1;
    sub_6E0BC(58, v8);
    v9 = a1 | (1 << SBYTE1(v15[0]));
    v10 = (1 << SBYTE1(v15[0])) | v8;
    sub_6E0BC(59, v9);
    v11 = 1 << SBYTE2(v15[0]);
    sub_6E0BC(60, a1 | (1 << SBYTE2(v15[0])));
    sub_6E0BC(61, v10);
    sub_6E0BC(62, v8 | v11);
    sub_6E0BC(63, v9 | v11);
    return sub_6E0BC(64, v11 | v10);
  }
  else
  {
    return sub_6E0BC(46, a1);
  }
}
