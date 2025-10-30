int __fastcall sub_F4D38(const char *a1, __int16 *a2, int a3, int a4)
{
  int v5; // r0
  const char *v6; // r6
  int v9; // r7
  const char *v10; // r6
  unsigned int v11; // r3
  unsigned int v12; // t1
  void (__fastcall *v13)(int, int); // r2
  void (__fastcall *v14)(int, int); // r10
  int v15; // r4
  char v16; // r10
  char *v17; // r0
  size_t v18; // r4
  size_t v19; // r0
  char *v20; // r6
  char *v21; // r9
  char *v22; // r0
  int v24; // r4
  int v25; // r7
  char *v26; // r0
  char *s; // [sp+4h] [bp-4h] BYREF

  v5 = (unsigned __int8)a1[a3];
  v6 = &a1[a3];
  v9 = v5;
  if ( v5 )
    v9 = 1;
  if ( !a3 )
    v9 = 0;
  if ( v9 )
  {
    v24 = 3;
    if ( v5 == 46 )
      v25 = 95;
    else
      v25 = 46;
    do
    {
      (*(void (__fastcall **)(int, int))(a4 + 12))(a4, v25);
      --v24;
    }
    while ( v24 );
    v9 = 3;
  }
  else
  {
    v6 = a1;
  }
  v10 = v6 - 1;
  while ( 1 )
  {
    v12 = *(unsigned __int8 *)++v10;
    v11 = v12;
    if ( !v12 )
      break;
    v13 = *(void (__fastcall **)(int, int))(a4 + 12);
    if ( v11 > 0x1F )
    {
      if ( v11 == 127 )
      {
        v9 += 2;
        v13(a4, 94);
        (*(void (__fastcall **)(int, int))(a4 + 12))(a4, 63);
      }
      else
      {
        v13(a4, v11);
        ++v9;
      }
    }
    else
    {
      v13(a4, 94);
      v9 += 2;
      v14 = *(void (__fastcall **)(int, int))(a4 + 12);
      v15 = *(unsigned __int8 *)v10 | 0x40;
      if ( islower(v15) )
        v15 = toupper(v15);
      v14(a4, v15);
    }
  }
  if ( !dword_48ACC0 || !dword_470744 )
    return v9;
  if ( a1 == (const char *)a2 )
  {
    s = (char *)sub_29B910(a1);
    if ( sub_F4CFC((int)s) )
    {
      v22 = s;
      if ( !s )
        goto LABEL_27;
      goto LABEL_42;
    }
    v26 = s;
    if ( !s )
      return v9;
  }
  else
  {
    v16 = *(a1 - 1);
    *((_BYTE *)a1 - 1) = 0;
    if ( a2 && *(_BYTE *)a2 )
    {
      if ( *(_BYTE *)a2 == 47 )
      {
        if ( *((_BYTE *)a2 + 1) )
        {
          if ( *((_BYTE *)a2 + 1) == 47 && !*((_BYTE *)a2 + 2) )
            a2 = &word_398974;
        }
        else
        {
          a2 = (__int16 *)"//";
        }
      }
    }
    else
    {
      a2 = &word_398974;
    }
    v17 = (char *)sub_29B910(a2);
    s = v17;
    if ( off_48ACDC )
    {
      off_48ACDC(&s);
      v17 = s;
    }
    v18 = strlen(v17);
    v19 = strlen(a1);
    v20 = (char *)sub_93028(v19 + v18 + 2);
    v21 = &s[v18];
    strcpy(v20, s);
    if ( *(v21 - 1) == 47 )
      --v18;
    else
      v20[v18] = 47;
    v20[v18] = 47;
    strcpy(&v20[v18 + 1], a1);
    if ( sub_F4CFC((int)v20) )
    {
      free(v20);
      v22 = s;
      *((_BYTE *)a1 - 1) = v16;
      if ( !v22 )
      {
LABEL_27:
        ++v9;
        (*(void (__fastcall **)(int, int))(a4 + 12))(a4, 47);
        return v9;
      }
LABEL_42:
      free(v22);
      goto LABEL_27;
    }
    free(v20);
    v26 = s;
    *((_BYTE *)a1 - 1) = v16;
    if ( !v26 )
      return v9;
  }
  free(v26);
  return v9;
}
