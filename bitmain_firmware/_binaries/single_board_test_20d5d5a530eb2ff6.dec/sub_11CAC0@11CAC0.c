int __fastcall sub_11CAC0(int a1, int a2, int a3, int a4)
{
  signed int *v5; // r6
  signed int v8; // r4
  int v9; // r6
  int v10; // r8
  char **v11; // r4
  int v12; // r1
  _DWORD *v14; // r6
  int v15; // r0
  signed int v16[5]; // [sp+14h] [bp-18h] BYREF

  v5 = *(signed int **)a2;
  if ( *(_DWORD *)a2 )
  {
    v8 = *v5;
    if ( *v5 )
    {
      v16[0] = v5[1];
      sub_B550C(a3, "%*sRelative Name:\n%*s", a4, &byte_1A4198, a4 + 2, &byte_1A4198);
      sub_129FD4(a3, v16, 0, 8520479);
      sub_B6C30(a3, (int)"\n");
    }
    else
    {
      sub_B550C(a3, "%*sFull Name:\n", a4, &byte_1A4198);
      v14 = (_DWORD *)v5[1];
      while ( v8 < sub_10C010((int)v14) )
      {
        sub_B550C(a3, (unsigned __int8 *)"%*s", a4 + 2, &byte_1A4198);
        v15 = sub_10C01C(v14, v8);
        sub_16FDE0(a3, v15);
        ++v8;
        sub_B6C30(a3, (int)"\n");
      }
    }
  }
  if ( *(int *)(a2 + 4) > 0 )
    sub_B550C(a3, "%*sOnly User Certificates\n", a4, &byte_1A4198);
  if ( *(int *)(a2 + 8) > 0 )
    sub_B550C(a3, "%*sOnly CA Certificates\n", a4, &byte_1A4198);
  if ( *(int *)(a2 + 16) > 0 )
    sub_B550C(a3, "%*sIndirect CRL\n", a4, &byte_1A4198);
  v9 = *(_DWORD *)(a2 + 12);
  if ( v9 )
  {
    v10 = 1;
    v11 = off_20F938;
    sub_B550C(a3, "%*s%s:\n%*s", a4, &byte_1A4198, "Only Some Reasons", a4 + 2, &byte_1A4198);
    do
    {
      v12 = (int)*(v11 - 19);
      __pld(v11);
      if ( sub_125ADC(v9, v12) )
      {
        if ( !v10 )
          sub_B6C30(a3, (int)", ");
        v10 = 0;
        sub_B6C30(a3, (int)*(v11 - 18));
      }
      v11 += 3;
    }
    while ( *(v11 - 18) );
    if ( v10 )
      sub_B6C30(a3, (int)"<EMPTY>\n");
    else
      sub_B6C30(a3, (int)"\n");
  }
  if ( *(int *)(a2 + 20) > 0 )
    sub_B550C(a3, "%*sOnly Attribute Certificates\n", a4, &byte_1A4198);
  if ( !*(_DWORD *)a2
    && *(int *)(a2 + 4) <= 0
    && *(int *)(a2 + 8) <= 0
    && *(int *)(a2 + 16) <= 0
    && !*(_DWORD *)(a2 + 12)
    && *(int *)(a2 + 20) <= 0 )
  {
    sub_B550C(a3, "%*s<EMPTY>\n", a4, &byte_1A4198);
  }
  return 1;
}
