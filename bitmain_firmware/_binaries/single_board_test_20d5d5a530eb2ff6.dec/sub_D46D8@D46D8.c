int __fastcall sub_D46D8(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r4
  unsigned int v6; // r5
  int v9; // r11
  int v10; // r9
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v15; // [sp+1Ch] [bp-8h] BYREF

  if ( a4 >= 0x40000000 )
    v5 = 0x40000000;
  else
    v5 = a4;
  if ( a4 )
  {
    v6 = a4;
    do
    {
      v6 -= v5;
      v15 = sub_D8AC8(a1);
      v9 = sub_D8934(a1);
      v10 = sub_D8AC0(a1);
      v11 = sub_D8924(a1);
      v12 = a2;
      a2 += v5;
      sub_E45C0(a3, v12, v5, v9, v10, &v15, v11, aria_encrypt);
      a3 += v5;
      if ( v5 >= v6 )
        v5 = v6;
      sub_D8ACC(a1, v15);
      v13 = v6;
      if ( v6 )
        v13 = 1;
      if ( v6 < v5 )
        v13 = 0;
    }
    while ( v13 );
  }
  return 1;
}
