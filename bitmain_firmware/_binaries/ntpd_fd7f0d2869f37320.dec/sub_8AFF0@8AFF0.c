void __fastcall sub_8AFF0(char *a1, int a2, FILE *a3)
{
  size_t v6; // r0
  int v7; // r8
  unsigned int v8; // r7
  char *v9; // r11
  char *v10; // r6
  char *v11; // r5
  char *v12; // r0
  char *v13; // r4
  const unsigned __int16 **v14; // r0
  int v15; // r9
  unsigned int v16; // r2
  char *v17; // r4
  char *v18; // r2
  int v19; // t1
  int v20; // t1

  v6 = strlen(a1);
  if ( v6 <= 0xFF )
    v7 = a2 | 1;
  else
    v7 = a2;
  v8 = v6;
  if ( v7 )
  {
    sub_85F80(a1, a2, a3);
  }
  else
  {
    v9 = sub_7FA64(a1);
    v10 = v9;
    while ( 2 )
    {
      v11 = v10;
      do
      {
        while ( 1 )
        {
LABEL_7:
          v12 = strchr(v11, 10);
          v13 = v12;
          if ( !v12 )
            goto LABEL_22;
          if ( v12 - v10 > 39 )
            break;
          v11 = v12 + 1;
        }
        v14 = _ctype_b_loc();
        v15 = (unsigned __int8)v13[1];
        v11 = v13 + 1;
        v16 = (((*v14)[v15] ^ 0x2000u) >> 13) & 1;
        if ( v15 == 9 )
          v16 = 1;
      }
      while ( v16 );
      if ( v15 == 10 )
      {
        do
        {
          v20 = (unsigned __int8)*++v11;
          LOBYTE(v15) = v20;
        }
        while ( v20 == 10 );
      }
      else if ( v15 == 32 )
      {
        v17 = v13 + 8;
        v18 = v11;
        while ( 1 )
        {
          v19 = (unsigned __int8)*++v18;
          if ( v19 != 32 )
            break;
          if ( v18 == v17 )
          {
            v11 = v18;
            goto LABEL_7;
          }
        }
      }
      *v11 = 0;
      sub_85F80(v10, 0, a3);
      v8 += v10 - v11;
      if ( v8 )
      {
        v10 = v11;
        *v11 = v15;
        if ( v8 > 0xFF )
          continue;
LABEL_22:
        sub_85F80(v10, 0, a3);
      }
      break;
    }
    free(v9);
  }
}
