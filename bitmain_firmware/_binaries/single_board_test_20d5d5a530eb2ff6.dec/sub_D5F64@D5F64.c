int __fastcall sub_D5F64(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v6; // r7
  int v7; // r6
  int v8; // r5
  int v9; // r1
  int v10; // r5
  unsigned int v11; // r3
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+1Ch] [bp-8h]
  int v16; // [sp+1Ch] [bp-8h]

  v13 = a2;
  v14 = a3;
  if ( a4 < 0x40000000 )
  {
    v10 = a4;
  }
  else
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v6 -= 0x40000000;
      v15 = sub_D8AC8(a1);
      sub_D8934(a1);
      sub_D8AC0(a1);
      sub_D8924(a1);
      v9 = v8;
      v8 += 0x40000000;
      sub_13C204(v7, v9);
      sub_D8ACC(a1, v15);
      v7 += 0x40000000;
    }
    while ( v6 >= 0x40000000 );
    v10 = a4 & 0x3FFFFFFF;
    v11 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v14 += v11;
    v13 += v11;
  }
  if ( v10 )
  {
    v16 = sub_D8AC8(a1);
    sub_D8934(a1);
    sub_D8AC0(a1);
    sub_D8924(a1);
    sub_13C204(v14, v13);
    sub_D8ACC(a1, v16);
  }
  return 1;
}
