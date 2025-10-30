char *__fastcall sub_85F40(int a1, int *a2, char *s, int a4, int a5)
{
  char *v9; // r0
  int v10; // t1
  char *v11; // r0
  char *v12; // r3
  unsigned __int8 *v13; // r6
  unsigned int v14; // r2
  _BOOL4 v15; // r11
  char *v16; // r0
  int v17; // r3
  int v18; // t1
  bool v19; // zf
  unsigned int v20; // r2
  char *result; // r0
  int v22; // r3
  int v23; // r3
  void ***v24; // r1
  int v25; // r5
  int v26; // r3
  int v27; // r2
  int v28; // r2
  char *v29; // r0
  int v30; // r3
  char *v31; // r0
  int v32; // r3
  int v33; // t1
  int v34; // r3
  char *v35; // [sp+4h] [bp-10h]

  v9 = (char *)dword_1073B8;
  if ( !dword_1073B8 )
    v9 = sub_7E2F8(45);
  if ( v9[(unsigned __int8)*s] )
  {
    do
      v10 = (unsigned __int8)*++s;
    while ( v9[v10] );
  }
  v11 = strpbrk(s, " \t\n:=");
  v12 = v11;
  if ( v11 )
  {
    v13 = (unsigned __int8 *)(v11 + 1);
    if ( a5 == 2 )
    {
      *v11 = 0;
    }
    else
    {
      v14 = (unsigned __int8)*v11;
      v15 = v14 <= 0x7F && (dword_9F184[v14] & 0xC01) != 0;
      *v11 = 0;
      v16 = (char *)dword_107334;
      if ( !dword_107334 )
      {
        v35 = v12;
        v16 = sub_7E2F8(12);
        v12 = v35;
      }
      v17 = (unsigned __int8)v12[1];
      if ( v16[v17] )
      {
        do
        {
          v18 = *++v13;
          v17 = v18;
        }
        while ( v16[v18] );
      }
      if ( v15 )
      {
        v19 = v17 == 61;
        if ( v17 != 61 )
          v19 = v17 == 58;
        if ( v19 )
        {
          v31 = (char *)dword_107334;
          if ( !dword_107334 )
            v31 = sub_7E2F8(12);
          v32 = *++v13;
          if ( v31[v32] )
          {
            do
              v33 = *++v13;
            while ( v31[v33] );
          }
        }
      }
    }
  }
  else
  {
    v13 = (unsigned __int8 *)&s[strlen(s)];
  }
  v20 = (unsigned __int8)s[1];
  if ( v20 <= 0x7F && (dword_9F184[v20] & 0x3B0040) != 0 )
  {
    result = (char *)sub_85A98(a1, s, a2);
    if ( result )
      return result;
    if ( !a4 )
      goto LABEL_23;
  }
  else
  {
    result = (char *)sub_7DFF0(a1, (unsigned __int8)*s, a2, a2 + 3);
    if ( result )
      return result;
    if ( !a4 )
    {
LABEL_23:
      v22 = *v13;
      if ( v22 != 34 && v22 != 39 )
      {
        a2[1] = (int)v13;
        goto LABEL_27;
      }
      goto LABEL_56;
    }
  }
  v26 = a2[2];
  if ( (v26 & 0x100) != 0 )
    return result;
  v27 = *v13;
  if ( v27 != 34 && v27 != 39 )
  {
    a2[1] = (int)v13;
    goto LABEL_37;
  }
LABEL_56:
  result = sub_821C8(v13, 0);
  a2[1] = (int)v13;
  v26 = a2[2];
  if ( !a4 )
    goto LABEL_27;
LABEL_37:
  v28 = v26 & 0x60000;
  if ( (v26 & 0x60000) == 0x20000 )
  {
    v34 = v26 & 0x20;
    if ( a4 < 0 )
      goto LABEL_64;
    goto LABEL_67;
  }
  if ( (v26 & 0x60000u) > 0x20000 )
  {
    if ( v28 != 0x40000 )
    {
      if ( v28 != 393216 || a4 <= 0 )
        goto LABEL_27;
      return result;
    }
    v34 = v26 & 0x20;
    if ( a4 >= 0 )
    {
LABEL_64:
      if ( v34 )
        goto LABEL_27;
      return result;
    }
LABEL_67:
    if ( !v34 )
      goto LABEL_27;
    return result;
  }
  if ( v28 || a4 >= 0 )
  {
LABEL_27:
    v23 = *(_DWORD *)(*a2 + 16);
    if ( (v23 & 0xF000) == 0 )
    {
      if ( *v13 )
        return result;
      goto LABEL_29;
    }
    if ( (v23 & 0x10000) != 0 )
    {
      if ( !*v13 )
      {
LABEL_29:
        a2[1] = 0;
LABEL_30:
        v24 = (void ***)a2;
        v25 = dword_B8168[0];
        dword_B8168[0] = a5;
        result = (char *)sub_7DC70(a1, v24);
        dword_B8168[0] = v25;
        return result;
      }
    }
    else if ( !*v13 )
    {
      a2[1] = (int)&unk_9F3D8;
      goto LABEL_30;
    }
    v29 = _strdup((const char *)v13);
    if ( !v29 )
      sub_7E624((const char *)v13);
    v30 = a2[2];
    a2[1] = (int)v29;
    a2[2] = v30 | 0x40;
    goto LABEL_30;
  }
  return result;
}
