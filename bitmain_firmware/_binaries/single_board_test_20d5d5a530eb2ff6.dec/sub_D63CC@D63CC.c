int __fastcall sub_D63CC(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r0
  void (__fastcall *v7)(int, int, unsigned int, int, int); // r4
  int v8; // r8
  int v9; // r0
  int v11; // r4
  int v12; // r4
  int v13; // r5
  unsigned int v14; // r6
  int v15; // r1
  int v16; // r0
  unsigned int v17; // r3

  v6 = sub_D8934(a1);
  v7 = *(void (__fastcall **)(int, int, unsigned int, int, int))(v6 + 384);
  v8 = v6;
  if ( v7 )
  {
    v9 = sub_D8AC0(a1);
    v7(a3, a2, a4, v8, v9);
    return 1;
  }
  if ( a4 >= 0x40000000 )
  {
    v12 = a2;
    v13 = a3;
    v14 = a4;
    do
    {
      v14 -= 0x40000000;
      sub_D8AC0(a1);
      sub_D8924(a1);
      v15 = v12;
      v16 = v13;
      v12 += 0x40000000;
      v13 += 0x40000000;
      sub_13EC4C(v16, v15);
    }
    while ( v14 >= 0x40000000 );
    v11 = a4 & 0x3FFFFFFF;
    v17 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a3 += v17;
    a2 += v17;
  }
  else
  {
    v11 = a4;
  }
  if ( !v11 )
    return 1;
  sub_D8AC0(a1);
  sub_D8924(a1);
  sub_13EC4C(a3, a2);
  return 1;
}
