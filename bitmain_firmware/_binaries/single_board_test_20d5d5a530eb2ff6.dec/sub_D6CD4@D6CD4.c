int __fastcall sub_D6CD4(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r11
  unsigned int v7; // r7
  int v8; // r6
  int v9; // r5
  int v10; // r1
  int v11; // r0
  int v12; // r5
  unsigned int v13; // r3
  int v15; // [sp+Ch] [bp-8h]

  v6 = a2;
  v15 = a3;
  if ( a4 < 0x40000000 )
  {
    v12 = a4;
  }
  else
  {
    v7 = a4;
    v8 = a3;
    v9 = a2;
    do
    {
      v7 -= 0x40000000;
      sub_D8934(a1);
      sub_D8AC0(a1);
      sub_D8924(a1);
      v10 = v9;
      v11 = v8;
      v9 += 0x40000000;
      v8 += 0x40000000;
      sub_DD1F0(v11, v10);
    }
    while ( v7 >= 0x40000000 );
    v12 = a4 & 0x3FFFFFFF;
    v13 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v6 += v13;
    v15 += v13;
  }
  if ( v12 )
  {
    sub_D8934(a1);
    sub_D8AC0(a1);
    sub_D8924(a1);
    sub_DD1F0(v15, v6);
  }
  return 1;
}
