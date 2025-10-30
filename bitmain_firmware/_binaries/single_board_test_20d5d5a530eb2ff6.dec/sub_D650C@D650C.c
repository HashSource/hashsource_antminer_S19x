int __fastcall sub_D650C(int a1, int a2, int a3, unsigned int a4)
{
  int v5; // r7
  int v6; // r6
  unsigned int v7; // r8
  int v8; // r1
  int v9; // r5
  unsigned int v10; // r3
  int v12; // [sp+1Ch] [bp-18h]
  int v13; // [sp+20h] [bp-14h]
  int v15; // [sp+2Ch] [bp-8h]
  int v16; // [sp+2Ch] [bp-8h]

  v12 = a2;
  v13 = a3;
  if ( a4 < 0x40000000 )
  {
    v9 = a4;
  }
  else
  {
    v5 = a3;
    v6 = a2;
    v7 = a4;
    do
    {
      v7 -= 0x40000000;
      v15 = sub_D8AC8(a1);
      sub_D8934(a1);
      sub_D8934(a1);
      sub_D8934(a1);
      sub_D8AC0(a1);
      sub_D8924(a1);
      v8 = v6;
      v6 += 0x40000000;
      sub_13BB38(v5, v8);
      sub_D8ACC(a1, v15);
      v5 += 0x40000000;
    }
    while ( v7 >= 0x40000000 );
    v9 = a4 & 0x3FFFFFFF;
    v10 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v13 += v10;
    v12 += v10;
  }
  if ( v9 )
  {
    v16 = sub_D8AC8(a1);
    sub_D8934(a1);
    sub_D8934(a1);
    sub_D8934(a1);
    sub_D8AC0(a1);
    sub_D8924(a1);
    sub_13BB38(v13, v12);
    sub_D8ACC(a1, v16);
  }
  return 1;
}
