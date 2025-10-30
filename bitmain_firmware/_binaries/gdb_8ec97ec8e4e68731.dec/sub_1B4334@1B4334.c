int __fastcall sub_1B4334(char *a1)
{
  const char *v1; // r7
  size_t v2; // r0
  size_t v3; // r4
  int v4; // r3
  int v5; // r2
  bool v6; // zf
  size_t v7; // r5
  int v8; // r6
  char *v9; // r8
  _DWORD *v10; // r4
  int v11; // t1
  char *v12; // r1
  _BYTE *v13; // r0
  _DWORD *v14; // r6
  unsigned __int8 *v15; // r9
  _DWORD *v16; // r4
  int v17; // t1
  int v18; // r0
  unsigned __int8 *v19; // r5
  char *v20; // r8
  int v21; // t1
  int v22; // r0
  int v23; // r7
  int v24; // r4
  unsigned __int8 v25; // r3
  int v26; // r0
  unsigned __int8 *v27; // r12
  unsigned __int8 v28; // t1
  const char *v30; // r10
  unsigned __int8 v31[4]; // [sp+0h] [bp-924h] BYREF
  _DWORD v32[513]; // [sp+100h] [bp-824h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v2 = strlen(a1);
    v3 = v2;
    if ( v2 + 4 > 0x800 )
      sub_946E0("Regexp is too long: %s", v1);
    memcpy(v32, v1, v2 + 1);
    v4 = (int)&v32[511] + v3 + 3;
    v5 = *(unsigned __int8 *)(v4 - 2048);
    v6 = v5 == 36;
    if ( v5 == 36 )
      LOBYTE(v5) = 32;
    else
      v4 = 34444;
    if ( v6 )
      *(_BYTE *)(v4 - 2048) = v5;
    else
      HIWORD(v4) = 60;
    if ( !v6 )
      *(_DWORD *)((char *)v32 + v3) = *(_DWORD *)v4;
    a1 = (char *)re_comp(v32);
    if ( a1 )
      sub_946E0("Invalid regexp (%s): %s", a1, v1);
    v7 = *(_DWORD *)(dword_487D2C + 36);
    if ( !v7 )
      return sub_259F10("No classes matching \"%s\"\n", v1);
  }
  else
  {
    v32[0] = (char *)&loc_202A2C + 2;
    v7 = *(_DWORD *)(dword_487D2C + 36);
    if ( !v7 )
    {
      v1 = "*";
      return sub_259F10("No classes matching \"%s\"\n", v1);
    }
  }
  v8 = 0;
  v9 = 0;
  do
  {
    v10 = *(_DWORD **)(*(_DWORD *)(v7 + 40) + 80);
    if ( *v10 )
    {
      do
      {
        sub_258BD4(a1);
        a1 = (char *)sub_21B3C4(v10);
        if ( a1 )
        {
          if ( ((*a1 - 43) & 0xFD) == 0 && a1[1] == 91 )
          {
            v30 = a1 + 2;
            if ( !v1 || (a1 = (char *)re_exec(a1 + 2)) != 0 )
            {
              a1 = strchr(v30, 32);
              if ( a1 )
              {
                a1 -= (int)v30;
                if ( (int)v9 < (int)a1 )
                  v9 = a1;
              }
              ++v8;
            }
          }
        }
        v11 = v10[12];
        v10 += 12;
      }
      while ( v11 );
    }
    v7 = *(_DWORD *)v7;
  }
  while ( v7 );
  if ( !v8 )
  {
    if ( !v1 )
      v1 = "*";
    return sub_259F10("No classes matching \"%s\"\n", v1);
  }
  v12 = "*";
  if ( v1 )
    v12 = (char *)v1;
  v13 = (_BYTE *)sub_259F10("Classes matching \"%s\":\n\n", v12);
  v14 = *(_DWORD **)(dword_487D2C + 36);
  v15 = v31;
  if ( v14 )
  {
    do
    {
      v16 = *(_DWORD **)(v14[10] + 80);
      if ( *v16 )
      {
        do
        {
          sub_258BD4(v13);
          v13 = (_BYTE *)sub_21B3C4(v16);
          if ( v13 )
          {
            if ( ((*v13 - 43) & 0xFD) == 0 && v13[1] == 91 && (!v1 || (v13 = (_BYTE *)re_exec(v13 + 2)) != 0) )
              *(_DWORD *)&v31[4 * v7++] = v16;
          }
          v17 = v16[12];
          v16 += 12;
        }
        while ( v17 );
      }
      v14 = (_DWORD *)*v14;
    }
    while ( v14 );
    qsort(v31, v7, 4u, (__compar_fn_t)sub_1B3EC4);
    v31[0] = 0;
    if ( v7 )
    {
      v19 = &v31[4 * v7];
      v20 = v9 + 1;
      do
      {
        sub_258BD4(v18);
        v21 = *(_DWORD *)v15;
        v15 += 4;
        v22 = sub_21B3C4(v21);
        v23 = v22;
        v24 = v22 + 2;
        if ( v31[0] )
        {
          v18 = sub_1B3E2C((unsigned __int8 *)(v22 + 2), v31);
          if ( !v18 )
            continue;
        }
        v25 = *(_BYTE *)(v23 + 2);
        if ( (v25 & 0xDF) != 0 )
        {
          v26 = v24;
          v27 = v31;
          do
          {
            *v27++ = v25;
            v28 = *(_BYTE *)++v26;
            v25 = v28;
          }
          while ( (v28 & 0xDF) != 0 );
        }
        else
        {
          v27 = v31;
        }
        *v27 = 0;
        v18 = ((int (__fastcall *)(unsigned __int8 *, char *, _DWORD))loc_25A528)(v31, v20, 0);
      }
      while ( v19 != v15 );
    }
  }
  else
  {
    qsort(v31, 0, 4u, (__compar_fn_t)sub_1B3EC4);
    v31[0] = 0;
  }
  return sub_25A6C8(v18);
}
