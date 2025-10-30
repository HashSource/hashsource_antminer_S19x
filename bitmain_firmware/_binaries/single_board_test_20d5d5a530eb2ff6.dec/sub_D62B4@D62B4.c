int __fastcall sub_D62B4(int a1, int a2, int a3, unsigned int a4)
{
  int v8; // r0
  void (__fastcall *v9)(int, int, unsigned int, int, int); // r5
  int v10; // r6
  int v11; // r0
  unsigned int v13; // r7
  int v14; // r6
  int v15; // r5
  int v16; // r1
  int v17; // r0
  unsigned int v18; // r3
  int v19; // [sp+Ch] [bp-8h]

  v19 = a3;
  v8 = sub_D8934(a1);
  v9 = *(void (__fastcall **)(int, int, unsigned int, int, int))(v8 + 128);
  if ( v9 )
  {
    v10 = v8;
    v11 = sub_D8AC0(a1);
    v9(v19, a2, a4, v10, v11);
    return 1;
  }
  if ( a4 < 0x40000000 )
  {
    if ( !a4 )
      return 1;
  }
  else
  {
    v13 = a4;
    v14 = a2;
    v15 = a3;
    do
    {
      v13 -= 0x40000000;
      sub_D8934(a1);
      sub_D8AC0(a1);
      sub_D8924(a1);
      v16 = v14;
      v17 = v15;
      v14 += 0x40000000;
      v15 += 0x40000000;
      sub_13E928(v17, v16);
    }
    while ( v13 >= 0x40000000 );
    v18 = ((a4 - 0x40000000) & 0xC0000000) + 0x40000000;
    a2 += v18;
    v19 += v18;
    if ( (a4 & 0x3FFFFFFF) == 0 )
      return 1;
  }
  sub_D8934(a1);
  sub_D8AC0(a1);
  sub_D8924(a1);
  sub_13E928(v19, a2);
  return 1;
}
