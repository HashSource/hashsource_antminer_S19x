int __fastcall sub_121918(int a1, char *a2, unsigned int a3, int a4, int a5, unsigned __int8 **a6)
{
  unsigned int v7; // r9
  int v8; // r10
  unsigned int v9; // r11
  _DWORD *v10; // r5
  int v11; // r7
  signed int i; // r4
  _DWORD *v13; // r0
  unsigned int v14; // r1
  unsigned __int8 *v15; // r0
  int v16; // r1
  int v17; // r4
  unsigned __int8 *v18; // r0
  int v19; // r3
  int v20; // r4
  int v22; // r5
  int *v23; // r6
  int v24; // r0
  _DWORD *v25; // r3
  int v26; // r7
  int v27; // r0
  bool v28; // cc
  unsigned __int8 *v29; // r0
  int v30; // r0
  bool v31; // cc
  int v32; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v33; // [sp+8h] [bp-1Ch]
  unsigned int v34; // [sp+Ch] [bp-18h]
  int (__fastcall *v36)(int, size_t, void *); // [sp+14h] [bp-10h]
  unsigned __int8 *v37; // [sp+1Ch] [bp-8h] BYREF

  v7 = a3;
  v34 = a4 & 0xFFFF7FFF;
  if ( a5 == 1 )
  {
    v8 = 22;
    v9 = 48;
    v36 = sub_121B5C;
  }
  else if ( a5 == 2 )
  {
    if ( a3 > 1 && *a2 == 46 )
      v34 |= 0x8000u;
    v8 = 22;
    v9 = 13;
    if ( (v34 & 2) != 0 )
      v36 = (int (__fastcall *)(int, size_t, void *))sub_121628;
    else
      v36 = (int (__fastcall *)(int, size_t, void *))sub_121C38;
  }
  else
  {
    v8 = 4;
    v9 = 0;
    v36 = (int (__fastcall *)(int, size_t, void *))sub_121724;
  }
  if ( !a3 )
    v7 = strlen(a2);
  v10 = (_DWORD *)sub_10EDA8(a1);
  if ( v10 )
  {
    v11 = 0;
    for ( i = 0; i < sub_10C010((int)v10); ++i )
    {
      v13 = (_DWORD *)sub_10C01C(v10, i);
      if ( a5 == *v13 )
      {
        v32 = v13[1];
        if ( *(_DWORD *)(v32 + 8) )
        {
          v14 = *(_DWORD *)v32;
          if ( *(_DWORD *)v32 )
          {
            if ( v8 == *(_DWORD *)(v32 + 4) )
            {
              if ( v8 == 22 )
              {
                v30 = ((int (__fastcall *)(_BYTE *, unsigned int, unsigned __int8 *, unsigned int, unsigned int))v36)(
                        *(_BYTE **)(v32 + 8),
                        v14,
                        (unsigned __int8 *)a2,
                        v7,
                        v34);
                v31 = (int)a6 <= 0;
                if ( a6 )
                  v31 = v30 <= 0;
                if ( !v31 )
                {
                  v17 = v30;
                  v16 = *(_DWORD *)v32;
                  v15 = *(unsigned __int8 **)(v32 + 8);
LABEL_19:
                  v18 = sub_E9EF4(v15, v16);
                  *a6 = v18;
                  v19 = v17;
                  if ( !v18 )
                    v19 = -1;
                  v20 = v19;
LABEL_22:
                  GENERAL_NAMES_free((int)v10);
                  return v20;
                }
                if ( v30 )
                {
                  v20 = v30;
                  goto LABEL_22;
                }
              }
              else if ( v14 == v7 )
              {
                v33 = *(unsigned __int8 **)(v32 + 8);
                if ( !memcmp(v33, a2, v7) )
                {
                  v15 = v33;
                  v16 = v7;
                  v17 = 1;
                  if ( a6 )
                    goto LABEL_19;
                  v20 = 1;
                  goto LABEL_22;
                }
              }
            }
          }
        }
        v11 = 1;
      }
    }
    GENERAL_NAMES_free((int)v10);
    if ( v11 && (v34 & 1) == 0 )
      return 0;
  }
  if ( v9 && (v34 & 0x20) == 0 )
  {
    v22 = -1;
    v23 = (int *)sub_10E660(a1);
    while ( 1 )
    {
      v22 = sub_113C8C(v23, v9, v22);
      if ( v22 < 0 )
        break;
      v24 = sub_113CB0(v23, v22);
      v25 = (_DWORD *)sub_114128(v24);
      if ( v25[2] && *v25 )
      {
        v26 = sub_12A71C(&v37, v25);
        if ( v26 < 0 )
          return -1;
        v27 = ((int (__fastcall *)(_BYTE *, unsigned int, unsigned __int8 *, unsigned int, unsigned int))v36)(
                v37,
                v26,
                (unsigned __int8 *)a2,
                v7,
                v34);
        v20 = v27;
        v28 = (int)a6 <= 0;
        if ( a6 )
          v28 = v27 <= 0;
        if ( !v28 )
        {
          v29 = sub_E9EF4(v37, v26);
          *a6 = v29;
          if ( v29 )
          {
            CRYPTO_free(v37);
            return v20;
          }
          CRYPTO_free(v37);
          return -1;
        }
        CRYPTO_free(v37);
        if ( v20 )
          return v20;
      }
    }
  }
  return 0;
}
