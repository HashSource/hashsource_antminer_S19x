int __fastcall sub_D3614(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int v5; // r4
  unsigned int v6; // r6
  int v9; // r9
  int v10; // r10
  int v11; // r11
  int v12; // r0
  int v13; // r1
  int v14; // r3
  int v16; // [sp+1Ch] [bp-8h] BYREF

  if ( a4 >= 0x8000000 )
    v5 = 0x8000000;
  else
    v5 = a4;
  if ( a4 )
  {
    v6 = a4;
    do
    {
      v9 = v5;
      v16 = sub_D8AC8(a1);
      if ( !sub_D8E10(a1, 0x2000) )
        v9 = 8 * v5;
      v10 = sub_D8934(a1);
      v11 = sub_D8AC0(a1);
      v12 = sub_D8924(a1);
      v6 -= v5;
      v13 = a2;
      a2 += v5;
      sub_E442C(a3, v13, v9, v10, v11, &v16, v12, aria_encrypt);
      a3 += v5;
      if ( v5 >= v6 )
        v5 = v6;
      sub_D8ACC(a1, v16);
      v14 = v6;
      if ( v6 )
        v14 = 1;
      if ( v5 > v6 )
        v14 = 0;
    }
    while ( v14 );
  }
  return 1;
}
