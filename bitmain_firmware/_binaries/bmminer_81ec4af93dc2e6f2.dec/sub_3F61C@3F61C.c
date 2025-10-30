int __fastcall sub_3F61C(int result, int a2, int a3)
{
  int v3; // r7
  int v6; // r0
  int v7; // r8
  __int64 v8; // r0
  int v9; // r2
  __int64 v10; // r0
  __int64 v11; // r0
  unsigned int v12; // s15
  int v13; // r0
  int v14; // r5
  unsigned int v15; // r8
  __int64 v16; // r0
  int v17; // r2
  int v18; // r2
  __int64 v19; // r0
  __int64 v20; // r0
  double v21; // r0
  int v22; // r3
  int v23; // [sp+10h] [bp-80Ch]
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  v3 = result;
  if ( result && (result = sub_265B0()) != 0 && (result = sub_26570()) != 0 )
  {
    v6 = sub_265B0();
    v7 = v6 << 24;
    v23 = (unsigned __int64)v6 >> 8;
    v8 = __PAIR64__((unsigned __int64)v6 >> 8, sub_26580());
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
      {
        v9 = 1;
        do
          v9 *= 2;
        while ( (unsigned int)v8 > v9 );
        v8 = sub_8CAB8(v7, v23, v9, v9 >> 31);
        v7 = v8;
      }
    }
    else
    {
      v8 = sub_8CAB8(v7, v23, 0, 0);
      v7 = v8;
    }
    v10 = sub_8CAB8(
            a2 * a3 * v7,
            a2 * a3 * HIDWORD(v8)
          + v7 * ((unsigned __int64)(a2 * (__int64)a3) >> 32)
          + (((unsigned int)(a2 * a3) * (unsigned __int64)(unsigned int)v7) >> 32),
            100,
            0);
    v11 = sub_8CAB8(v10, HIDWORD(v10), v3, v3 >> 31);
    v12 = (unsigned int)(sub_8CA4C(v11, HIDWORD(v11)) * 0.8);
    dword_9C8A1C = v12;
    v13 = sub_265B0();
    v14 = v13 << 24;
    v15 = (unsigned __int64)v13 >> 8;
    LODWORD(v16) = sub_26570();
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 != 1 )
      {
        v17 = 1;
        do
          v17 *= 2;
        while ( (unsigned int)v16 > v17 );
        v16 = sub_8CAB8(v14, v15, v17, v17 >> 31);
        v15 = HIDWORD(v16);
        v14 = v16;
      }
    }
    else
    {
      v16 = sub_8CAB8(v14, v15, 0, 0);
      v15 = HIDWORD(v16);
      v14 = v16;
    }
    v18 = (unsigned __int8)byte_9C89FC;
    if ( (byte_9C89FC & 4) != 0 )
    {
      v18 = (unsigned __int16)word_9C8A0A;
      if ( word_9C8A0A )
      {
        v18 = (unsigned __int8)word_9C8A0A;
        HIDWORD(v16) = 1000;
        dword_9C8A1C = HIBYTE(word_9C8A0A) + 1000 * (unsigned __int8)word_9C8A0A;
      }
    }
    result = sub_5B9F4(v12, HIDWORD(v16), v18);
    if ( (unsigned int)off_AFC24 > 3 )
    {
      LODWORD(v19) = 2 * v14;
      HIDWORD(v19) = v15 + __CFADD__(v14, v14) + v15;
      v20 = sub_8CAB8(25 * v14, (8 * (v19 + __PAIR64__(v15, v14)) + __PAIR64__(v15, v14)) >> 32, v3, v3 >> 31);
      v21 = sub_8CA4C(v20, HIDWORD(v20));
      snprintf(
        s,
        0x800u,
        "freq = %d, percent = %d, hcn = %d, timeout = %d\n",
        v3,
        a3,
        (unsigned int)(v21 * 0.8 * 0.5),
        v12);
      return sub_3AF5C(3, s, 0, v22);
    }
  }
  else
  {
    if ( (unsigned int)off_AFC24 > 3 )
    {
      strcpy(s, "Note: addrInterval or corenum is not initialized.\n");
      result = sub_3AF5C(3, s, 0, *(unsigned __int16 *)"");
    }
    dword_9C8A1C = (int)&loc_1FFFC + 3;
  }
  return result;
}
