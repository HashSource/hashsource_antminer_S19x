char *__fastcall sub_1B4B20(int a1)
{
  int v1; // r3
  bool v3; // zf
  size_t v4; // r0
  char *v5; // r0
  char *v6; // r4
  _BYTE *v7; // r6
  char v8; // r3
  char *v9; // r3
  int v10; // t1
  char *v11; // r0
  char *v12; // r2
  char *v13; // r0
  char *v14; // r3
  int v15; // r2
  int v16; // t1
  int v17; // r2
  int v18; // t1
  char *v20; // r0

  if ( *(_BYTE *)a1 == 95 )
  {
    v1 = *(unsigned __int8 *)(a1 + 1);
    v3 = v1 == 99;
    if ( v1 != 99 )
      v3 = v1 == 105;
    if ( v3 && *(_BYTE *)(a1 + 2) == 95 )
    {
      v4 = strlen((const char *)a1);
      v5 = (char *)sub_93028(v4 + 2);
      v6 = v5;
      v7 = v5 + 1;
      if ( *(_BYTE *)(a1 + 1) == 105 )
        v8 = 45;
      else
        v8 = 43;
      *v5 = v8;
      *v7 = 91;
      v9 = strcpy(v5 + 2, (const char *)(a1 + 3));
      if ( v7[1] == 95 )
      {
        do
          v10 = (unsigned __int8)*++v9;
        while ( v10 == 95 );
      }
      v11 = strchr(v9, 95);
      v12 = v11;
      if ( v11 )
      {
        if ( v11[1] == 95 )
        {
          *v11 = 32;
          v14 = strcpy(v11 + 1, (const char *)(a1 + v11 + 1 - v6 + 2));
          goto LABEL_16;
        }
        *v11 = 40;
        v13 = strchr(v11 + 1, 95);
        v12 = v13;
        if ( v13 )
        {
          *v13 = 41;
          v13[1] = 32;
          v14 = strcpy(v13 + 2, (const char *)(a1 + v13 + 2 - v6));
LABEL_16:
          v15 = (unsigned __int8)*v14;
          if ( v15 == 95 )
          {
            do
            {
              v16 = (unsigned __int8)*++v14;
              v15 = v16;
            }
            while ( v16 == 95 );
          }
          if ( v15 )
          {
            while ( 1 )
            {
              v18 = (unsigned __int8)*++v14;
              v17 = v18;
              if ( !v18 )
                break;
              if ( v17 == 95 )
                *v14 = 58;
            }
          }
          *v14 = 93;
          v14[1] = 0;
          return v6;
        }
      }
      v20 = v6;
      v6 = v12;
      free(v20);
      return v6;
    }
  }
  return 0;
}
