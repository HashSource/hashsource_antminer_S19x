int __fastcall sub_39138(int result)
{
  char *v1; // r5
  int v2; // r0
  int v3; // r0
  int v4; // r2
  int v5; // r3
  int i; // r5
  int v7; // r6
  int v8; // r6
  int v9; // r3
  int v10; // r12
  unsigned int v11; // r0
  unsigned int v12; // r8
  int v13; // r7
  __int64 v14; // r2
  int v15; // t1
  bool v16; // zf
  int v17; // r12
  _DWORD *v18; // r1
  int v19; // r3
  unsigned int v20; // [sp+4h] [bp-850h]
  int v21; // [sp+8h] [bp-84Ch]
  int v22; // [sp+1Ch] [bp-838h]
  int v23; // [sp+24h] [bp-830h]
  int v24; // [sp+28h] [bp-82Ch]
  int v25; // [sp+40h] [bp-814h] BYREF
  int v26; // [sp+44h] [bp-810h]
  _DWORD v27[2]; // [sp+48h] [bp-80Ch] BYREF
  char v28[2052]; // [sp+50h] [bp-804h] BYREF

  if ( dword_1AEA78 && *(_DWORD *)(dword_1AEA78 + 4) )
  {
    v1 = (char *)result;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      strcpy(v28, "Pattern test start...\n");
      sub_47AB4(3, v28, 0);
    }
    sub_4A60C(&v25);
    v2 = sub_37E60();
    v3 = sub_702AC(v2);
    sub_702CC(v3 | 0x10000);
    v4 = *(_DWORD *)dword_1AEA78;
    *(_DWORD *)(dword_1AEA78 + 232) = 1;
    if ( v4 == 161 )
      sub_36F78((int)v1);
    else
      sub_3702C(v1);
    v5 = dword_1AEA78;
    for ( i = 0; i != 16; ++i )
    {
      while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 || *(_DWORD *)(v5 + 4 * (i + 2)) != 1 )
      {
        if ( ++i == 16 )
          goto LABEL_15;
      }
      v7 = 3;
      do
      {
        if ( sub_37B2C(i) )
          break;
        usleep((__useconds_t)&loc_186A0);
        --v7;
      }
      while ( v7 );
      v5 = dword_1AEA78;
    }
LABEL_15:
    *(_DWORD *)(v5 + 232) = 0;
    v8 = sub_37770();
    v22 = 0;
    v24 = dword_1AEA78;
    v23 = dword_A0D68;
    do
    {
      v9 = *(_DWORD *)(v23 + 4);
      v23 += 4;
      if ( v9 == 1 && *(_DWORD *)(v24 + 4 * v22 + 8) == 1 )
      {
        v20 = 0;
        v21 = v8 - 4 + (_DWORD)&loc_1D2C8 * v22;
        do
        {
          v10 = v21;
          v11 = 0;
          v12 = 4 * (13 * v22 + v20 / 6);
          v13 = *(_DWORD *)(v8 + v12 + 1940288);
          do
          {
            v14 = 2863311531LL * v11;
            v15 = *(_DWORD *)(v10 + 4);
            v10 += 4;
            ++v11;
            v13 += v15;
            HIDWORD(v14) >>= 6;
            *(_DWORD *)(v8 + 4 * (4 * (78 * v22 + v20) + HIDWORD(v14)) + 1916992) += v15;
            *(_DWORD *)(v8 + 4 * (HIDWORD(v14) + v12) + 1936960) += v15;
            ++*(_DWORD *)(v8 + 4 * (702 * v22 + 9 * v20 + v15) + 3853572);
          }
          while ( v11 != 383 );
          v16 = v20++ == 77;
          *(_DWORD *)(v8 + v12 + 1940288) = v13;
          v21 += 1532;
        }
        while ( !v16 );
        v17 = v8 + 3853572 + 2808 * v22;
        do
        {
          v18 = (_DWORD *)v17;
          do
          {
            v18[1] += *v18;
            ++v18;
          }
          while ( v18 != (_DWORD *)(v17 + 32) );
          v17 += 36;
        }
        while ( v17 != v8 + 3856380 + 2808 * v22 );
      }
      ++v22;
    }
    while ( v22 != 16 );
    sub_4A60C(v27);
    result = v26;
    v19 = v27[0] - v25;
    if ( v27[1] - v26 < 0 )
      --v19;
    if ( (unsigned int)dword_9E31C > 3 )
    {
      snprintf(v28, 0x800u, "Pattern test done, time cost %lds\n", v19);
      return sub_47AB4(3, v28, 0);
    }
  }
  else if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v28, "Handle is NULL.\n");
    return sub_47AB4(3, v28, 0);
  }
  return result;
}
