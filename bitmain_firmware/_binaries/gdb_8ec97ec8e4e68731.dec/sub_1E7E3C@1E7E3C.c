int __fastcall sub_1E7E3C(int a1)
{
  size_t *v2; // r5
  char *v3; // r6
  int v4; // r5
  char *v5; // r3
  int v6; // r7
  int v7; // r3
  bool v8; // zf
  int v9; // r2
  const char *v10; // r0
  int v11; // r3
  bool v12; // zf
  int v14; // r3
  bool v15; // zf
  int v16; // r3
  bool v17; // zf
  int v18; // r3
  bool v19; // zf
  int v20; // r3
  bool v21; // zf

  strcpy(*(char **)a1, "vCont?");
  v2 = (size_t *)(a1 + 4);
  sub_1E7DEC(*(const char **)a1);
  sub_1E4EB8((char **)a1, v2, 0, 0, 0);
  v3 = *(char **)a1;
  v4 = strncmp(*(const char **)a1, "vCont", 5u);
  if ( !v4 )
  {
    v5 = v3 + 5;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    if ( v3 == (char *)-5 || v3[5] != 59 )
      goto LABEL_21;
    v6 = 0;
    while ( 1 )
    {
      v9 = (unsigned __int8)v5[1];
      v10 = v5 + 1;
      if ( v9 == 115 )
      {
        v11 = (unsigned __int8)v5[2];
        v12 = v11 == 0;
        if ( v11 )
          v12 = v11 == 59;
        if ( v12 )
          *(_DWORD *)(a1 + 40) = 1;
        v5 = strchr(v10, 59);
        if ( !v5 )
          goto LABEL_19;
      }
      else
      {
        switch ( v9 )
        {
          case 'S':
            v14 = (unsigned __int8)v5[2];
            v15 = v14 == 0;
            if ( v14 )
              v15 = v14 == 59;
            if ( v15 )
              *(_DWORD *)(a1 + 44) = 1;
            break;
          case 'c':
            v7 = (unsigned __int8)v5[2];
            v8 = v7 == 0;
            if ( v7 )
              v8 = v7 == 59;
            if ( v8 )
              v4 = 1;
            break;
          case 'C':
            v16 = (unsigned __int8)v5[2];
            v17 = v16 == 0;
            if ( v16 )
              v17 = v16 == 59;
            if ( v17 )
              v6 = 1;
            break;
          case 't':
            v18 = (unsigned __int8)v5[2];
            v19 = v18 == 0;
            if ( v18 )
              v19 = v18 == 59;
            if ( v19 )
              *(_DWORD *)(a1 + 32) = 1;
            break;
          case 'r':
            v20 = (unsigned __int8)v5[2];
            v21 = v20 == 0;
            if ( v20 )
              v21 = v20 == 59;
            if ( v21 )
              *(_DWORD *)(a1 + 36) = 1;
            break;
        }
        v5 = strchr(v10, 59);
        if ( !v5 )
        {
LABEL_19:
          if ( !(v4 ^ 1 | v6 ^ 1) )
            return sub_1E1768(v3, dword_4886EC);
LABEL_21:
          *v3 = 0;
          return sub_1E1768(v3, dword_4886EC);
        }
      }
      if ( *v5 != 59 )
        goto LABEL_19;
    }
  }
  return sub_1E1768(v3, dword_4886EC);
}
