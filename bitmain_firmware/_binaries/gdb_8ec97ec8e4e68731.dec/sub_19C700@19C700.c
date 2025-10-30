_DWORD *__fastcall sub_19C700(_DWORD *a1, const char **a2, _DWORD *a3, int a4)
{
  const char *v5; // r4
  const char *v10; // r0
  int v11; // r5
  int v12; // r1
  const char *v13; // r2
  int v14; // r0
  unsigned __int8 *v15; // r12
  int v16; // r3
  int v17; // t1
  size_t v18; // r0
  char v19; // r3
  const char *v20; // r5
  int v21; // r8
  bool v22; // zf
  bool v23; // zf
  _BOOL4 v24; // r0
  int v26; // r0
  bool v27; // zf
  const char *v28; // r8
  bool v29; // zf

  v5 = *a2;
  if ( !**a2 )
    goto LABEL_2;
  v10 = sub_199328();
  v11 = *(unsigned __int8 *)v5;
  if ( !strchr(v10, v11) )
  {
    v19 = v11 - 43;
    v20 = *a2;
    v21 = *(unsigned __int8 *)*a2;
    if ( (v19 & 0xFD) != 0 )
    {
      while ( (unsigned int)(v21 - 48) <= 9 )
      {
        *a2 = ++v20;
        v21 = *(unsigned __int8 *)v20;
      }
      if ( !v21 )
        goto LABEL_47;
      v24 = isspace(v21) != 0;
      if ( v21 == 44 ? v24 | 1 : v24 )
        goto LABEL_47;
      *a2 = v5;
      v26 = *(unsigned __int8 *)v5;
      v27 = v26 == 0;
      if ( *v5 )
        v27 = v26 == 44;
      if ( !v27 )
      {
        v20 = v5;
        while ( !isspace(v26) && !sub_197410((char *)v20 + 1) )
        {
          v28 = *a2;
          if ( *a3 == 4 && !strncmp(*a2, "operator", 8u) )
            v28 += 8;
          v20 = v28 + 1;
          *a2 = v28 + 1;
          v26 = *((unsigned __int8 *)v28 + 1);
          v29 = v26 == 0;
          if ( v28[1] )
            v29 = v26 == 44;
          if ( v29 )
            goto LABEL_46;
        }
        goto LABEL_45;
      }
      v20 = v5;
    }
    else
    {
      v22 = v21 == 0;
      if ( **a2 )
        v22 = v21 == 44;
      if ( !v22 )
      {
        while ( !isspace(v21) )
        {
          *a2 = ++v20;
          v21 = *(unsigned __int8 *)v20;
          v23 = v21 == 44;
          if ( v21 != 44 )
            v23 = v21 == 0;
          if ( v23 )
            goto LABEL_46;
        }
LABEL_45:
        v20 = *a2;
      }
    }
LABEL_46:
    if ( v20 - v5 <= 0 )
    {
LABEL_2:
      *a1 = 0;
      return a1;
    }
LABEL_47:
    *a1 = sub_93330(v5, v20 - v5);
    return a1;
  }
  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = v5;
    v12 = *((unsigned __int8 *)v5 + 1);
    v11 = *(unsigned __int8 *)v5;
    if ( !v5[1] )
      goto LABEL_34;
  }
  else
  {
    v12 = *((unsigned __int8 *)v5 + 1);
    if ( !v5[1] )
      goto LABEL_29;
  }
  v13 = v5 + 1;
  v14 = 0;
  while ( 1 )
  {
    v15 = (unsigned __int8 *)(v13 + 1);
    if ( !v14 )
    {
      v14 = v12;
      v15 = (unsigned __int8 *)v13++;
      goto LABEL_16;
    }
    v16 = *((unsigned __int8 *)v13 + 1);
    if ( v12 != v14 )
    {
      if ( v12 != 92 )
      {
        ++v13;
        v12 = v16;
        goto LABEL_11;
      }
      if ( v13[1] )
      {
        v17 = *((unsigned __int8 *)v13 + 2);
        v13 += 2;
        v12 = v17;
        goto LABEL_11;
      }
LABEL_33:
      if ( a4 )
      {
LABEL_34:
        v18 = strlen(v5);
        *a2 = &v5[v18];
        *a1 = sub_93330(v5 + 1, v18 - 1);
        return a1;
      }
LABEL_29:
      sub_946E0("Unmatched quote, %s.", v5);
    }
    if ( !v13[1] )
      goto LABEL_33;
    v13 += 2;
    v14 = v16;
LABEL_16:
    if ( v14 == v11 )
      goto LABEL_25;
    v12 = v15[1];
    if ( v14 != 34 && v14 != 39 )
      break;
LABEL_11:
    if ( !v12 )
      goto LABEL_33;
  }
  if ( !v15[1] )
    goto LABEL_33;
  v15 = (unsigned __int8 *)v13;
  v14 = v12;
  ++v13;
  for ( ; v11 != v12; v14 = *(unsigned __int8 *)v13++ )
  {
    v12 = *(unsigned __int8 *)v13;
    if ( v14 == 34 || v14 == 39 )
      goto LABEL_11;
    v15 = (unsigned __int8 *)v13;
    if ( !*v13 )
      goto LABEL_33;
  }
LABEL_25:
  if ( a4 )
    *(_DWORD *)(a4 + 8) = v15;
  *a2 = v13;
  *a1 = sub_93330(v5 + 1, v13 - v5 - 2);
  return a1;
}
