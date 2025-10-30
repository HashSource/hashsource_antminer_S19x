void __fastcall sub_89A3C(char *a1, int a2, FILE *a3)
{
  size_t v6; // r0
  int v7; // r8
  unsigned int v8; // r6
  char *v9; // r0
  char *v10; // r10
  char *v11; // r5
  char *v12; // r11
  char *v13; // r0
  char *v14; // r4
  const unsigned __int16 **v15; // r0
  int v16; // r3
  unsigned int v17; // r2
  char *v18; // r4
  char *v19; // r2
  int v20; // t1
  int v21; // t1
  char v22; // [sp+4h] [bp-10h]

  v6 = strlen(a1);
  if ( v6 <= 0xFF )
    v7 = a2 | 1;
  else
    v7 = a2;
  if ( v7 )
  {
    if ( a2 )
      fputs(a1, a3);
    else
      sub_84A50(a1, a3);
  }
  else
  {
    v8 = v6;
    v9 = _strdup(a1);
    v10 = v9;
    if ( !v9 )
      sub_7E624(a1);
    v11 = v9;
    while ( 2 )
    {
      v12 = v11;
      while ( 1 )
      {
LABEL_12:
        v13 = strchr(v12, 10);
        v14 = v13;
        if ( !v13 )
          goto LABEL_26;
        v12 = v13 + 1;
        if ( v13 - v11 > 39 )
        {
          v15 = _ctype_b_loc();
          v16 = (unsigned __int8)v14[1];
          v17 = (((*v15)[v16] ^ 0x2000u) >> 13) & 1;
          if ( v16 == 9 )
            v17 = 1;
          if ( !v17 )
            break;
        }
      }
      if ( v16 == 10 )
      {
        do
        {
          v21 = (unsigned __int8)*++v12;
          LOBYTE(v16) = v21;
        }
        while ( v21 == 10 );
      }
      else if ( v16 == 32 )
      {
        v18 = v14 + 8;
        v19 = v12;
        while ( 1 )
        {
          v20 = (unsigned __int8)*++v19;
          if ( v20 != 32 )
            break;
          if ( v19 == v18 )
          {
            v12 = v19;
            goto LABEL_12;
          }
        }
      }
      *v12 = 0;
      v22 = v16;
      sub_84A50(v11, a3);
      v8 -= v12 - v11;
      if ( v8 )
      {
        *v12 = v22;
        v11 = v12;
        if ( v8 > 0xFF )
          continue;
LABEL_26:
        sub_84A50(v11, a3);
      }
      break;
    }
    free(v10);
  }
}
