int __fastcall sub_41228(int result, int a2, int a3)
{
  unsigned int v3; // r7
  __int64 v6; // d8
  unsigned int v7; // r0
  __int64 v8; // d8
  unsigned int i; // r3
  __int64 v10; // d16
  __int64 v11; // r0
  __int64 v12; // d9
  __int64 v13; // r0
  __int64 v14; // r0
  unsigned int v15; // r8
  __int64 v16; // d8
  unsigned int v17; // r0
  __int64 v18; // d8
  unsigned int j; // r3
  __int64 v20; // d16
  __int64 v21; // r0
  __int64 v22; // r0
  int v23; // r3
  int v24; // r3
  int v25; // [sp+14h] [bp-804h]
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  v3 = result;
  if ( result && (result = sub_26AB4()) != 0 && (result = sub_26A74()) != 0 )
  {
    v6 = vdup_n_s32(sub_26AB4()).n64_i64[0];
    v7 = sub_26A84();
    v8 = vshld_n_s64(vshrd_n_s64(v6, 0x20u), 0x18u);
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        v10 = 1;
      }
      else
      {
        for ( i = 1; i < v7; i *= 2 )
          ;
        v10 = vshrd_n_s64(vdup_n_s32(i).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v10 = 0;
    }
    v11 = sub_8FE20(v8, HIDWORD(v8), v10, HIDWORD(v10));
    v12 = vshrd_n_s64(vdup_n_s32(v3).n64_i64[0], 0x20u);
    v13 = sub_8FE20(a2 * a3 * (int)v11, (unsigned __int64)(a2 * (__int64)a3 * v11) >> 32, 100, 0);
    v14 = sub_8FE20(v13, HIDWORD(v13), v12, HIDWORD(v12));
    v15 = (unsigned int)(sub_8FDB4(v14, HIDWORD(v14)) * 0.8);
    dword_9CD8D4 = v15;
    v16 = vdup_n_s32(sub_26AB4()).n64_i64[0];
    v17 = sub_26A74();
    v18 = vshld_n_s64(vshrd_n_s64(v16, 0x20u), 0x18u);
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        v20 = 1;
      }
      else
      {
        for ( j = 1; j < v17; j *= 2 )
          ;
        v20 = vshrd_n_s64(vdup_n_s32(j).n64_i64[0], 0x20u);
      }
    }
    else
    {
      v20 = 0;
    }
    v21 = sub_8FE20(v18, HIDWORD(v18), v20, HIDWORD(v20));
    v22 = sub_8FE20(25 * (int)v21, (unsigned __int64)(25 * v21) >> 32, v12, HIDWORD(v12));
    v25 = (unsigned int)(sub_8FDB4(v22, HIDWORD(v22)) * 0.8 * 0.5);
    if ( (byte_9CD8B4 & 4) != 0 && word_9CD8C2 )
      dword_9CD8D4 = HIBYTE(word_9CD8C2) + 1000 * (unsigned __int8)word_9CD8C2;
    sub_287AC(v25);
    result = sub_3FBC4((int)(float)((float)(1000 * v15) * 0.75));
    if ( (unsigned int)dword_B308C > 3 )
    {
      snprintf(s, 0x800u, "opt_multi_version = %d, interval timeout = %d\n", dword_B3048, v15);
      result = sub_3B6AC(3, s, 0, v23);
      if ( (unsigned int)dword_B308C > 3 )
      {
        snprintf(s, 0x800u, "freq = %d, percent = %d, hcn = %d, timeout = %d\n", v3, a3, v25, v15);
        return sub_3B6AC(3, s, 0, v24);
      }
    }
  }
  else
  {
    if ( (unsigned int)dword_B308C > 3 )
    {
      strcpy(s, "Note: addrInterval or corenum is not initialized.\n");
      result = sub_3B6AC(3, s, 0, *(int *)"ized.\n");
    }
    dword_9CD8D4 = (int)&loc_1FFFC + 3;
  }
  return result;
}
