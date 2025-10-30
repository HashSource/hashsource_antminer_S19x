int __fastcall sub_122AC8(int a1)
{
  int result; // r0
  _DWORD *v2; // r6
  int *v3; // r7
  signed int i; // r4
  int *v5; // r5
  _DWORD *v6; // r3
  int v7; // r5
  unsigned __int8 *v8; // r11
  int v9; // r10
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r5

  result = sub_10EDA8(a1);
  v2 = (_DWORD *)result;
  if ( result )
  {
    v3 = 0;
    for ( i = 0; i < sub_10C010((int)v2); ++i )
    {
      v5 = (int *)sub_10C01C(v2, i);
      if ( sub_EAC84(*v5) == (char *)178 )
      {
        v6 = (_DWORD *)v5[1];
        if ( *v6 == 6 )
        {
          v7 = v6[1];
          if ( *(_DWORD *)(v7 + 4) == 22 )
          {
            v8 = *(unsigned __int8 **)(v7 + 8);
            if ( v8 )
            {
              if ( *(_DWORD *)v7 )
              {
                v9 = *(_DWORD *)v7;
                if ( !memchr(*(const void **)(v7 + 8), 0, *(_DWORD *)v7) )
                {
                  v10 = v8;
                  if ( !v3 )
                  {
                    v3 = (int *)sub_10BFD4(sub_12171C);
                    if ( !v3 )
                      goto LABEL_18;
                    v10 = *(unsigned __int8 **)(v7 + 8);
                    v9 = *(_DWORD *)v7;
                  }
                  v11 = sub_E9EF4(v10, v9);
                  v12 = v11;
                  if ( !v11 )
                    goto LABEL_17;
                  if ( sub_10BC4C((int)v3, (int)v11) == -1 )
                  {
                    if ( !sub_10BD3C(v3, (int)v12) )
                    {
                      CRYPTO_free(v12);
LABEL_17:
                      sub_122ABC((int)v3);
LABEL_18:
                      v3 = 0;
                      break;
                    }
                  }
                  else
                  {
                    CRYPTO_free(v12);
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_11DE14((int)v2);
    return (int)v3;
  }
  return result;
}
