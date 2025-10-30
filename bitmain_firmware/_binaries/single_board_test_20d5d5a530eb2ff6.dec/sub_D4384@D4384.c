int __fastcall sub_D4384(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r11
  int v10; // r8
  int v11; // r5
  unsigned int v12; // r3
  int v14; // r7
  int v15; // r6
  int v16; // [sp+Ch] [bp-10h]
  int v17; // [sp+10h] [bp-Ch]

  v16 = a2;
  v17 = a3;
  if ( a4 < 0x40000000 )
  {
    v11 = a4;
  }
  else
  {
    v6 = a4;
    v7 = a3;
    v8 = a2;
    do
    {
      v9 = sub_D8934(a1);
      v10 = sub_D8AC0(a1);
      if ( sub_D8924(a1) )
        sub_E1AB0(v7, v8, 0x40000000, v9, v10, aria_encrypt);
      else
        sub_E1D38(v7, v8, 0x40000000, v9, v10, aria_encrypt);
      v6 -= 0x40000000;
      v7 += 0x40000000;
      v8 += 0x40000000;
    }
    while ( v6 >= 0x40000000 );
    v11 = a4 & 0x3FFFFFFF;
    v12 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v17 += v12;
    v16 += v12;
  }
  if ( v11 )
  {
    v14 = sub_D8934(a1);
    v15 = sub_D8AC0(a1);
    if ( sub_D8924(a1) )
      sub_E1AB0(v17, v16, v11, v14, v15, aria_encrypt);
    else
      sub_E1D38(v17, v16, v11, v14, v15, aria_encrypt);
  }
  return 1;
}
