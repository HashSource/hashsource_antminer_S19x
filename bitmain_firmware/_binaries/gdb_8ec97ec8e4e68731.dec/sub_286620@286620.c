int __fastcall sub_286620(const char **a1, signed int a2, int a3)
{
  char *v5; // r4
  char *v6; // r0
  const char *v7; // r7
  int v8; // r5
  int v9; // r3
  int v10; // r4
  char *v11; // r0
  int v12; // r6
  int v13; // r0
  int v14; // r8
  int v15; // r10
  unsigned int v16; // r4
  int result; // r0
  char *v18; // r4
  int v19; // r7
  int v20; // r10
  char **i; // r6
  char *v22; // r0
  char *v23; // r11
  int v24; // r4
  int v25; // r0
  int v26; // r1
  char *v27; // t1
  int v28; // r7
  signed int v29; // r6
  __int16 *v30; // r4
  char *v31; // r0
  int v32; // r4
  int v33; // r8
  _BOOL4 v34; // r2
  int v35; // r4
  int j; // r11
  size_t v37; // [sp+4h] [bp-28h]
  int v39; // [sp+Ch] [bp-20h]
  int v40; // [sp+10h] [bp-1Ch]
  int v41; // [sp+14h] [bp-18h]
  int v42; // [sp+18h] [bp-14h]
  _BOOL4 v43; // [sp+20h] [bp-Ch]

  if ( dword_48AD20 <= 0 )
    goto LABEL_9;
  v5 = (char *)*a1;
  if ( dword_48ACC0 )
    v5 = sub_2852E0(*a1);
  v6 = strrchr(v5, 47);
  v7 = v6;
  if ( v6 )
  {
    v8 = sub_284798(v6);
    v37 = strlen(v7);
  }
  else
  {
    v8 = sub_284798(v5);
    v37 = strlen(v5);
  }
  v9 = dword_48AD20;
  if ( dword_48AD20 < 3 )
    v9 = 3;
  if ( v9 < v8 )
    a3 -= v8 - 3;
  else
LABEL_9:
    v37 = 0;
  v10 = dword_470760;
  if ( dword_470760 < 0 )
  {
    v11 = getenv("COLUMNS");
    if ( !v11 || !*v11 )
      goto LABEL_72;
  }
  else
  {
    if ( dword_470760 <= dword_490144 )
      goto LABEL_17;
    v11 = getenv("COLUMNS");
    if ( !v11 || !*v11 )
      goto LABEL_15;
  }
  v10 = strtol(v11, 0, 10);
  if ( v10 < 0 )
  {
LABEL_72:
    v10 = dword_490144;
    goto LABEL_17;
  }
LABEL_15:
  if ( v10 >= dword_490144 )
    v10 = dword_490144;
LABEL_17:
  v12 = a3 + 2;
  v39 = v12;
  v13 = sub_347690(v10);
  v14 = v13;
  if ( v13 == 1 )
  {
    v15 = a2;
  }
  else
  {
    if ( v13 * v12 == v10 )
      v14 = v13 - 1;
    if ( dword_490144 > v10 )
      v16 = (unsigned int)v14 >> 31;
    else
      v16 = 0;
    if ( !v16 && v14 )
    {
      v15 = sub_347690(v14 - 1 + a2);
    }
    else
    {
      v15 = a2;
      v14 = 1;
    }
  }
  if ( !dword_470750 && dword_470754 )
    qsort(a1 + 1, a2, 4u, (__compar_fn_t)sub_29160C);
  result = ((int (*)(void))sub_2945A8)();
  if ( dword_4900FC )
  {
    v18 = (char *)a1[1];
    if ( v18 )
    {
      v19 = 1;
      v20 = 0;
      for ( i = (char **)(a1 + 2); ; ++i )
      {
        while ( 1 )
        {
          v22 = v18;
          if ( dword_48ACC0 )
            v22 = sub_2852E0(v18);
          result = sub_2853FC(v22, (__int16 *)v18, v37);
          v23 = *i;
          v24 = result;
          if ( !*i )
            return sub_2945A8(result);
          if ( v14 <= 1 )
            break;
          v25 = sub_347924(v19, v14);
          if ( v26 )
            break;
          result = sub_2945A8(v25);
          ++v20;
          if ( dword_470764 )
          {
            if ( dword_49014C - 1 <= v20 )
            {
              result = sub_284938(v20);
              v20 = result;
              if ( result < 0 )
                return result;
            }
          }
LABEL_40:
          v27 = *i++;
          v18 = v27;
          ++v19;
          if ( !v27 )
            return sub_2945A8(result);
        }
        v35 = v39 - v24;
        if ( v35 > 0 )
        {
          for ( j = 0; j != v35; ++j )
            result = IO_putc(32, (_IO_FILE *)dword_48AAB0);
          goto LABEL_40;
        }
        ++v19;
        v18 = v23;
      }
    }
    return sub_2945A8(result);
  }
  else if ( v15 > 0 )
  {
    v42 = dword_4900FC;
    v43 = v14 <= 0;
    v41 = 1;
    v40 = v14;
    do
    {
      v28 = v43;
      v29 = v41;
      if ( a2 < v41 )
        v28 = v43 | 1;
      if ( !v28 )
      {
        do
        {
          v30 = (__int16 *)a1[v29];
          if ( !v30 )
            break;
          v31 = (char *)a1[v29];
          if ( dword_48ACC0 )
            v31 = sub_2852E0(v31);
          result = sub_2853FC(v31, v30, v37);
          if ( ++v28 >= v40 )
            break;
          v32 = v39 - result;
          if ( v39 - result > 0 )
          {
            v33 = 0;
            do
            {
              ++v33;
              result = IO_putc(32, (_IO_FILE *)dword_48AAB0);
            }
            while ( v33 != v32 );
          }
          v29 += v15;
        }
        while ( a2 >= v29 );
      }
      result = sub_2945A8(result);
      ++v42;
      if ( dword_470764 )
      {
        result = v42;
        v34 = dword_49014C - 1 <= v42;
        if ( v15 <= v41 )
          v34 = 0;
        if ( v34 )
        {
          result = sub_284938(v42);
          v42 = result;
          if ( result < 0 )
            break;
        }
      }
      ++v41;
    }
    while ( v41 <= v15 );
  }
  return result;
}
