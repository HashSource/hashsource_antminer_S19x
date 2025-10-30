int __fastcall sub_15D73C(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r8
  int v6; // r7
  int v7; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r5
  unsigned int v11; // r3
  int v13; // [sp+14h] [bp-10h]
  int v14; // [sp+18h] [bp-Ch]

  v13 = a2;
  v14 = a3;
  if ( a4 < 0x40000000 )
  {
    v10 = a4;
  }
  else
  {
    v5 = a4;
    v6 = a3;
    v7 = a2;
    do
    {
      v5 -= 0x40000000;
      sub_D8934(a1);
      sub_D8AC0(a1);
      sub_D8934(a1);
      sub_D8934(a1);
      sub_D8924(a1);
      v8 = v6;
      v9 = v7;
      v7 += 0x40000000;
      v6 += 0x40000000;
      sub_17AE08(v8, v9);
    }
    while ( v5 >= 0x40000000 );
    v10 = a4 & 0x3FFFFFFF;
    v11 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v14 += v11;
    v13 += v11;
  }
  if ( v10 )
  {
    sub_D8934(a1);
    sub_D8AC0(a1);
    sub_D8934(a1);
    sub_D8934(a1);
    sub_D8924(a1);
    sub_17AE08(v14, v13);
  }
  return 1;
}
