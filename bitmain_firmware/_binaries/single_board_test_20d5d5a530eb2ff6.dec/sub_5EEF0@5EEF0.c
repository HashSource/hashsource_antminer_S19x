void __fastcall sub_5EEF0(int a1, int a2)
{
  float v2; // s0
  size_t v5; // r4
  unsigned int v6; // r2
  unsigned int v7; // r12
  char *v8; // r1
  unsigned int v9; // r3
  int v10; // r0
  char *v11; // r9
  int v12; // r8
  __int16 v13; // r3
  _BYTE v14[4]; // [sp+14h] [bp-194h] BYREF
  int v15; // [sp+18h] [bp-190h] BYREF
  int v16; // [sp+1Ch] [bp-18Ch]
  char v17[392]; // [sp+20h] [bp-188h] BYREF

  v5 = 0;
  sub_1E938(v17, 0x30u);
  printf("%s ", v17);
  printf("%s : chain::%u, pll_id::%u, freq::%.2f, \n\n", "inc_freq_with_fixed_vco", a1, a2, v2);
  snprintf(byte_64B838, 0x100u, "chain::%u, pll_id::%u, freq::%.2f, \n", a1, a2, v2);
  sub_3CC5C((int)byte_64B838, v17);
  v15 = 0;
  LOWORD(v16) = 0;
  memset(v17, 0, sizeof(v17));
  sub_77A24(&v15, v14, 0);
  v6 = (unsigned __int8)v15;
  v7 = BYTE1(v15);
  if ( (unsigned __int8)v15 > 7u )
  {
    qsort(v17, 0, 8u, (__compar_fn_t)sub_5BBF0);
  }
  else
  {
    do
    {
      if ( v7 <= v6 )
      {
        v8 = &v17[8 * v5];
        LOWORD(v9) = v7;
        do
        {
          v10 = (__int16)v9 * (__int16)v6;
          v8[1] = v9;
          v9 = (unsigned __int8)(v9 + 1);
          *v8 = v6;
          ++v5;
          *((_DWORD *)v8 + 1) = v10;
          v8 += 8;
        }
        while ( v6 >= v9 );
      }
      v6 = (unsigned __int8)(v6 + 1);
    }
    while ( v6 != 8 );
    qsort(v17, v5, 8u, (__compar_fn_t)sub_5BBF0);
    if ( v5 )
    {
      v11 = v17;
      v12 = 0;
      do
      {
        while ( 1 )
        {
          v11 += 8;
          BYTE1(v15) = *(v11 - 7);
          v13 = (unsigned __int8)v17[8 * v12++];
          LOBYTE(v15) = v13;
          if ( (float)((float)((float)(25.0 / (float)BYTE2(v15)) * (float)(unsigned __int16)v16)
                     / (float)(v13 * BYTE1(v15))) > 50.0 )
            break;
          if ( v12 == v5 )
            return;
        }
        sub_77BD8(a1, 0, v15, v16);
        usleep((__useconds_t)&loc_186A0);
      }
      while ( v12 != v5 );
    }
  }
}
