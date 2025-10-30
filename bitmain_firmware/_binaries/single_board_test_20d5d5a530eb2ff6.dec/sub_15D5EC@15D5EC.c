int __fastcall sub_15D5EC(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v6; // r5
  unsigned int v7; // r7
  int v8; // r11
  unsigned int v9; // r8
  unsigned int v10; // r3
  int v12; // r7
  unsigned int v13; // r6
  unsigned int v14; // [sp+Ch] [bp-10h]
  unsigned int v15; // [sp+10h] [bp-Ch]
  unsigned int v16; // [sp+14h] [bp-8h]

  v15 = a2;
  v6 = a4;
  v16 = a3;
  if ( a4 >= 0x40000000 )
  {
    v7 = a3;
    v14 = a2;
    do
    {
      v8 = sub_D8934(a1);
      v9 = sub_D8AC0(a1);
      if ( sub_D8924(a1) )
        sub_E1AB0(v7, v14, 0x40000000u, v8, v9, (int (__fastcall *)(int *, int *, int))SM4_encrypt);
      else
        sub_E1D38(v7, v14, 0x40000000u, v8, v9, (void (__fastcall *)(unsigned int, int *, int))SM4_decrypt);
      v6 -= 0x40000000;
      v7 += 0x40000000;
      v14 += 0x40000000;
    }
    while ( v6 >= 0x40000000 );
    v6 = a4 & 0x3FFFFFFF;
    v10 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    v16 += v10;
    v15 += v10;
  }
  if ( v6 )
  {
    v12 = sub_D8934(a1);
    v13 = sub_D8AC0(a1);
    if ( sub_D8924(a1) )
      sub_E1AB0(v16, v15, v6, v12, v13, (int (__fastcall *)(int *, int *, int))SM4_encrypt);
    else
      sub_E1D38(v16, v15, v6, v12, v13, (void (__fastcall *)(unsigned int, int *, int))SM4_decrypt);
  }
  return 1;
}
