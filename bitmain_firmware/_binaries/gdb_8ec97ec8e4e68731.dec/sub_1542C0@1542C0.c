int __fastcall sub_1542C0(int *a1, const char *a2, int a3, int a4)
{
  unsigned __int64 v4; // r4
  size_t v8; // r0
  int v9; // r10
  int v10; // r11
  int v11; // r5
  int v12; // r0
  int v13; // r2
  bool v14; // zf
  int v15; // r1
  int v16; // t1
  bool v17; // zf
  int v19; // r0
  int v20; // r3
  int v21; // r5
  size_t v22; // r5
  void *v23; // r0
  void *ptr; // [sp+4h] [bp-8h] BYREF

  HIDWORD(v4) = a2;
  if ( !a2 )
  {
    LODWORD(v4) = -1;
    return v4;
  }
  v8 = strlen(a2);
  if ( v8 && *(_BYTE *)(HIDWORD(v4) + v8 - 1) == 92 )
  {
    sub_92044(a1, (const void *)HIDWORD(v4), v8 - 1);
    LODWORD(v4) = 0;
    free((void *)HIDWORD(v4));
    return v4;
  }
  v9 = *(_DWORD *)(dword_487668 + 48);
  v10 = *(_DWORD *)(dword_487668 + 44);
  sub_92044(a1, (const void *)HIDWORD(v4), v8 + 1);
  LODWORD(v4) = *a1;
  free((void *)HIDWORD(v4));
  if ( !(_DWORD)v4 )
    return v4;
  v11 = 0;
  a1[2] = 0;
  if ( v9 == v10 )
  {
    if ( dword_48968C > 1 )
    {
      sub_259858(asc_3A6DA4);
      sub_25A6E8(a4);
      sub_259858((const char *)&word_356638);
    }
    v19 = strncmp((const char *)v4, "server ", 7u);
    dword_48A510 = v19 == 0;
    if ( v19 )
    {
      if ( dword_48A55C )
      {
        if ( sub_244AAC(dword_487668) )
        {
          v21 = sub_298EB4(v4, &ptr);
          if ( v21 )
          {
            sub_259858("%s\n", (const char *)ptr);
            if ( v21 < 0 )
            {
              if ( ptr )
                free(ptr);
              return v4;
            }
            v22 = strlen((const char *)ptr);
            v23 = (void *)sub_92094(a1);
            if ( v23 )
              free(v23);
            v4 = __PAIR64__(v22, (unsigned int)ptr) + 0x100000000LL;
            *(_QWORD *)a1 = v4;
          }
        }
      }
      v11 = 1;
LABEL_8:
      v13 = *(unsigned __int8 *)v4;
      v14 = v13 == 32;
      if ( v13 != 32 )
        v14 = v13 == 9;
      if ( v14 )
      {
        v15 = v4;
        do
        {
          v16 = *(unsigned __int8 *)++v15;
          v20 = v16;
          v17 = v16 == 32;
          if ( v16 != 32 )
            v17 = v20 == 9;
        }
        while ( v17 );
      }
      else
      {
        v20 = *(unsigned __int8 *)v4;
      }
      if ( a3 )
      {
        if ( !v20 )
        {
          LODWORD(v4) = dword_48A4EC;
          return v4;
        }
        if ( !*(_BYTE *)v4 || !v11 || !sub_244AAC(dword_487668) )
        {
LABEL_19:
          if ( dword_48A4EC )
            free((void *)dword_48A4EC);
          LODWORD(v4) = sub_327254(v4);
          dword_48A4EC = v4;
          return v4;
        }
      }
      else if ( !*(_BYTE *)v4 || !v11 || !sub_244AAC(dword_487668) )
      {
        return v4;
      }
      sub_243E28(v4);
      if ( !a3 )
        return v4;
      goto LABEL_19;
    }
  }
  else
  {
    v12 = strncmp((const char *)v4, "server ", 7u);
    dword_48A510 = v12 == 0;
    if ( v12 )
      goto LABEL_8;
  }
  return v4 + 7;
}
