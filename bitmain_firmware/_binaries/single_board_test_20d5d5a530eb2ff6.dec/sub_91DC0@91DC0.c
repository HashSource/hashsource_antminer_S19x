int __fastcall sub_91DC0(_DWORD *a1, unsigned __int8 **a2, __int16 a3)
{
  int v3; // r3
  int v5; // r6
  int v6; // r4
  unsigned int v8; // r12
  int v9; // lr
  int v10; // r7
  int v11; // r9
  int v12; // r9
  unsigned __int16 *v13; // r3
  int v14; // r4
  int v15; // t1
  unsigned int v16; // r12
  unsigned int v17; // r8
  int v18; // r4
  int v19; // r3
  int v20; // r0
  int v21; // r7
  unsigned __int16 *v22; // [sp+8h] [bp-8h] BYREF
  int v23; // [sp+Ch] [bp-4h] BYREF

  v3 = a1[31];
  v5 = *(_DWORD *)(v3 + 532);
  if ( v5 && (v6 = *(_DWORD *)(v3 + 856)) == 0 )
  {
    v8 = (unsigned int)a2[1];
    if ( v8 <= 1 )
    {
      sub_95494(a1, 50, 445, 159, "ssl/statem/extensions_clnt.c", 1826);
    }
    else
    {
      v9 = (int)*a2;
      v10 = **a2;
      v11 = (*a2)[1];
      *a2 += 2;
      a2[1] = (unsigned __int8 *)(v8 - 2);
      v12 = v11 | (v10 << 8);
      if ( (a3 & 0x800) != 0 )
      {
        v22 = 0;
        if ( v8 == 2 )
        {
          if ( *(unsigned __int16 *)(v3 + 854) == v12 )
          {
            v6 = 0;
            sub_95494(a1, 47, 445, 108, "ssl/statem/extensions_clnt.c", 1846);
            return v6;
          }
          sub_A278C(a1, &v22, &v23);
          if ( v23 )
          {
            v13 = v22;
            if ( *v22 == v12 )
            {
LABEL_25:
              if ( sub_A2808(a1, (unsigned __int16)v12, 131076) )
              {
                v19 = a1[31];
                v6 = 1;
                *(_WORD *)(v19 + 854) = v12;
                sub_DA240(*(_DWORD *)(v19 + 532));
                *(_DWORD *)(a1[31] + 532) = 0;
                return v6;
              }
            }
            else
            {
              v14 = 0;
              while ( ++v14 != v23 )
              {
                v15 = v13[1];
                ++v13;
                if ( v15 == v12 )
                  goto LABEL_25;
              }
            }
          }
          v6 = 0;
          sub_95494(a1, 47, 445, 108, "ssl/statem/extensions_clnt.c", 1859);
        }
        else
        {
          sub_95494(a1, 50, 445, 159, "ssl/statem/extensions_clnt.c", 1836);
        }
      }
      else if ( *(unsigned __int16 *)(v3 + 854) == v12 )
      {
        if ( v8 - 2 > 1
          && (v16 = v8 - 4, v17 = *(unsigned __int8 *)(v9 + 3) | (*(unsigned __int8 *)(v9 + 2) << 8), v17 <= v16)
          && (v18 = v9 + 4, v17 == v16)
          && (*a2 = (unsigned __int8 *)(v9 + 4 + v17), a2[1] = 0, v17) )
        {
          v20 = EVP_PKEY_new();
          v21 = v20;
          if ( v20 && sub_D9D74(v20, v5) > 0 )
          {
            v6 = sub_DA738(v21, v18, v17);
            if ( v6 )
            {
              v6 = sub_83144(a1, v5, v21, 1);
              if ( v6 )
              {
                v6 = 1;
                *(_DWORD *)(a1[31] + 856) = v21;
              }
              else
              {
                sub_DA240(v21);
              }
            }
            else
            {
              sub_95494(a1, 47, 445, 306, "ssl/statem/extensions_clnt.c", 1896);
              sub_DA240(v21);
            }
          }
          else
          {
            v6 = 0;
            sub_95494(a1, 80, 445, 65, "ssl/statem/extensions_clnt.c", 1889);
            sub_DA240(v21);
          }
        }
        else
        {
          v6 = 0;
          sub_95494(a1, 50, 445, 159, "ssl/statem/extensions_clnt.c", 1882);
        }
      }
      else
      {
        v6 = 0;
        sub_95494(a1, 47, 445, 108, "ssl/statem/extensions_clnt.c", 1875);
      }
    }
  }
  else
  {
    v6 = 0;
    sub_95494(a1, 80, 445, 68, "ssl/statem/extensions_clnt.c", 1820);
  }
  return v6;
}
