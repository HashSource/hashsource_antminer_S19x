int __fastcall sub_11CD04(int a1, _DWORD *a2, int a3, int a4)
{
  signed int i; // r11
  signed int **v7; // r0
  signed int *v8; // r8
  signed int **v9; // r6
  signed int v10; // r5
  signed int *v11; // r5
  char **v12; // r10
  signed int *v13; // r3
  int v14; // r5
  signed int *v15; // r8
  int v16; // r1
  signed int v17; // r5
  signed int *v18; // r6
  int v19; // r0
  _DWORD *v21; // r8
  int v22; // r0
  signed int v24[5]; // [sp+2Ch] [bp-18h] BYREF

  for ( i = 0; i < sub_10C010((int)a2); ++i )
  {
    sub_B6C30(a3, (int)"\n");
    v7 = (signed int **)sub_10C01C(a2, i);
    v8 = *v7;
    v9 = v7;
    if ( *v7 )
    {
      v10 = *v8;
      if ( *v8 )
      {
        v24[0] = v8[1];
        sub_B550C(a3, "%*sRelative Name:\n%*s", a4, &byte_1A4198, a4 + 2, &byte_1A4198);
        sub_129FD4(a3, v24, 0, 8520479);
        sub_B6C30(a3, (int)"\n");
      }
      else
      {
        sub_B550C(a3, "%*sFull Name:\n", a4, &byte_1A4198);
        v21 = (_DWORD *)v8[1];
        while ( v10 < sub_10C010((int)v21) )
        {
          sub_B550C(a3, (unsigned __int8 *)"%*s", a4 + 2, &byte_1A4198);
          v22 = sub_10C01C(v21, v10);
          sub_16FDE0(a3, v22);
          ++v10;
          sub_B6C30(a3, (int)"\n");
        }
      }
    }
    v11 = v9[1];
    if ( v11 )
    {
      v12 = off_20F938;
      sub_B550C(a3, "%*s%s:\n%*s", a4, &byte_1A4198, "Reasons", a4 + 2, &byte_1A4198);
      v13 = v11;
      v14 = 1;
      v15 = v13;
      do
      {
        v16 = (int)*(v12 - 19);
        __pld(v12);
        if ( sub_125ADC(v15, v16) )
        {
          if ( !v14 )
            sub_B6C30(a3, (int)", ");
          v14 = 0;
          sub_B6C30(a3, (int)*(v12 - 18));
        }
        v12 += 3;
      }
      while ( *(v12 - 18) );
      if ( v14 )
        sub_B6C30(a3, (int)"<EMPTY>\n");
      else
        sub_B6C30(a3, (int)"\n");
    }
    if ( v9[2] )
    {
      v17 = 0;
      sub_B550C(a3, "%*sCRL Issuer:\n", a4, &byte_1A4198);
      v18 = v9[2];
      while ( v17 < sub_10C010((int)v18) )
      {
        sub_B550C(a3, (unsigned __int8 *)"%*s", a4 + 2, &byte_1A4198);
        v19 = sub_10C01C(v18, v17);
        sub_16FDE0(a3, v19);
        ++v17;
        sub_B6C30(a3, (int)"\n");
      }
    }
  }
  return 1;
}
