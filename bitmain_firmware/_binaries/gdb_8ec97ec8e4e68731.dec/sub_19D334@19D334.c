_DWORD *__fastcall sub_19D334(_DWORD *a1, const char **a2, int a3, int a4)
{
  const char *v7; // r3
  int v10; // r5
  int v11; // r0
  bool v12; // zf
  _BOOL4 v13; // r1
  _DWORD *v14; // r3
  char *v15; // r0
  int v16; // r5
  bool v17; // zf
  _BOOL4 v18; // r5
  size_t v19; // r9
  int v20; // r0
  char *v21; // r8
  char *v22; // r10
  int v23; // r0
  char *v24; // r0
  int v25; // r0
  _BYTE *v26; // r8
  const char *v27; // r0
  int v28; // r8
  bool v29; // zf
  char *v30; // r0
  char v31; // r3
  void *v32; // r5
  const char *v33; // r0
  int v34; // r0
  size_t v35; // r0
  char *v36; // r8
  char *v37; // r0
  char *v38; // r9
  char *v39; // r0
  bool v40; // cf
  char *i; // r0
  char *v42; // r8
  char *v43; // r3
  int v44; // t1
  void *v45; // r0
  _DWORD *v46; // r8
  int v47; // r1
  bool v48; // cf
  _BYTE *v49; // r0
  _DWORD *v50; // [sp+4h] [bp-38h]
  char *v51; // [sp+4h] [bp-38h]
  const char *v52; // [sp+Ch] [bp-30h]
  int v53[2]; // [sp+18h] [bp-24h] BYREF
  _DWORD *v54; // [sp+20h] [bp-1Ch] BYREF
  char *s; // [sp+24h] [bp-18h] BYREF
  void *ptr; // [sp+28h] [bp-14h] BYREF
  _BOOL4 v57; // [sp+2Ch] [bp-10h] BYREF
  void *v58; // [sp+30h] [bp-Ch] BYREF
  _BOOL4 v59[2]; // [sp+34h] [bp-8h] BYREF

  v54 = 0;
  if ( !a2 )
    goto LABEL_4;
  v7 = *a2;
  if ( !*a2 || *v7 != 45 )
    goto LABEL_4;
  v10 = *((unsigned __int8 *)v7 + 1);
  v11 = isalpha(v10);
  v12 = v11 == 0;
  if ( v11 )
    v12 = v10 == 112;
  v13 = v12;
  if ( v12 )
  {
LABEL_4:
    *a1 = 0;
    return a1;
  }
  sub_19D0B8((int)&ptr, (int *)v13);
  v14 = ptr;
  ptr = 0;
  v12 = v54 == 0;
  v54 = v14;
  if ( !v12 )
  {
    ((void (__fastcall *)(_DWORD **))loc_19D154)(&v54);
    if ( ptr )
      ((void (__fastcall *)(void **))loc_19D154)(&ptr);
  }
  while ( 1 )
  {
    v15 = (char *)*a2;
    v16 = *(unsigned __int8 *)*a2;
    v17 = v16 == 0;
    if ( **a2 )
      v17 = v16 == 44;
    v18 = v17;
    if ( v17 )
      break;
    if ( a4 )
    {
      *(_DWORD *)(a4 + 4) = v18;
      *(_DWORD *)(a4 + 8) = v18;
      v15 = (char *)*a2;
    }
    if ( sub_197410(v15) )
      break;
    v52 = *a2;
    if ( a4 )
      *(_DWORD *)a4 = *a2;
    v50 = (_DWORD *)(a3 + 8);
    sub_19C700(&s, a2, (_DWORD *)(a3 + 8), 0);
    v19 = strlen(s);
    v20 = sub_9360C(*a2);
    v21 = s;
    *a2 = (const char *)v20;
    v22 = (char *)v20;
    ptr = 0;
    if ( !strncmp(v21, "-source", v19) )
    {
      sub_19C700(&v57, a2, v50, a4);
      v18 = v57;
      if ( a4 )
        *(_BYTE *)(a4 + 12) = 1;
      v54[1] = v18;
      v25 = sub_9360C(*a2);
LABEL_36:
      *a2 = (const char *)v25;
      if ( !v18 && !a4 )
LABEL_38:
        sub_946E0("missing argument for \"%s\"", s);
      goto LABEL_31;
    }
    if ( !strncmp(v21, "-function", v19) )
    {
      if ( !*v22 )
      {
        v26 = (_BYTE *)(unsigned __int8)*v22;
        goto LABEL_48;
      }
      v27 = sub_199328();
      v28 = (unsigned __int8)*v22;
      if ( !strchr(v27, (unsigned __int8)*v22) )
        goto LABEL_78;
      v29 = v28 == 34;
      if ( v28 == 34 )
        v29 = *(_DWORD *)(a3 + 8) == 14;
      if ( v29 && sub_19741C(v22) )
      {
LABEL_78:
        v36 = sub_197488(v22, 44);
        if ( *v22 == 45 )
          v37 = sub_197488(v22 + 1, 45);
        else
          v37 = sub_197488(v22, 45);
        v51 = v37;
        v38 = sub_19C5EC(v22, v36);
        v39 = sub_19C5EC(v22, v51);
        if ( v39 )
        {
          v40 = 1;
          if ( v38 )
            v40 = v38 >= v39;
          if ( v40 )
            v38 = v39;
        }
        for ( i = sub_197488(v22, 32); ; i = sub_197488(v42, 32) )
        {
          if ( !i )
            goto LABEL_89;
          v42 = i + 1;
          if ( sub_197410(i + 1) )
            break;
        }
        if ( !v38 )
          goto LABEL_113;
        v48 = 1;
        if ( v42 )
          v48 = v42 >= v38;
        if ( !v48 )
        {
LABEL_113:
          v38 = v42;
LABEL_89:
          if ( !v38 )
            v38 = &v22[strlen(v22)];
        }
        if ( v22 < v38 && *(v38 - 1) == 32 )
        {
          v43 = v38 - 1;
          do
          {
            v38 = v43;
            if ( v22 == v43 )
              break;
            v44 = (unsigned __int8)*--v43;
          }
          while ( v44 == 32 );
        }
        *a2 = v38;
        if ( v38 - v22 > 0 )
        {
          v49 = sub_93330(v22, v38 - v22);
          v18 = (_BOOL4)v49;
          v26 = v49;
          if ( v49 )
            v18 = 1;
        }
        else
        {
          v26 = 0;
        }
        v45 = ptr;
        if ( a4 )
          *(_BYTE *)(a4 + 12) = 1;
        if ( v45 )
          free(v45);
        goto LABEL_50;
      }
      if ( a4 )
        *(_DWORD *)(a4 + 4) = v22;
      v30 = sub_197488(v22 + 1, v28);
      if ( v30 )
      {
        if ( a4 )
          *(_DWORD *)(a4 + 8) = v30;
        *a2 = v30 + 1;
        v26 = sub_93330(v22 + 1, v30 + 1 - v22 - 2);
        v18 = v26 != 0;
LABEL_48:
        if ( a4 )
LABEL_49:
          *(_BYTE *)(a4 + 12) = 1;
LABEL_50:
        ptr = 0;
        v54[2] = v26;
        v25 = sub_9360C(*a2);
        goto LABEL_36;
      }
      if ( !a4 )
        sub_946E0("Unmatched quote, %s.", v22);
      v35 = strlen(v22);
      *a2 = &v22[v35];
      v26 = sub_93330(v22 + 1, v35 - 1);
      v18 = v26 != 0;
      goto LABEL_49;
    }
    if ( !strncmp(v21, "-qualified", v19) )
    {
      v54[3] = 1;
      v23 = sub_9360C(*a2);
LABEL_30:
      *a2 = (const char *)v23;
LABEL_31:
      v24 = s;
      if ( s )
        goto LABEL_32;
    }
    else
    {
      if ( strncmp(v21, "-line", v19) )
      {
        if ( !strncmp(v21, "-label", v19) )
        {
          sub_19C700(v59, a2, v50, a4);
          v18 = v59[0];
          if ( a4 )
            *(_BYTE *)(a4 + 12) = 1;
          v54[4] = v18;
          v25 = sub_9360C(*a2);
          goto LABEL_36;
        }
        if ( *v21 != 45 || (unsigned int)(unsigned __int8)v21[1] - 48 <= 9 )
        {
          *a2 = v52;
          free(v21);
          break;
        }
        if ( !a4 )
          sub_946E0("invalid explicit location argument, \"%s\"", v21);
        v23 = sub_9360C(v22);
        goto LABEL_30;
      }
      sub_19C700(&v58, a2, v50, 0);
      v32 = v58;
      if ( a4 )
        v31 = 1;
      v33 = *a2;
      if ( a4 )
        *(_BYTE *)(a4 + 12) = v31;
      ptr = v32;
      v34 = sub_9360C(v33);
      *a2 = (const char *)v34;
      if ( !v32 )
      {
        *a2 = (const char *)sub_9360C(v34);
        if ( !a4 )
          goto LABEL_38;
        goto LABEL_31;
      }
      v46 = v54;
      sub_198D60(v53, (char *)v32);
      v47 = v53[1];
      v46 += 5;
      *v46 = v53[0];
      v46[1] = v47;
      free(v32);
      v24 = s;
      if ( s )
LABEL_32:
        free(v24);
    }
  }
  if ( v54[1] && !v54[2] && !v54[4] && v54[6] == 3 && !a4 )
    sub_946E0("Source filename requires function, label, or line offset.");
  *a1 = v54;
  return a1;
}
