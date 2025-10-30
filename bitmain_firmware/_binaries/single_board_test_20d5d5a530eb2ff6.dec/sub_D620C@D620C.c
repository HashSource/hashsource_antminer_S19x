int __fastcall sub_D620C(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r11
  unsigned int v7; // r7
  int v8; // r6
  int v9; // r5
  int v10; // r10
  int v11; // r8
  int v12; // r0
  int v13; // r1
  int v14; // r5
  unsigned int v15; // r3
  int v16; // r7
  int v17; // r6
  int v18; // r0
  int v20; // [sp+14h] [bp-8h]

  v6 = a2;
  v20 = a3;
  if ( a4 < 0x40000000 )
  {
    v14 = a4;
  }
  else
  {
    v7 = a4;
    v8 = a3;
    v9 = a2;
    do
    {
      v7 -= 0x40000000;
      v10 = sub_D8934(a1);
      v11 = sub_D8AC0(a1);
      v12 = sub_D8924(a1);
      v13 = v9;
      v9 += 0x40000000;
      sub_13C2F0(v8, v13, 8, 0x40000000, v10, v11, v12);
      v8 += 0x40000000;
    }
    while ( v7 >= 0x40000000 );
    v14 = a4 & 0x3FFFFFFF;
    v15 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v6 += v15;
    v20 += v15;
  }
  if ( v14 )
  {
    v16 = sub_D8934(a1);
    v17 = sub_D8AC0(a1);
    v18 = sub_D8924(a1);
    sub_13C2F0(v20, v6, 8, v14, v16, v17, v18);
  }
  return 1;
}
