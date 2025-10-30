int __fastcall sub_28B358(const char *a1, int a2)
{
  size_t v4; // r5
  _BYTE *v5; // r0
  const char *v6; // r4
  int v7; // r8
  int v8; // r12
  int v9; // r0
  size_t v11; // r8
  char *v12; // r0
  const char *v13; // r2
  int v14; // r1
  _BYTE *v15; // r0

  if ( a1 )
  {
    v4 = *(unsigned __int8 *)a1;
    if ( *a1 )
    {
      v11 = strlen(a1);
      v12 = (char *)sub_93028(v11 + 33);
      v4 = v11;
      v6 = v12;
      *v12 = 40;
      if ( !a2 )
      {
        v13 = v12 + 1;
        v7 = v11 + 11;
        v14 = *(_DWORD *)"arch)`";
        v8 = 11;
        *(_DWORD *)(v12 + 1) = *(_DWORD *)"i-search)`";
LABEL_9:
        *((_DWORD *)v13 + 1) = v14;
        strcpy((char *)v13 + 8, ")`");
        goto LABEL_5;
      }
    }
    else
    {
      v5 = sub_93028(0x21u);
      v6 = v5;
      *v5 = 40;
      if ( !a2 )
      {
        v7 = 11;
        strcpy(v5 + 1, "i-search)`");
        v8 = 11;
LABEL_5:
        strcpy((char *)&v6[v8], a1);
        goto LABEL_6;
      }
    }
    v7 = v4 + 19;
    v13 = v6 + 9;
    v8 = 19;
    qmemcpy((void *)(v6 + 1), "reverse-i-se", 12);
    v14 = *(_DWORD *)"arch)`";
    goto LABEL_9;
  }
  v15 = sub_93028(0x21u);
  v6 = v15;
  *v15 = 40;
  if ( a2 )
  {
    v7 = 19;
    strcpy(v15 + 1, "reverse-i-search)`");
  }
  else
  {
    v7 = 11;
    strcpy(v15 + 1, "i-search)`");
  }
LABEL_6:
  *(_DWORD *)&v6[v7] = 2112039;
  sub_28D3C4("%s", v6);
  v9 = sub_297758(v6);
  return off_470784(v9);
}
