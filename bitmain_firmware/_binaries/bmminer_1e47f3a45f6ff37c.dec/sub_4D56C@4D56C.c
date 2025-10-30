int __fastcall sub_4D56C(int result)
{
  int v1; // s0
  int v2; // r4
  int v3; // r0
  int v4; // r0
  int v5; // r2
  int i; // r4
  int v7; // r11
  int v8; // r3
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v12; // r8
  int v13; // r5
  char *v14; // r7
  int v15; // r6
  int v16; // r4
  int v17; // r10
  int v18; // r0
  int v19; // r0
  int v20; // t1
  int v21; // r0
  int v22; // r0
  _DWORD *v23; // r12
  _DWORD *v24; // r3
  int v25; // t1
  int v26; // [sp+4h] [bp-848h]
  int v27; // [sp+Ch] [bp-840h]
  int j; // [sp+10h] [bp-83Ch]
  _DWORD *v29; // [sp+14h] [bp-838h]
  int v30; // [sp+18h] [bp-834h]
  char *v31; // [sp+1Ch] [bp-830h]
  char *v32; // [sp+20h] [bp-82Ch]
  int v33; // [sp+28h] [bp-824h]
  __time_t v34[2]; // [sp+38h] [bp-814h] BYREF
  __time_t v35[2]; // [sp+40h] [bp-80Ch] BYREF
  char v36[2052]; // [sp+48h] [bp-804h] BYREF

  if ( dword_535D94 && *(_DWORD *)(dword_535D94 + 4) )
  {
    v2 = result;
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(v36, "Pattern test start...\n");
      sub_3B6AC(3, v36, 0, *(unsigned __int16 *)"");
    }
    sub_3DFCC(v34);
    v3 = sub_4C420();
    v4 = sub_6AC80(v3);
    sub_6ACAC(v4 | 0x10000);
    v5 = *(_DWORD *)dword_535D94;
    *(_DWORD *)(dword_535D94 + 64) = 1;
    if ( v5 == 161 )
      sub_4B3A8(v2);
    else
      sub_4B484(v2);
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_26C0C(i) && *(_DWORD *)(dword_535D94 + 4 * (i + 2)) == 1 )
      {
        v10 = 3;
        do
        {
          if ( sub_4C0C4(i) )
            break;
          usleep(0x186A0u);
          --v10;
        }
        while ( v10 );
      }
    }
    v27 = 0;
    *(_DWORD *)(dword_535D94 + 64) = 0;
    v7 = sub_4BCE4();
    v29 = (_DWORD *)((char *)&unk_80A894 + v7);
    v31 = (char *)&unk_408FFC + v7;
    v30 = v7 + 0x400000;
    do
    {
      if ( sub_26C0C(v27) && *(_DWORD *)(dword_535D94 + 4 * (v27 + 2)) == 1 )
      {
        v33 = sub_26A44();
        if ( v33 )
        {
          v32 = v31;
          for ( j = 0; j != v33; ++j )
          {
            v11 = sub_26A54();
            v12 = sub_8F588(j, v11);
            v26 = sub_26A84();
            if ( v26 )
            {
              v13 = 0;
              v14 = v32;
              do
              {
                v16 = v12 * sub_26AA4();
                v17 = v13 * sub_26AA4();
                v18 = sub_26A84();
                ++v13;
                v19 = sub_8F588(v17, v18);
                v20 = *((_DWORD *)v14 + 1);
                v14 += 4;
                v21 = v7 + 4 * (v19 + v16 + (v27 << 6)) + 8429568;
                *(_DWORD *)(v21 + 16) += v20;
                v15 = v7 + 4 * (v12 + (v27 << 6)) + 8429568;
                *(_DWORD *)(v15 + 1040) += v20;
                ++*(_DWORD *)(v7 + 4 * (v20 + 9 * j + 2304 * v27) + 0x400000);
              }
              while ( v26 != v13 );
            }
            v32 += 4096;
          }
        }
        v22 = sub_26A44();
        if ( v22 )
        {
          v23 = (_DWORD *)v30;
          do
          {
            v24 = v23;
            do
            {
              v25 = v24[1];
              ++v24;
              *v24 = v25 + *(v24 - 1);
            }
            while ( v24 != v23 + 8 );
            v23 += 9;
          }
          while ( v23 != (_DWORD *)(v7 + 9216 * v27 + 0x400000 + 36 * v22) );
        }
        sub_4B61C(v27, v7);
        *v29 = v1;
      }
      ++v27;
      ++v29;
      v30 += 9216;
      v31 += 0x100000;
    }
    while ( v27 != 4 );
    result = sub_3DFCC(v35);
    v8 = v35[0] - v34[0];
    if ( v35[1] - v34[1] < 0 )
      --v8;
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(v36, 0x800u, "Pattern test done, time cost %lds\n", v8);
      return sub_3B6AC(3, v36, 0, v9);
    }
  }
  else if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v36, "Handle is NULL.\n");
    return sub_3B6AC(3, v36, 0, *(int *)"LL.\n");
  }
  return result;
}
