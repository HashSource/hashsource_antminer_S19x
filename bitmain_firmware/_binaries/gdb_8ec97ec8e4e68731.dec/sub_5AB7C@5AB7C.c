int __fastcall sub_5AB7C(unsigned __int8 **a1, int a2, int a3, unsigned __int8 *a4)
{
  unsigned __int8 *v6; // r2
  int v7; // r0
  int v8; // r7
  unsigned __int8 *v9; // r4
  int v10; // r9
  int v11; // r8
  int v12; // r0
  bool v13; // zf
  int v14; // r3
  int v15; // r0
  int v17; // r0
  int v18; // r4
  const char *v19; // r9
  unsigned __int8 *i; // r10
  int v21; // r4
  unsigned __int8 *v22; // r8
  int v23; // r0
  _BOOL4 v24; // r3
  size_t v25; // r10
  char *v26; // r0
  int v27; // r0
  int j; // r0
  int v29; // r3
  char v30[4]; // [sp+0h] [bp-34h] BYREF
  unsigned __int8 *v31; // [sp+4h] [bp-30h] BYREF
  int v32[3]; // [sp+8h] [bp-2Ch] BYREF

  v6 = *a1;
  v31 = v6;
  v7 = *v6;
  if ( v7 == 45 )
  {
    a4 = v6 + 1;
    v8 = 1;
    v31 = v6 + 1;
  }
  else
  {
    v8 = 0;
  }
  if ( v7 == 45 )
  {
    v7 = v6[1];
    v6 = a4;
  }
  if ( v7 == 36 )
  {
    v17 = sub_26DDC8(v6, &v31);
    v18 = v17;
    if ( v17 )
    {
      if ( **(_BYTE **)(sub_26BC70(v17) + 24) == 8 )
      {
        v10 = sub_26EB1C(v18);
      }
      else
      {
        v10 = 0;
        sub_259F10("History value must have integer type.\n");
      }
    }
    else
    {
      v19 = (const char *)(v31 + 1);
      for ( i = ++v31; ; ++i )
      {
        v22 = i + 1;
        v21 = *i;
        v23 = isalnum(v21);
        v24 = v21 != 95;
        if ( v23 )
          v24 = 0;
        if ( v24 )
          break;
        v31 = v22;
      }
      v25 = i - (unsigned __int8 *)v19;
      v26 = strncpy(v30, v19, v25);
      v30[v25] = 0;
      v27 = sub_26CBF4(v26);
      v10 = sub_26EB3C(v27, v32);
      if ( v10 )
        v10 = v32[0];
      else
        sub_259F10("Convenience variable must have integer value.\n");
    }
  }
  else
  {
    v9 = v6;
    if ( (unsigned int)(v7 - 48) > 9 )
      goto LABEL_50;
    do
    {
      v31 = ++v9;
      v7 = *v9;
    }
    while ( (unsigned int)(v7 - 48) <= 9 );
    if ( v9 == v6 )
    {
LABEL_50:
      while ( 1 )
      {
        if ( !v7 )
        {
          v10 = 0;
          goto LABEL_20;
        }
        ++v9;
        if ( isspace(v7) )
          break;
        v31 = v9;
        v7 = *v9;
      }
      v10 = 0;
    }
    else
    {
      v10 = strtol((const char *)v6, 0, 10);
    }
  }
  v9 = v31;
  v11 = *v31;
  v12 = isspace(v11);
  v13 = v11 == a2;
  if ( v11 != a2 )
    v13 = v11 == 0;
  v14 = !v13;
  if ( v12 )
    v15 = 0;
  else
    v15 = v14;
  if ( v15 )
  {
    for ( j = 0; ; j = isspace(v11) )
    {
      v29 = v11 == 0;
      if ( j )
        v29 = 1;
      if ( v11 == a2 )
        v29 |= 1u;
      if ( v29 )
        break;
      v31 = ++v9;
      v11 = *v9;
    }
    v10 = 0;
  }
LABEL_20:
  *a1 = (unsigned __int8 *)sub_9360C(v9);
  if ( v8 )
    return -v10;
  return v10;
}
