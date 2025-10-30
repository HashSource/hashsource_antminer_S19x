_BYTE *__fastcall sub_9DBFC(const char *a1, int a2)
{
  const char *v2; // r5
  size_t v4; // r2
  _BYTE *v5; // r6
  int v6; // r0
  int v7; // r4
  int v8; // t1
  int v9; // t1
  int v11; // r3
  const char *v12; // r6
  const char *v13; // r10
  char **v14; // r7
  size_t i; // r2
  const char *v16; // t1

  v2 = a1;
  if ( !a1 )
    return 0;
  v4 = 2 * (strlen(a1) + 5);
  v5 = (_BYTE *)dword_477C80;
  if ( v4 > dword_477C7C )
  {
    v11 = 2 * dword_477C7C;
    if ( 2 * dword_477C7C < v4 )
      v11 = v4;
    dword_477C7C = v11;
    v5 = sub_9D470((void *)dword_477C80, &dword_477C7C, 1);
    dword_477C80 = (int)v5;
  }
  v6 = *(unsigned __int8 *)v2;
  if ( *v2 )
  {
    v7 = 0;
    while ( 1 )
    {
      while ( v6 == 46 )
      {
        v5[v7 + 1] = 95;
        v5[v7] = 95;
        v7 += 2;
        v9 = *(unsigned __int8 *)++v2;
        v6 = v9;
        if ( !v9 )
        {
LABEL_9:
          v5 = (_BYTE *)dword_477C80;
          goto LABEL_10;
        }
      }
      if ( v6 == 34 )
        break;
      v5[v7++] = v6;
      v8 = *(unsigned __int8 *)++v2;
      v6 = v8;
      if ( !v8 )
        goto LABEL_9;
    }
    v12 = "\"+\"";
    v13 = "Oadd";
    v14 = off_374070;
    for ( i = 3; ; i = strlen(v12) )
    {
      if ( !strncmp(v2, v12, i) )
      {
        v5 = (_BYTE *)dword_477C80;
        strcpy((char *)(dword_477C80 + v7), v13);
        v7 += strlen(*v14);
        goto LABEL_10;
      }
      v16 = v14[3];
      v14 += 3;
      v13 = v16;
      if ( !v16 )
        break;
      v12 = v14[1];
    }
    if ( a2 )
      sub_946E0("invalid Ada operator name: %s", v2);
    return 0;
  }
  v7 = *(unsigned __int8 *)v2;
LABEL_10:
  v5[v7] = 0;
  return v5;
}
