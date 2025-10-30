int __fastcall sub_1B46A0(const char *a1)
{
  const char *v1; // r6
  int v2; // r3
  int v3; // r8
  bool v4; // zf
  int v5; // t1
  bool v6; // zf
  size_t v7; // r0
  size_t v8; // r4
  _DWORD *v9; // r0
  int v10; // r2
  _DWORD *v11; // r3
  int v12; // r1
  bool v13; // zf
  size_t v14; // r5
  int v15; // r9
  _DWORD *v16; // r4
  int v17; // r3
  int v18; // t1
  char *v19; // r1
  char *v20; // r0
  _DWORD *v21; // r7
  char **v22; // r9
  int v23; // r4
  int v24; // r3
  int v25; // t1
  int v26; // r0
  char **v27; // r5
  int v28; // r10
  int v29; // t1
  const char *v30; // r0
  char *v31; // r0
  char *v32; // r6
  char *v33; // r4
  int v34; // r3
  bool v35; // zf
  char *v36; // r0
  unsigned __int8 *v37; // r12
  int v38; // t1
  bool v39; // zf
  const char *v41; // r10
  int v42; // r3
  int v43; // r10
  int v44; // r0
  char *v45; // [sp+0h] [bp-934h] BYREF
  int *v46; // [sp+4h] [bp-930h]
  int *v47; // [sp+8h] [bp-92Ch]
  int v48; // [sp+Ch] [bp-928h]
  unsigned __int8 v49[4]; // [sp+10h] [bp-924h] BYREF
  _DWORD v50[513]; // [sp+110h] [bp-824h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v2 = *(unsigned __int8 *)a1;
    if ( ((v2 - 43) & 0xFD) != 0 )
    {
      v3 = 0;
    }
    else
    {
      v3 = *(unsigned __int8 *)a1;
      v2 = *((unsigned __int8 *)a1 + 1);
      v1 = a1 + 1;
      v4 = v2 == 9;
      if ( v2 != 9 )
        v4 = v2 == 32;
      if ( v4 )
      {
        do
        {
          v5 = *(unsigned __int8 *)++v1;
          v2 = v5;
          v6 = v5 == 32;
          if ( v5 != 32 )
            v6 = v2 == 9;
        }
        while ( v6 );
      }
    }
    if ( v2 )
    {
      v7 = strlen(v1);
      v8 = v7;
      if ( v7 + 4 > 0x800 )
        sub_946E0("Regexp is too long: %s", v1);
      v9 = memcpy(v50, v1, v7 + 1);
      v10 = (int)&v50[511] + v8 + 3;
      v11 = v9;
      v12 = *(unsigned __int8 *)(v10 - 2048);
      v13 = v12 == 36;
      if ( v12 == 36 )
        LOBYTE(v12) = 93;
      else
        v10 = 34528;
      if ( v13 )
        *(_BYTE *)(v10 - 2048) = v12;
      else
        HIWORD(v10) = 60;
      if ( !v13 )
        *(_DWORD *)((char *)v9 + v8) = *(_DWORD *)v10;
    }
    else
    {
      v50[0] = 6105646;
      v11 = v50;
    }
    a1 = (const char *)re_comp(v11);
    if ( a1 )
      sub_946E0("Invalid regexp (%s): %s", a1, v1);
    v47 = &dword_487D2C;
    v14 = *(_DWORD *)(dword_487D2C + 36);
    if ( !v14 )
      goto LABEL_72;
  }
  else
  {
    v47 = &dword_487D2C;
    v50[0] = 6105646;
    v14 = *(_DWORD *)(dword_487D2C + 36);
    if ( !v14 )
    {
      v1 = "*";
      return sub_259F10("No selectors matching \"%s\"\n", v1);
    }
    v3 = 0;
  }
  v15 = 0;
  v48 = 0;
  v46 = &dword_47AC88;
  v45 = "Bad method name '%s'";
  do
  {
    v16 = *(_DWORD **)(*(_DWORD *)(v14 + 40) + 80);
    if ( *v16 )
    {
      do
      {
        sub_258BD4(a1);
        a1 = (const char *)sub_21B3C4(v16);
        if ( a1 )
        {
          v17 = *(unsigned __int8 *)a1;
          if ( ((v17 - 43) & 0xFD) == 0 && a1[1] == 91 && (!v3 || v17 == v3) )
          {
            a1 = strchr(a1 + 2, 32);
            v41 = a1;
            if ( a1 )
            {
              if ( !v1 || (v41 = a1 + 1, (a1 = (const char *)re_exec(a1 + 1)) != 0) )
              {
                a1 = strchr(v41, 93);
                if ( a1 )
                {
                  v42 = v48;
                  v43 = a1 - v41;
                  if ( v48 < v43 )
                    v42 = v43;
                  v48 = v42;
                }
                ++v15;
              }
            }
            else if ( *v46 > 0 )
            {
              v44 = sub_21B3C4(v16);
              a1 = (const char *)sub_F43B4(&off_46D334, v45, v44);
            }
          }
        }
        v18 = v16[12];
        v16 += 12;
      }
      while ( v18 );
    }
    v14 = *(_DWORD *)v14;
  }
  while ( v14 );
  if ( !v15 )
  {
LABEL_72:
    if ( !v1 )
      v1 = "*";
    return sub_259F10("No selectors matching \"%s\"\n", v1);
  }
  v19 = "*";
  if ( v1 )
    v19 = (char *)v1;
  v20 = (char *)sub_259F10("Selectors matching \"%s\":\n\n", v19);
  v21 = *(_DWORD **)(*v47 + 36);
  v22 = &v45;
  if ( v21 )
  {
    do
    {
      v23 = *(_DWORD *)(v21[10] + 80);
      if ( *(_DWORD *)v23 )
      {
        do
        {
          sub_258BD4(v20);
          v20 = (char *)sub_21B3C4(v23);
          if ( v20 )
          {
            v24 = (unsigned __int8)*v20;
            if ( ((v24 - 43) & 0xFD) == 0 && v20[1] == 91 && (!v3 || v24 == v3) )
            {
              v20 = strchr(v20 + 2, 32);
              if ( !v1 || (v20 = (char *)re_exec(v20 + 1)) != 0 )
                (&v45)[v14++] = (char *)v23;
            }
          }
          v25 = *(_DWORD *)(v23 + 48);
          v23 += 48;
        }
        while ( v25 );
      }
      v21 = (_DWORD *)*v21;
    }
    while ( v21 );
    qsort(&v45, v14, 4u, (__compar_fn_t)sub_1B3F38);
    v49[0] = 0;
    if ( v14 )
    {
      v27 = &(&v45)[v14];
      v28 = v48 + 1;
      do
      {
        sub_258BD4(v26);
        v29 = (int)*v22++;
        v30 = (const char *)sub_21B3C4(v29);
        v31 = strchr(v30, 32);
        v32 = v31;
        v33 = v31 + 1;
        if ( v49[0] )
        {
          v26 = sub_1B3E2C((unsigned __int8 *)v31 + 1, v49);
          if ( !v26 )
            continue;
        }
        v34 = (unsigned __int8)v32[1];
        v35 = v34 == 0;
        if ( v32[1] )
          v35 = v34 == 93;
        if ( v35 )
        {
          v37 = v49;
        }
        else
        {
          v36 = v33;
          v37 = v49;
          do
          {
            *v37++ = v34;
            v38 = (unsigned __int8)*++v36;
            v34 = v38;
            v39 = v38 == 93;
            if ( v38 != 93 )
              v39 = v34 == 0;
          }
          while ( !v39 );
        }
        *v37 = 0;
        v26 = ((int (__fastcall *)(unsigned __int8 *, int, _DWORD))loc_25A528)(v49, v28, 0);
      }
      while ( v27 != v22 );
    }
  }
  else
  {
    qsort(&v45, 0, 4u, (__compar_fn_t)sub_1B3F38);
    v49[0] = 0;
  }
  return sub_25A6C8(v26);
}
