int __fastcall sub_39574(int a1, unsigned int a2, int a3, unsigned int a4)
{
  int v5; // r0
  int j; // r4
  int v7; // r0
  int v8; // r4
  int v9; // r9
  int v10; // r3
  int v11; // r4
  int v12; // r5
  float v13; // s0
  int v14; // r2
  bool v15; // cc
  int v16; // r1
  int v17; // r5
  int v19; // r4
  unsigned int v20; // [sp+14h] [bp-828h]
  int v21; // [sp+18h] [bp-824h]
  unsigned int i; // [sp+34h] [bp-808h] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  v21 = a1;
  if ( (unsigned int)dword_9E31C > 3 )
  {
    snprintf(s, 0x800u, "freq_prev = %d, freq_start = %d, freq_step = %d, freq_max = %d\n", a1, a2, a3, a4);
    sub_47AB4(3, s, 0);
  }
  for ( i = a2; i <= a4; i += a3 )
  {
    if ( (unsigned int)dword_9E31C <= 3 || (strcpy(s, "\n"), sub_47EC8(3, s, 0), (unsigned int)dword_9E31C <= 3) )
    {
      v5 = sub_37F50();
      if ( !v5 )
        goto LABEL_36;
    }
    else
    {
      snprintf(s, 0x800u, ">>>> freq_curr = %d\n", i);
      sub_47AB4(3, s, 0);
      v5 = sub_37F50();
      if ( !v5 )
      {
LABEL_36:
        if ( (unsigned int)dword_9E31C <= 3 )
          return 0;
        v19 = v5;
        strcpy(s, "All ready chain done, exit.\n");
        sub_47AB4(3, s, v5);
        return v19;
      }
    }
    for ( j = 0; j != 16; ++j )
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * j + 4) != 1 || sub_37D44(j) != 1 )
      {
        if ( ++j == 16 )
          goto LABEL_11;
      }
      v7 = j;
      sub_30B64(v7, (unsigned __int8)byte_A0D79, v21, i, dword_9C298, *(_BYTE *)(*(_DWORD *)dword_1AEA7C + 21));
    }
LABEL_11:
    v21 = i;
    v8 = sub_3954C();
    if ( v8 )
    {
      if ( (unsigned int)dword_9E31C <= 3 )
        return v8;
      strcpy(s, "Set voltage failed, exit.\n");
      sub_47AB4(3, s, 0);
      return v8;
    }
    sub_22E9C(i, 8, 20);
    sub_39138((int)&i);
    v9 = sub_37770();
    v20 = i;
    v10 = dword_A0D68;
    do
    {
      while ( *(_DWORD *)(v10 + 4 * v8 + 4) != 1 )
      {
        if ( ++v8 == 16 )
          goto LABEL_18;
      }
      if ( sub_37D44(v8) == 1 )
        sub_3883C(v8, v9);
      ++v8;
      v10 = dword_A0D68;
    }
    while ( v8 != 16 );
LABEL_18:
    v11 = 0;
    while ( 1 )
    {
      v12 = 4 * v11;
      if ( *(_DWORD *)(v10 + 4 * v11 + 4) == 1 && sub_37D44(v11) == 1 )
        break;
      if ( ++v11 == 16 )
        goto LABEL_30;
LABEL_20:
      v10 = dword_A0D68;
    }
    v13 = *(float *)(*(_DWORD *)dword_1AEA7C + 28);
    if ( sub_3816C(v11) )
      goto LABEL_33;
    v14 = dword_1AEA7C;
    v15 = (unsigned int)dword_9E31C > 3;
    v16 = dword_1AEA7C + v12;
    *(_DWORD *)(v16 + 4) = v20;
    *(_DWORD *)(v16 + 68) = 1;
    if ( v15 )
    {
      snprintf(s, 0x800u, "Valid freq, chain = %d, freq_result = %d.\n", v11, v20);
      sub_47AB4(3, s, 0);
      v14 = dword_1AEA7C;
    }
    if ( *(_DWORD *)(v14 + v12 + 4) >= *(_DWORD *)(*(_DWORD *)v14 + 8) )
LABEL_33:
      sub_37BD4(v11, 2);
    sub_38ECC(v11++);
    v17 = dword_1AEA7C + v12;
    if ( v13 > *(float *)(v17 + 132) )
      *(float *)(v17 + 132) = v13;
    if ( v11 != 16 )
      goto LABEL_20;
LABEL_30:
    ;
  }
  return 0;
}
