int __fastcall sub_2A5400(int a1)
{
  int *i; // r4
  unsigned int v3; // r7
  unsigned int v4; // r7
  int v5; // r5
  int v6; // r0
  int v8; // r0
  char *v9; // r6
  bool v10; // zf
  int v11; // r1
  int v12; // r3
  void (__fastcall *v13)(int, int, char *); // r3
  int v14; // r1
  int v15; // r0
  int *v16; // r6
  __gid_t v17; // r0
  int v18; // r2
  const char *v19; // r0
  int v20; // r5
  unsigned int v21; // r4
  unsigned int v22; // r6
  int v23; // r1
  int v24; // r5
  int *v25; // r10
  int v26; // r0
  int v27; // r11
  int v28; // r7
  size_t v29; // r0
  int v30; // r0
  int v31; // [sp+1Ch] [bp-2010h] BYREF
  unsigned int v32; // [sp+20h] [bp-200Ch] BYREF
  char *v33; // [sp+24h] [bp-2008h] BYREF
  _DWORD s[20]; // [sp+28h] [bp-2004h] BYREF
  time_t timer; // [sp+78h] [bp-1FB4h] BYREF

  i = *(int **)(a1 + 148);
  v3 = *(unsigned __int8 *)(a1 + 43);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v4 = v3 >> 7;
  if ( i )
  {
    v5 = i[10] & 0x10;
    if ( (i[10] & 0x10) != 0 )
    {
LABEL_24:
      v8 = ((int (__fastcall *)(int))loc_2A6C48)(5);
      goto LABEL_25;
    }
    while ( 1 )
    {
      if ( !i[34] )
      {
        if ( (((unsigned int)i[10] >> 5) & 0x800) != 0 )
        {
          v16 = (int *)i[2];
          time(&timer);
          s[6] = getuid();
          v17 = getgid();
          v18 = *v16;
          s[7] = v17;
          s[13] = 0;
          s[12] = v18;
          s[4] = 420;
        }
        else if ( _xstat64(3, *i, s) )
        {
          v8 = ((int (__fastcall *)(int))loc_2A6C48)(1);
          i[34] = 0;
LABEL_25:
          v15 = sub_2A6910(v8);
          sub_2A6C78(i, v15);
          return 0;
        }
        if ( (*(_DWORD *)(a1 + 40) & 0x40000) != 0 )
        {
          timer = 0;
          s[6] = 0;
          s[7] = 0;
          s[4] = 420;
        }
        v8 = sub_2AB4EC(100);
        v9 = (char *)v8;
        if ( !v8 )
        {
          i[34] = 0;
          goto LABEL_25;
        }
        memset((void *)(v8 + 40), 32, 0x3Cu);
        sub_2A3308(v9 + 56, 0xCu, "%-12ld");
        sub_2A3308(v9 + 68, 6u, "%ld");
        sub_2A3308(v9 + 74, 6u, "%ld");
        sub_2A3308(v9 + 80, 8u, "%-8lo");
        v10 = s[13] == 0;
        if ( !s[13] )
          v10 = 1;
        if ( !v10 )
        {
          ((void (__fastcall *)(int))loc_2A6C48)(19);
          free(v9);
          i[34] = 0;
          goto LABEL_25;
        }
        if ( !sub_2A3370(v9 + 88, 0xAu, s[12]) )
        {
          free(v9);
          i[34] = 0;
          goto LABEL_25;
        }
        *((_WORD *)v9 + 49) = *(_WORD *)"`\n";
        v11 = s[12];
        v12 = *(_DWORD *)(a1 + 4);
        *(_DWORD *)v9 = v9 + 40;
        *((_DWORD *)v9 + 1) = v11;
        v13 = *(void (__fastcall **)(int, int, char *))(v12 + 228);
        v14 = *i;
        i[34] = (int)v9;
        v13(a1, v14, v9 + 40);
      }
      if ( (v4 & (v5 ^ 1)) != 0 )
      {
        v6 = sub_2AA86C(i, 1);
        i = (int *)i[36];
        v5 = v6;
        if ( v6 )
          v5 = 1;
        if ( !i )
          goto LABEL_11;
      }
      else
      {
        i = (int *)i[36];
        if ( !i )
          goto LABEL_11;
      }
      if ( (i[10] & 0x10) != 0 )
        goto LABEL_24;
    }
  }
  v5 = 0;
LABEL_11:
  if ( !(*(int (__fastcall **)(int, int *, unsigned int *, char **))(*(_DWORD *)(a1 + 4) + 224))(a1, &v31, &v32, &v33)
    || sub_2A8A04(a1, 0, 0, 0, 0) )
  {
    return 0;
  }
  v19 = "!<thin>\n";
  if ( (*(_BYTE *)(a1 + 44) & 1) == 0 )
    v19 = "!<arch>\n";
  if ( sub_2A8884(v19, 8, a1) != 8 )
    return 0;
  v20 = v4 & v5;
  v21 = v32;
  if ( v20 )
  {
    if ( !sub_2A504C(a1, v32) )
      return 0;
    v21 = v32;
  }
  if ( v21 )
  {
    memset(s, 32, 0x3Cu);
    v29 = strlen(v33);
    memcpy(s, v33, v29);
    if ( !sub_2A3370((char *)&s[12], 0xAu, (v21 + 1) & 0xFFFFFFFE) )
      return 0;
    HIWORD(s[14]) = 2656;
    if ( sub_2A8884(s, 60, a1) != 60 )
      return 0;
    v30 = sub_2A8884(v31, v32, a1);
    if ( v30 != v32 || (v30 & 1) != 0 && sub_2A8884("\n", 1, a1) != 1 )
      return 0;
  }
  for ( i = *(int **)(a1 + 148); i; i = (int *)i[36] )
  {
    v22 = *(_DWORD *)(i[34] + 4);
    if ( !(*(int (__fastcall **)(int, int *))(i[1] + 240))(a1, i) )
      return 0;
    if ( (*(_BYTE *)(a1 + 44) & 1) == 0 )
    {
      v8 = sub_2A8A04(i, v23, 0, 0, *(_BYTE *)(a1 + 44) & 1);
      if ( v8 )
        goto LABEL_25;
      if ( v22 )
      {
        v25 = _errno_location();
        while ( 1 )
        {
          v27 = v22 >= 0x2000 ? 0x2000 : v22;
          *v25 = 0;
          v28 = sub_2A87D8(s, v27, i);
          if ( v28 != v27 )
            break;
          v26 = sub_2A8884(s, v28, a1);
          if ( v26 != v28 )
            return 0;
          v22 -= v26;
          if ( !v22 )
            goto LABEL_65;
        }
        v8 = sub_2A6910(s);
        if ( v8 != 1 )
          v8 = ((int (__fastcall *)(int))loc_2A6C48)(18);
        goto LABEL_25;
      }
LABEL_65:
      if ( (*(_DWORD *)(i[34] + 4) & 1) != 0 && sub_2A8884("\n", 1, a1) != 1 )
        return 0;
    }
  }
  if ( v20 )
  {
    v24 = 5;
    do
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)(a1 + 4) + 256))(a1) )
        break;
      sub_2A6A5C("Warning: writing archive was slow: rewriting timestamp\n");
      --v24;
    }
    while ( v24 );
  }
  return 1;
}
