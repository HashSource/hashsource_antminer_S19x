_BYTE *__fastcall sub_28D558(char a1)
{
  const char *v2; // r5
  char *v3; // r0
  const char *v4; // r4
  size_t v5; // r7
  char *v6; // r0
  _BYTE *v7; // r5
  size_t v9; // r7
  char *v10; // r0
  int v11; // r8

  sub_28D354();
  v2 = (const char *)dword_48AAA4;
  if ( !dword_48AAA4 )
    goto LABEL_11;
  v3 = strrchr((const char *)dword_48AAA4, 10);
  if ( !v3 )
  {
    if ( *v2 )
    {
      v9 = strlen(v2);
      v10 = (char *)sub_93028(v9 + 2);
      v11 = v9 + 1;
      v7 = v10;
      if ( v9 )
        strcpy(v10, (const char *)dword_48AAA4);
      goto LABEL_10;
    }
LABEL_11:
    v11 = 1;
    v9 = 0;
    v7 = sub_93028(2u);
LABEL_10:
    v7[v9] = a1;
    v7[v11] = 0;
    goto LABEL_6;
  }
  v4 = v3 + 1;
  v5 = strlen(v3 + 1);
  v6 = (char *)sub_93028(v5 + 2);
  v7 = v6;
  if ( v5 )
    strcpy(v6, v4);
  v7[v5] = a1;
  v7[v5 + 1] = 0;
LABEL_6:
  dword_48AE10 = dword_48AE68 + 1;
  return v7;
}
