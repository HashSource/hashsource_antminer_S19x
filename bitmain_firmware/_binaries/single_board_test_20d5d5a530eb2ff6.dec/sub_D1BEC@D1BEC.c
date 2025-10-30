int __fastcall sub_D1BEC(int a1, int a2, int a3, unsigned int a4)
{
  int v6; // r8
  int v7; // r6
  int v8; // r6
  unsigned int v9; // r7
  int v10; // r5
  int v11; // r11
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r3
  int v16; // r5
  int v17; // r0
  int v18; // r7
  int v19; // r0
  int v22; // [sp+1Ch] [bp-8h] BYREF

  v6 = sub_D8934(a1);
  if ( sub_D8E10(a1, 0x2000) )
  {
    v22 = sub_D8AC8(a1);
    v18 = sub_D8AC0(a1);
    v19 = sub_D8924(a1);
    sub_E442C(a3, a2, a4, v6, v18, &v22, v19, *(_DWORD *)(v6 + 248));
    sub_D8ACC(a1, v22);
    return 1;
  }
  else
  {
    if ( a4 >= 0x10000000 )
    {
      v8 = a3;
      v9 = a4;
      v10 = a2;
      do
      {
        v9 -= 0x10000000;
        v22 = sub_D8AC8(a1);
        v11 = sub_D8AC0(a1);
        v12 = sub_D8924(a1);
        v13 = v10;
        v10 += 0x10000000;
        sub_E442C(v8, v13, 0x80000000, v6, v11, &v22, v12, *(_DWORD *)(v6 + 248));
        sub_D8ACC(a1, v22);
        v8 += 0x10000000;
      }
      while ( v9 >= 0x10000000 );
      v7 = a4 & 0xFFFFFFF;
      v14 = ((a4 - 0x10000000) & 0xF0000000) + 0x10000000;
      a2 += v14;
      a3 += v14;
    }
    else
    {
      v7 = a4;
    }
    if ( v7 )
    {
      v22 = sub_D8AC8(a1);
      v16 = sub_D8AC0(a1);
      v17 = sub_D8924(a1);
      sub_E442C(a3, a2, 8 * v7, v6, v16, &v22, v17, *(_DWORD *)(v6 + 248));
      sub_D8ACC(a1, v22);
    }
    return 1;
  }
}
