int __fastcall sub_D6840(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v4; // r7
  int v6; // r6
  int v7; // r5
  int v8; // r10
  int v9; // r11
  int v10; // r9
  int v11; // r8
  int v12; // r0
  int v13; // r1
  int v14; // r5
  unsigned int v15; // r2
  int v16; // r9
  int v17; // r6
  int v18; // r8
  int v19; // r7
  int v20; // r0
  int v22; // [sp+1Ch] [bp-10h]
  int v23; // [sp+20h] [bp-Ch]

  v4 = a4;
  v22 = a2;
  v23 = a3;
  if ( a4 < 0x40000000 )
  {
    v14 = a4;
  }
  else
  {
    v6 = a3;
    v7 = a2;
    do
    {
      v4 -= 0x40000000;
      v8 = sub_D8934(a1);
      v9 = sub_D8934(a1);
      v10 = sub_D8934(a1);
      v11 = sub_D8AC0(a1);
      v12 = sub_D8924(a1);
      v13 = v7;
      v7 += 0x40000000;
      sub_13BC30(v6, v13, 8, 0x40000000, v8, v9 + 128, v10 + 256, v11, v12);
      v6 += 0x40000000;
    }
    while ( v4 >= 0x40000000 );
    v14 = a4 & 0x3FFFFFFF;
    v15 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v23 += v15;
    v22 += v15;
  }
  if ( v14 )
  {
    v16 = sub_D8934(a1);
    v17 = sub_D8934(a1);
    v18 = sub_D8934(a1);
    v19 = sub_D8AC0(a1);
    v20 = sub_D8924(a1);
    sub_13BC30(v23, v22, 8, v14, v16, v17 + 128, v18 + 256, v19, v20);
  }
  return 1;
}
