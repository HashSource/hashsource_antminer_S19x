int __fastcall sub_288584(char *s1)
{
  int v2; // r3
  _BYTE *v3; // r0
  int v4; // r2
  char v5; // r7
  int v6; // r3
  bool v7; // zf
  char *v8; // r2
  bool v9; // zf
  char *v10; // r1
  int v11; // r3
  int v12; // t1
  const char *v13; // r8
  const char *v14; // r6
  int v15; // r0
  int v17; // r0
  char v18; // r3
  const char *v19; // r6
  size_t v20; // r0
  char *v21; // r0
  char *v22; // r8
  char *v23; // r0
  int v24; // r0

  v2 = dword_48ADA0;
  v3 = (_BYTE *)dword_48ADA8;
  v4 = dword_48ADA0 + 1;
  if ( dword_48ADA0 + 1 >= dword_48ADA4 )
  {
    if ( dword_48ADA8 )
    {
      dword_48ADA4 += 20;
      v3 = sub_93050((void *)dword_48ADA8, dword_48ADA4);
    }
    else
    {
      dword_48ADA4 = 20;
      v3 = sub_93028(0x14u);
    }
    v2 = dword_48ADA0;
    dword_48ADA8 = (int)v3;
    v4 = dword_48ADA0 + 1;
  }
  dword_48ADA0 = v4;
  v3[v2] = byte_48AAFC;
  v5 = byte_48AAFC;
  if ( byte_48AAFC )
    return 0;
  v6 = (unsigned __int8)*s1;
  if ( *s1 )
  {
    v7 = v6 == 32;
    if ( v6 != 32 )
      v7 = v6 == 9;
    if ( v7 )
    {
      v10 = s1;
LABEL_24:
      *v10 = 0;
    }
    else
    {
      v8 = s1 + 1;
      while ( 1 )
      {
        v10 = v8;
        v12 = (unsigned __int8)*v8++;
        v11 = v12;
        if ( !v12 )
          break;
        v9 = v11 == 32;
        if ( v11 != 32 )
          v9 = v11 == 9;
        if ( v9 )
          goto LABEL_24;
      }
    }
  }
  v13 = (const char *)dword_48AAF4;
  if ( !dword_48AAF4 || strncasecmp(s1, "term=", 5u) )
  {
    if ( !strncasecmp(s1, "mode=", 5u) )
    {
      v14 = s1 + 5;
      if ( !strcasecmp(v14, "emacs") )
        v15 = 1;
      else
        v15 = -(strcasecmp(v14, "vi") != 0);
      byte_48AAFC = dword_46DED4 != v15;
    }
    else
    {
      v17 = strcasecmp(s1, off_470770);
      if ( v17 )
        v18 = 1;
      else
        byte_48AAFC = 0;
      if ( v17 )
        byte_48AAFC = v18;
    }
    return 0;
  }
  v19 = s1 + 5;
  v20 = strlen(v13);
  v21 = (char *)sub_93028(v20 + 1);
  v22 = strcpy(v21, (const char *)dword_48AAF4);
  v23 = strchr(v22, 45);
  if ( v23 )
    *v23 = 0;
  if ( strcasecmp(v19, v22) )
  {
    v24 = strcasecmp(v19, (const char *)dword_48AAF4);
    v5 = v24;
    if ( v24 )
      v5 = 1;
  }
  byte_48AAFC = v5;
  sub_297758(v22);
  return 0;
}
