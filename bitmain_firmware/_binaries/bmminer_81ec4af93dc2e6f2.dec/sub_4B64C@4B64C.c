int __fastcall sub_4B64C(int result)
{
  int v1; // s0
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int i; // r4
  int v7; // r11
  int v8; // r7
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v12; // r9
  int v13; // r10
  int v14; // r5
  char *v15; // r11
  int v16; // r4
  int v17; // r8
  int v18; // r0
  int v19; // r0
  int v20; // t1
  int v21; // r0
  int v23; // r0
  int v24; // r12
  int v25; // lr
  _DWORD *v26; // r3
  int v27; // r3
  int v28; // [sp+0h] [bp-844h]
  int v29; // [sp+8h] [bp-83Ch]
  int v30; // [sp+10h] [bp-834h]
  int v31; // [sp+14h] [bp-830h]
  int v32; // [sp+1Ch] [bp-828h]
  __time_t v33; // [sp+30h] [bp-814h] BYREF
  int v34; // [sp+34h] [bp-810h]
  __time_t v35[2]; // [sp+38h] [bp-80Ch] BYREF
  char v36[2052]; // [sp+40h] [bp-804h] BYREF

  if ( dword_530F08 && *(_DWORD *)(dword_530F08 + 4) )
  {
    v2 = result;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(v36, "Pattern test start...\n");
      sub_3AF5C(3, v36, 0, *(unsigned __int16 *)"");
    }
    sub_3D7A0(&v33);
    v3 = sub_4A524();
    v4 = sub_5C494(v3);
    sub_5C4C0(v4 | 0x10000);
    v5 = *(_DWORD *)dword_530F08;
    *(_DWORD *)(dword_530F08 + 64) = 1;
    if ( v5 == 161 )
      sub_495A4(v2);
    else
      sub_49658(v2);
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_266F0(i) && *(_DWORD *)(dword_530F08 + 4 * (i + 2)) == 1 )
      {
        v10 = 3;
        do
        {
          if ( sub_4A1EC(i) )
            break;
          usleep((__useconds_t)&off_186A0);
          --v10;
        }
        while ( v10 );
      }
    }
    v7 = 0;
    *(_DWORD *)(dword_530F08 + 64) = 0;
    v8 = sub_49E5C();
    do
    {
      if ( sub_266F0(v7) && *(_DWORD *)(dword_530F08 + 4 * (v7 + 2)) == 1 )
      {
        v30 = sub_26540();
        if ( v30 )
        {
          v31 = v7;
          v32 = v7 << 8;
          v28 = v7 << 6;
          v29 = 0;
          do
          {
            v11 = sub_26550();
            v12 = sub_8C218(v29, v11);
            v13 = sub_26580();
            if ( v13 )
            {
              v14 = 0;
              v15 = (char *)&unk_408FFC + 4096 * (v29 + v32) + v8;
              do
              {
                v16 = v12 * sub_265A0();
                v17 = v14 * sub_265A0();
                ++v14;
                v18 = sub_26580();
                v19 = sub_8C218(v17, v18);
                v20 = *((_DWORD *)v15 + 1);
                v15 += 4;
                v21 = v8 + 4 * (v19 + v16 + v28) + 8429568;
                *(_DWORD *)(v21 + 16) += v20;
                *(_DWORD *)(v8 + 4 * (v12 + v28) + 8430608) += v20;
                ++*(_DWORD *)(v8 + 4 * (9 * v29 + 2304 * v31 + v20) + 0x400000);
              }
              while ( v13 != v14 );
            }
          }
          while ( v30 != ++v29 );
          v7 = v31;
        }
        v23 = sub_26540();
        if ( v23 )
        {
          v24 = v8 + 0x400000 + 9216 * v7;
          v25 = v24 + 36 * v23;
          do
          {
            v26 = (_DWORD *)v24;
            do
            {
              v26[1] += *v26;
              ++v26;
            }
            while ( v26 != (_DWORD *)(v24 + 32) );
            v24 += 36;
          }
          while ( v24 != v25 );
        }
        sub_497D4(v7, v8);
        *(_DWORD *)((char *)&dword_80A894[v7] + v8) = v1;
      }
      ++v7;
    }
    while ( v7 != 4 );
    sub_3D7A0(v35);
    result = v34;
    v9 = v35[0] - v33;
    if ( v35[1] - v34 < 0 )
      --v9;
    if ( (unsigned int)off_AFC24 > 3 )
    {
      snprintf(v36, 0x800u, "Pattern test done, time cost %lds\n", v9);
      return sub_3AF5C(3, v36, 0, v27);
    }
  }
  else if ( (unsigned int)off_AFC24 > 3 )
  {
    strcpy(v36, "Handle is NULL.\n");
    return sub_3AF5C(3, v36, 0, *(int *)"LL.\n");
  }
  return result;
}
