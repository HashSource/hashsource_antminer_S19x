int __fastcall sub_11EA5C(int a1, int *a2)
{
  int v3; // r5
  int *v4; // r6
  unsigned int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  size_t v9; // r4
  unsigned __int8 *v10; // r10
  size_t v11; // r3
  _BYTE *v12; // r2
  int v13; // t1
  int v15; // r0
  unsigned __int8 *v16; // lr
  signed int v17; // r2
  unsigned int v18; // r1
  unsigned int v19; // t1
  unsigned int v20; // r12
  bool v21; // cc
  int v22; // r3
  int v23; // r1
  bool v24; // zf
  int v25; // r4
  void *s; // [sp+4h] [bp-20h] BYREF
  _DWORD v27[2]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v28[5]; // [sp+10h] [bp-14h] BYREF

  v3 = -1;
  v4 = (int *)sub_10E660(a1);
  v27[0] = 2;
  v28[3] = 0;
  v28[1] = 22;
  v27[1] = v28;
LABEL_2:
  while ( 1 )
  {
    v5 = sub_113C8C(v4, 0xDu, v3);
    v3 = v5;
    if ( v5 == -1 )
      return 0;
    v6 = sub_113CB0(v4, v5);
    v7 = sub_114128(v6);
    v8 = sub_12A71C(&s, v7);
    v9 = v8;
    if ( v8 < 0 )
      return 17;
    v10 = (unsigned __int8 *)s;
    if ( !v8 )
      goto LABEL_9;
    v11 = v8 - 1;
    v12 = (char *)s + v8 - 1;
    if ( !*v12 )
    {
      while ( 1 )
      {
        v9 = v11;
        if ( !v11 )
          break;
        v13 = (unsigned __int8)*--v12;
        --v11;
        if ( v13 )
          goto LABEL_12;
      }
LABEL_9:
      if ( memchr(s, 0, 0) )
        goto LABEL_10;
      goto LABEL_29;
    }
LABEL_12:
    v15 = (int)memchr(s, 0, v9);
    if ( v15 )
    {
LABEL_10:
      CRYPTO_free(v10);
      return 53;
    }
    v16 = v10;
    v17 = 0;
    while ( 1 )
    {
      v19 = *v16++;
      v18 = v19;
      v20 = v19 - 48;
      if ( (v19 & 0xFFFFFFDF) - 65 > 0x19 )
      {
        v21 = v18 > 0x5F;
        if ( v18 != 95 )
          v21 = v20 > 9;
        if ( v21 )
        {
          if ( !v17 || v17 >= (int)(v9 - 1) )
            break;
          if ( v18 != 45 )
          {
            v15 = 1;
            if ( v18 != 46 )
              break;
            v22 = *v16;
            if ( v22 == 46 )
              break;
            v23 = *(v16 - 2);
            v24 = v23 == 45;
            if ( v23 != 45 )
              v24 = v22 == 45;
            if ( v24 )
              break;
          }
        }
      }
      if ( ++v17 == v9 )
      {
        if ( !v15 )
          break;
        v28[0] = v17;
        v28[2] = v10;
        v25 = sub_11E750(v27, a2);
        CRYPTO_free(v10);
        if ( v25 )
          return v25;
        goto LABEL_2;
      }
    }
LABEL_29:
    CRYPTO_free(v10);
  }
}
