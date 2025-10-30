int *__fastcall sub_122BB8(int *a1, _DWORD *a2)
{
  int *v4; // r8
  int v5; // r4
  signed int v6; // r0
  int v7; // r0
  int v8; // r0
  int *v9; // r5
  unsigned __int8 *v10; // r10
  int v11; // r11
  unsigned __int8 *v12; // r0
  unsigned __int8 *v13; // r0
  unsigned __int8 *v14; // r5
  signed int i; // r4
  _DWORD *v16; // r0
  int v17; // r5
  unsigned __int8 *v18; // r11
  int v19; // r10
  unsigned __int8 *v20; // r0
  unsigned __int8 *v21; // r0

  v4 = 0;
  v5 = -1;
  while ( 1 )
  {
    v6 = sub_113C8C(a1, 0x30u, v5);
    v5 = v6;
    if ( v6 < 0 )
      break;
    v7 = sub_113CB0(a1, v6);
    v8 = sub_114128(v7);
    v9 = (int *)v8;
    if ( *(_DWORD *)(v8 + 4) == 22 )
    {
      v10 = *(unsigned __int8 **)(v8 + 8);
      if ( v10 )
      {
        if ( *(_DWORD *)v8 )
        {
          v11 = *(_DWORD *)v8;
          if ( !memchr(*(const void **)(v8 + 8), 0, *(_DWORD *)v8) )
          {
            v12 = v10;
            if ( !v4 )
            {
              v4 = (int *)sub_10BFD4(sub_12171C);
              if ( !v4 )
                return 0;
              v12 = (unsigned __int8 *)v9[2];
              v11 = *v9;
            }
            v13 = sub_E9EF4(v12, v11);
            v14 = v13;
            if ( !v13 )
              goto LABEL_26;
            if ( sub_10BC4C((int)v4, (int)v13) == -1 )
            {
              if ( !sub_10BD3C(v4, (int)v14) )
              {
LABEL_25:
                CRYPTO_free(v14);
LABEL_26:
                sub_122ABC((int)v4);
                return 0;
              }
            }
            else
            {
              CRYPTO_free(v14);
            }
          }
        }
      }
    }
  }
  for ( i = 0; i < sub_10C010((int)a2); ++i )
  {
    v16 = (_DWORD *)sub_10C01C(a2, i);
    if ( *v16 == 1 )
    {
      v17 = v16[1];
      if ( *(_DWORD *)(v17 + 4) == 22 )
      {
        v18 = *(unsigned __int8 **)(v17 + 8);
        if ( v18 )
        {
          if ( *(_DWORD *)v17 )
          {
            v19 = *(_DWORD *)v17;
            if ( !memchr(*(const void **)(v17 + 8), 0, *(_DWORD *)v17) )
            {
              v20 = v18;
              if ( !v4 )
              {
                v4 = (int *)sub_10BFD4(sub_12171C);
                if ( !v4 )
                  return 0;
                v20 = *(unsigned __int8 **)(v17 + 8);
                v19 = *(_DWORD *)v17;
              }
              v21 = sub_E9EF4(v20, v19);
              v14 = v21;
              if ( !v21 )
                goto LABEL_26;
              if ( sub_10BC4C((int)v4, (int)v21) == -1 )
              {
                if ( !sub_10BD3C(v4, (int)v14) )
                  goto LABEL_25;
              }
              else
              {
                CRYPTO_free(v14);
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
