int __fastcall sub_8E8B8(int *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r3
  int v7; // r2
  int (__fastcall *v8)(int *, int *, _DWORD); // r6
  int v9; // r5
  int v10; // r6
  _BOOL4 v11; // r7
  int v12; // r3
  int v13; // r3
  unsigned int v14; // r5
  int v15; // r5
  int *v17; // r3
  int v18; // r2
  int v19; // r3
  int (__fastcall *v20)(int *, int *, _DWORD); // r3
  unsigned int *v21; // r3
  unsigned int v22; // r2
  unsigned int *v23; // r3
  unsigned int v24; // r2
  int v25; // r8
  int v26; // r0
  int v27; // r3
  int v28; // r0
  _DWORD *v29; // r7
  int v30; // [sp+Ch] [bp-4h] BYREF

  v30 = 112;
  v5 = sub_8B860((int)a1);
  v6 = a1[308];
  if ( !v6 || (v7 = a1[376]) == 0 )
  {
    sub_95494(a1, 80, 558, 68, "ssl/statem/extensions.c", 936);
    return 0;
  }
  v8 = *(int (__fastcall **)(int *, int *, _DWORD))(v6 + 304);
  v9 = v5;
  if ( v8 )
  {
    v10 = v8(a1, &v30, *(_DWORD *)(v6 + 308));
    goto LABEL_5;
  }
  v20 = *(int (__fastcall **)(int *, int *, _DWORD))(v7 + 304);
  v10 = 3;
  if ( v20 )
  {
    v10 = v20(a1, &v30, *(_DWORD *)(v7 + 308));
LABEL_5:
    if ( a1[7] )
    {
      v11 = a3 != 0;
      if ( v10 )
        v11 = 0;
      if ( v11 )
      {
        v10 = a1[35];
        if ( v10 )
        {
          v10 = 0;
        }
        else
        {
          CRYPTO_free(*(_DWORD *)(a1[285] + 460), "ssl/statem/extensions.c", 958);
          v25 = a1[285];
          v26 = sub_E9E3C(a1[334], "ssl/statem/extensions.c", 959);
          v27 = a1[285];
          *(_DWORD *)(v25 + 460) = v26;
          if ( !*(_DWORD *)(v27 + 460) )
          {
            v10 = a1[334];
            if ( v10 )
            {
              v10 = 0;
              sub_95494(a1, 80, 558, 68, "ssl/statem/extensions.c", 962);
            }
          }
        }
      }
    }
  }
  v12 = a1[31];
  if ( *(_DWORD *)(v12 + 384) && *(_DWORD *)(v12 + 516) )
  {
    if ( !v10 )
      goto LABEL_15;
  }
  else
  {
    v13 = a1[308];
    if ( v13 == a1[376] || a1[275] )
    {
      if ( !v10 )
      {
LABEL_15:
        v14 = ((v9 ^ 0x4000u) >> 14) & 1;
        if ( !a1[343] )
          v14 = 0;
        if ( v14 )
        {
          if ( (sub_8B860((int)a1) & 0x4000) != 0 )
          {
            v15 = a1[35];
            a1[343] = v10;
            if ( !v15 )
            {
              v28 = sub_8D444((int)a1);
              v29 = (_DWORD *)v28;
              if ( !v28 )
              {
                sub_95494(a1, 80, 558, 68, "ssl/statem/extensions.c", 1003);
                return v15;
              }
              CRYPTO_free(*(_DWORD *)(v28 + 464), "ssl/statem/extensions.c", 991);
              v29[116] = v10;
              v29[117] = v10;
              v29[118] = v10;
              v29[119] = v10;
              v15 = sub_8D53C(a1, (int)v29);
              if ( !v15 )
              {
                sub_95494(a1, 80, 558, 68, "ssl/statem/extensions.c", 998);
                return v15;
              }
            }
          }
        }
        return 1;
      }
    }
    else
    {
      v21 = (unsigned int *)(v13 + 68);
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      v23 = (unsigned int *)(a1[376] + 68);
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      if ( !v10 )
        goto LABEL_15;
    }
  }
  if ( v10 == 2 )
  {
    sub_95494(a1, v30, 558, 234, "ssl/statem/extensions.c", 1011);
    return 0;
  }
  else
  {
    if ( v10 != 3 )
    {
      if ( v10 != 1 )
        return 1;
      v17 = (int *)a1[1];
      if ( (*(_DWORD *)(v17[25] + 48) & 8) != 0 )
        goto LABEL_27;
      v18 = *v17;
      v19 = *v17 == 0x10000;
      if ( v18 < 772 )
        v19 |= 1u;
      if ( v19 )
LABEL_27:
        sub_83FEC(a1, 1, v30);
    }
    a1[371] = 0;
    return 1;
  }
}
