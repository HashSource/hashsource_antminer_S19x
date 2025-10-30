int __fastcall sub_D6038(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r11
  unsigned int v7; // r7
  int v8; // r6
  int v9; // r5
  int v10; // r10
  int v11; // r0
  int v12; // r1
  int v13; // r5
  unsigned int v14; // r3
  int v15; // r7
  int v16; // r0
  int v18; // [sp+Ch] [bp-10h]
  int v19; // [sp+14h] [bp-8h] BYREF

  v6 = a2;
  v18 = a3;
  if ( a4 < 0x40000000 )
  {
    v13 = a4;
  }
  else
  {
    v7 = a4;
    v8 = a3;
    v9 = a2;
    do
    {
      v7 -= 0x40000000;
      v19 = sub_D8AC8(a1);
      v10 = sub_D8934(a1);
      v11 = sub_D8AC0(a1);
      v12 = v9;
      v9 += 0x40000000;
      sub_13F140(v8, v12, 0x40000000, v10, v11, &v19);
      sub_D8ACC(a1, v19);
      v8 += 0x40000000;
    }
    while ( v7 >= 0x40000000 );
    v13 = a4 & 0x3FFFFFFF;
    v14 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v6 += v14;
    v18 += v14;
  }
  if ( v13 )
  {
    v19 = sub_D8AC8(a1);
    v15 = sub_D8934(a1);
    v16 = sub_D8AC0(a1);
    sub_13F140(v18, v6, v13, v15, v16, &v19);
    sub_D8ACC(a1, v19);
  }
  return 1;
}
