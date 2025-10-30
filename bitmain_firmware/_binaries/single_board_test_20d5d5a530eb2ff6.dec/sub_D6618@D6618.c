int __fastcall sub_D6618(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r7
  int v6; // r6
  int v7; // r5
  int v8; // r10
  int v9; // r11
  int v10; // r9
  int v11; // r0
  int v12; // r5
  unsigned int v13; // r3
  int v14; // r9
  int v15; // r6
  int v16; // r7
  int v17; // r0
  int v19; // [sp+14h] [bp-18h]
  int v20; // [sp+18h] [bp-14h]
  int v22; // [sp+24h] [bp-8h] BYREF

  v4 = a4;
  v19 = a2;
  v20 = a3;
  if ( a4 < 0x40000000 )
  {
    v12 = a4;
  }
  else
  {
    v6 = a3;
    v7 = a2;
    do
    {
      v4 -= 0x40000000;
      v22 = sub_D8AC8(a1);
      v8 = sub_D8934(a1);
      v9 = sub_D8934(a1);
      v10 = sub_D8934(a1);
      v11 = sub_D8AC0(a1);
      sub_13F03C(v6, v7, 0x40000000, v8, v9 + 128, v10 + 256, v11, &v22);
      sub_D8ACC(a1, v22);
      v7 += 0x40000000;
      v6 += 0x40000000;
    }
    while ( v4 >= 0x40000000 );
    v12 = a4 & 0x3FFFFFFF;
    v13 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v20 += v13;
    v19 += v13;
  }
  if ( v12 )
  {
    v22 = sub_D8AC8(a1);
    v14 = sub_D8934(a1);
    v15 = sub_D8934(a1);
    v16 = sub_D8934(a1);
    v17 = sub_D8AC0(a1);
    sub_13F03C(v20, v19, v12, v14, v15 + 128, v16 + 256, v17, &v22);
    sub_D8ACC(a1, v22);
  }
  return 1;
}
