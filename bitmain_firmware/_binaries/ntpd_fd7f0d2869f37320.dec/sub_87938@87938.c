int __fastcall sub_87938(int a1, int *a2, char *s, int a4, int a5)
{
  int v9; // r0
  int v10; // t1
  char *v11; // r0
  char *v12; // r3
  unsigned __int8 *v13; // r6
  unsigned int v14; // r2
  _BOOL4 v15; // r11
  int v16; // r0
  int v17; // r3
  int v18; // t1
  unsigned int v19; // r2
  int result; // r0
  int v21; // r3
  int v22; // r2
  int v23; // r2
  bool v24; // zf
  unsigned __int8 *v25; // r11
  int v26; // r0
  int v27; // t1
  int v28; // r3
  int v29; // r3
  void ***v30; // r1
  int v31; // r5
  char *v32; // r0
  int v33; // r3
  char *v34; // [sp+4h] [bp-10h]

  v9 = dword_1083DC;
  if ( !dword_1083DC )
    v9 = sub_7F738(45);
  if ( *(_BYTE *)(v9 + (unsigned __int8)*s) )
  {
    do
      v10 = (unsigned __int8)*++s;
    while ( *(_BYTE *)(v9 + v10) );
  }
  v11 = strpbrk(s, " \t\n:=");
  v12 = v11;
  if ( v11 )
  {
    if ( a5 == 2 )
    {
      v13 = (unsigned __int8 *)(v11 + 1);
      *v11 = 0;
    }
    else
    {
      v14 = (unsigned __int8)*v11;
      v15 = v14 <= 0x7F && (dword_A0784[v14] & 0xC01) != 0;
      v13 = (unsigned __int8 *)(v11 + 1);
      *v11 = 0;
      v16 = dword_108358;
      if ( !dword_108358 )
      {
        v34 = v12;
        v16 = sub_7F738(12);
        v12 = v34;
      }
      v17 = (unsigned __int8)v12[1];
      if ( *(_BYTE *)(v16 + v17) )
      {
        do
        {
          v18 = *++v13;
          v17 = v18;
        }
        while ( *(_BYTE *)(v16 + v18) );
      }
      if ( v15 )
      {
        v24 = v17 == 58;
        if ( v17 != 58 )
          v24 = v17 == 61;
        if ( v24 )
        {
          v25 = v13 + 1;
          v26 = dword_108358;
          if ( !dword_108358 )
            v26 = sub_7F738(12);
          if ( *(_BYTE *)(v26 + v13[1]) )
          {
            do
              v27 = *++v25;
            while ( *(_BYTE *)(v26 + v27) );
          }
          v13 = v25;
        }
      }
    }
  }
  else
  {
    v13 = (unsigned __int8 *)&s[strlen(s)];
  }
  v19 = (unsigned __int8)s[1];
  if ( v19 <= 0x7F && (dword_A0784[v19] & 0x3B0040) != 0 )
  {
    result = sub_87008(a1, s, a2);
    if ( result )
      return result;
    if ( a4 )
      goto LABEL_20;
LABEL_43:
    v28 = *v13;
    if ( v28 == 34 || v28 == 39 )
      result = sub_83700(v13, 0);
    a2[1] = (int)v13;
    goto LABEL_46;
  }
  result = sub_7F2C8(a1, (unsigned __int8)*s, a2, a2 + 3);
  if ( result )
    return result;
  if ( !a4 )
    goto LABEL_43;
LABEL_20:
  v21 = a2[2];
  if ( (v21 & 0x100) != 0 )
    return result;
  v22 = *v13;
  if ( v22 == 34 || v22 == 39 )
  {
    result = sub_83700(v13, 0);
    a2[1] = (int)v13;
    v21 = a2[2];
  }
  else
  {
    a2[1] = (int)v13;
  }
  v23 = v21 & 0x60000;
  if ( (v21 & 0x60000) == 0x20000 )
  {
    if ( a4 < 0 )
      goto LABEL_65;
    goto LABEL_62;
  }
  if ( (v21 & 0x60000u) > 0x20000 )
  {
    if ( v23 != 0x40000 )
    {
      if ( v23 == 393216 && a4 > 0 )
        return result;
LABEL_46:
      v29 = *(_DWORD *)(*a2 + 16);
      if ( (v29 & 0xF000) == 0 )
      {
        if ( *v13 )
          return result;
        goto LABEL_48;
      }
      if ( (v29 & 0x10000) != 0 )
      {
        if ( !*v13 )
        {
LABEL_48:
          a2[1] = 0;
LABEL_49:
          v30 = (void ***)a2;
          v31 = dword_B9168[0];
          dword_B9168[0] = a5;
          result = sub_7F0F4(a1, v30);
          dword_B9168[0] = v31;
          return result;
        }
      }
      else if ( !*v13 )
      {
        a2[1] = (int)&unk_A09D8;
        goto LABEL_49;
      }
      v32 = sub_7FA64((const char *)v13);
      v33 = a2[2] | 0x40;
      a2[1] = (int)v32;
      a2[2] = v33;
      goto LABEL_49;
    }
    if ( a4 >= 0 )
    {
LABEL_65:
      if ( (v21 & 0x20) == 0 )
        return result;
      goto LABEL_46;
    }
LABEL_62:
    if ( (v21 & 0x20) != 0 )
      return result;
    goto LABEL_46;
  }
  if ( v23 || a4 >= 0 )
    goto LABEL_46;
  return result;
}
