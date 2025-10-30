int __fastcall sub_9D328(int a1, int a2, int a3)
{
  int v3; // r7
  int v5; // r3
  int *v6; // r5
  int v7; // r0
  int v8; // r8
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r0
  _BOOL4 v15; // r2
  bool v16; // zf
  int v17; // r6
  int v18; // r3
  int (*v20)(void); // r0
  _BOOL4 v21; // r3
  int *v22; // r2
  int v23; // r1
  _BOOL4 v24; // r3
  int v25; // r3
  int v26; // [sp+Ch] [bp-10h] BYREF
  int v27; // [sp+10h] [bp-Ch] BYREF
  int v28; // [sp+14h] [bp-8h] BYREF

  v3 = *(_DWORD *)a1;
  *(_DWORD *)a1 = a2;
  if ( !sub_8F5C4((_DWORD *)a1, 0x11u, 768, a3, 0, 0) )
  {
    v17 = 0;
    *(_DWORD *)a1 = v3;
    return v17;
  }
  if ( *(_DWORD *)(a1 + 1100) && *(_DWORD *)a1 != 772 )
  {
    *(_DWORD *)a1 = v3;
    sub_95494((_DWORD *)a1, 70, 607, 266, (int)"ssl/statem/statem_lib.c", 1918);
    return 0;
  }
  v5 = **(_DWORD **)(a1 + 4);
  if ( v5 == 0x10000 )
  {
    v6 = &dword_2165F0;
  }
  else
  {
    if ( v5 != 0x1FFFF )
    {
      if ( v5 == *(_DWORD *)a1 )
        return 1;
      *(_DWORD *)a1 = v3;
      sub_95494((_DWORD *)a1, 70, 607, 266, (int)"ssl/statem/statem_lib.c", 1928);
      return 0;
    }
    v6 = &dword_216638;
  }
  v7 = sub_9CFC8(a1, &v26, &v27, &v28);
  if ( !v7 )
  {
    v8 = *(_DWORD *)a1;
    v9 = v26;
    v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 100) + 48) & 8;
    if ( v10 )
    {
      if ( v8 == 256 )
      {
        if ( v26 == 256 )
        {
          v12 = 65280;
          goto LABEL_15;
        }
        v11 = 65280;
      }
      else
      {
        v11 = *(_DWORD *)a1;
        if ( v26 == 256 )
          v9 = 65280;
      }
      if ( v9 >= v11 )
      {
        if ( v8 == 256 )
          v12 = 65280;
        else
          v12 = *(_DWORD *)a1;
LABEL_15:
        v13 = v27;
        if ( v27 == 256 )
          v14 = 65280;
        else
          v14 = v27;
        v15 = v12 < v14;
LABEL_19:
        if ( v15 )
        {
          v25 = 1964;
        }
        else
        {
          if ( (*(_DWORD *)(a1 + 1264) & 0x80) == 0 )
            v28 = v13;
          if ( v8 == 771 )
          {
            if ( v28 >= 772 )
            {
              v17 = memcmp(&tls12downgrade, (const void *)(*(_DWORD *)(a1 + 124) + 164), 8u);
              if ( !v17 )
              {
                v18 = 1980;
                goto LABEL_30;
              }
            }
          }
          else
          {
            v16 = v8 == 770;
            if ( v8 <= 770 )
              v16 = v10 == 0;
            if ( v16 && v8 < v28 )
            {
              v17 = strcmp("DOWNGRD", (const char *)(*(_DWORD *)(a1 + 124) + 164));
              if ( !v17 )
              {
                v18 = 1993;
LABEL_30:
                *(_DWORD *)a1 = v3;
                sub_95494((_DWORD *)a1, 47, 607, 373, (int)"ssl/statem/statem_lib.c", v18);
                return v17;
              }
            }
          }
          if ( *v6 )
          {
            v20 = (int (*)(void))v6[1];
            v21 = v20 == 0;
            if ( v8 != *v6 )
              v21 = 1;
            v22 = v6;
            if ( !v21 )
            {
LABEL_47:
              v17 = 1;
              *(_DWORD *)(a1 + 4) = v20();
              return v17;
            }
            while ( 1 )
            {
              v23 = v22[3];
              if ( !v23 )
                break;
              v20 = (int (*)(void))v22[4];
              v22 += 3;
              v24 = v20 == 0;
              if ( v8 != v23 )
                v24 = 1;
              if ( !v24 )
                goto LABEL_47;
            }
          }
          v25 = 2008;
        }
        goto LABEL_53;
      }
    }
    else if ( v8 >= v26 )
    {
      v13 = v27;
      v15 = v8 > v27;
      goto LABEL_19;
    }
    v25 = 1958;
LABEL_53:
    *(_DWORD *)a1 = v3;
    sub_95494((_DWORD *)a1, 70, 607, 258, (int)"ssl/statem/statem_lib.c", v25);
    return 0;
  }
  *(_DWORD *)a1 = v3;
  sub_95494((_DWORD *)a1, 70, 607, v7, (int)"ssl/statem/statem_lib.c", 1951);
  return 0;
}
