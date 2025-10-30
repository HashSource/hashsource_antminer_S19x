_DWORD *__fastcall sub_FD9C8(_DWORD *a1, char *a2, char *a3, _DWORD *a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4
  _DWORD *v13; // r6
  int v14; // r10
  size_t v15; // r0
  const char *v16; // r1
  int v17; // r3
  bool v18; // zf
  char *v19; // r2
  const char *v20; // r1
  const char *v22; // r1
  _DWORD *v23; // r11
  const char *v24; // t1
  const char *v25; // r1
  int v26; // [sp+14h] [bp-10h]
  char *v27; // [sp+14h] [bp-10h]
  int v28; // [sp+18h] [bp-Ch] BYREF
  int v29; // [sp+1Ch] [bp-8h]

  v8 = a6;
  if ( a6 )
  {
    sub_FD740(&v28, a2, a3, a4, a5);
    v8 = v29;
    if ( v28 )
    {
      *a1 = v28;
      a1[1] = v8;
      return a1;
    }
  }
  v13 = (_DWORD *)sub_C2618((int)a4);
  if ( !v13 )
  {
LABEL_27:
    *a1 = 0;
    a1[1] = 0;
    return a1;
  }
  v14 = 0;
  while ( 1 )
  {
    v15 = strlen((const char *)v13[1]);
    v16 = (const char *)v13[1];
    if ( a8 )
    {
      v26 = v15;
      if ( strncmp(a2, v16, v15) )
        goto LABEL_26;
      if ( v26 )
      {
        v17 = (unsigned __int8)a2[v26];
        v18 = v17 == 58;
        if ( v17 != 58 )
          v18 = v17 == 0;
        if ( !v18 )
          goto LABEL_26;
      }
    }
    else if ( strcmp(a2, v16) )
    {
      goto LABEL_26;
    }
    if ( !v13[5] )
      break;
LABEL_26:
    v13 = (_DWORD *)v13[4];
    if ( !v13 )
      goto LABEL_27;
  }
  v19 = (char *)v13[3];
  v13[5] = 1;
  if ( v19 )
  {
    v20 = (const char *)v13[2];
    v27 = v19;
    if ( !v20 )
      v20 = v19;
    if ( !strcmp(a3, v20) )
    {
      sub_FD740(&v28, (char *)*v13, v27, a4, a5);
      v14 = v28;
      v8 = v29;
    }
  }
  if ( a7 )
  {
    if ( v14 )
    {
LABEL_19:
      *a1 = v14;
      a1[1] = v8;
      goto LABEL_20;
    }
    goto LABEL_25;
  }
  if ( v14 )
    goto LABEL_19;
  if ( v13[3] )
    goto LABEL_25;
  v22 = (const char *)v13[6];
  if ( v22 )
  {
    v23 = v13 + 6;
    while ( strcmp(a3, v22) )
    {
      v24 = (const char *)v23[1];
      ++v23;
      v22 = v24;
      if ( !v24 )
        goto LABEL_36;
    }
    goto LABEL_25;
  }
LABEL_36:
  v25 = (const char *)v13[2];
  if ( v25 )
  {
    if ( !strcmp(a3, v25) )
    {
      sub_FD740(&v28, a2, (char *)*v13, a4, a5);
      goto LABEL_39;
    }
LABEL_25:
    v13[5] = 0;
    goto LABEL_26;
  }
  sub_FD9C8(&v28, *v13, a3, a4, a5, 1, 0, 0);
LABEL_39:
  v8 = v29;
  if ( !v28 )
    goto LABEL_25;
  *a1 = v28;
  a1[1] = v8;
LABEL_20:
  v13[5] = 0;
  return a1;
}
