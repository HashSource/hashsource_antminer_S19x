int __fastcall sub_D352C(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v6; // r7
  int v7; // r6
  int v8; // r5
  int v9; // r11
  int v10; // r0
  int v11; // r1
  int v12; // r5
  unsigned int v13; // r3
  int v14; // r8
  int v15; // r0
  int v17; // [sp+14h] [bp-18h]
  int v18; // [sp+18h] [bp-14h]
  int v19; // [sp+24h] [bp-8h] BYREF

  v17 = a2;
  v18 = a3;
  if ( a4 < 0x40000000 )
  {
    v12 = a4;
  }
  else
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v19 = sub_D8AC8(a1);
      v9 = sub_D8934(a1);
      v10 = sub_D8AC0(a1);
      v11 = v8;
      v8 += 0x40000000;
      sub_E8E40(v7, v11, 0x40000000, v9, v10, &v19, aria_encrypt);
      sub_D8ACC(a1, v19);
      v7 += 0x40000000;
    }
    while ( v6 >= 0x40000000 );
    v12 = a4 & 0x3FFFFFFF;
    v13 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v18 += v13;
    v17 += v13;
  }
  if ( v12 )
  {
    v19 = sub_D8AC8(a1);
    v14 = sub_D8934(a1);
    v15 = sub_D8AC0(a1);
    sub_E8E40(v18, v17, v12, v14, v15, &v19, aria_encrypt);
    sub_D8ACC(a1, v19);
  }
  return 1;
}
