_BYTE *__fastcall sub_84784(_BYTE *a1, char *s)
{
  size_t v4; // r4
  size_t v5; // r0
  _BYTE *v6; // r2
  size_t v7; // r9
  int v8; // r3
  int v9; // t1
  bool v10; // zf
  int v11; // r3
  int v12; // t1
  _BYTE *v13; // r0
  _BYTE *v14; // r7
  _BYTE *v15; // r4
  _BYTE *v16; // r3
  bool v17; // zf
  int v18; // r2
  int v19; // r1
  _BYTE *v20; // r2
  int v21; // t1
  _BYTE *v22; // r3
  char *v24; // r0
  void *v25; // r0

  v4 = 3;
  v5 = strlen(s);
  v6 = a1;
  v7 = v5;
  while ( 2 )
  {
    v9 = (unsigned __int8)*v6++;
    v8 = v9;
    if ( (unsigned int)(v9 - 32) <= 0x5E )
    {
      do
      {
        v10 = v8 == 92;
        if ( v8 != 92 )
          v10 = v8 == 34;
        if ( v10 )
          v11 = 2;
        else
          v11 = 1;
        v4 += v11;
        v12 = (unsigned __int8)*v6++;
        v8 = v12;
      }
      while ( (unsigned int)(v12 - 32) <= 0x5E );
    }
    switch ( v8 )
    {
      case 0:
        v13 = malloc(v4);
        v14 = v13;
        if ( !v13 )
          sub_C610(v4);
        v15 = v13 + 1;
        *v13 = 34;
        break;
      case 7:
      case 8:
      case 9:
      case 11:
      case 12:
      case 13:
        v4 += 2;
        continue;
      case 10:
        v4 += v5;
        continue;
      default:
        v4 += 4;
        continue;
    }
    break;
  }
  while ( 2 )
  {
    while ( 1 )
    {
      v18 = (unsigned __int8)*a1;
      if ( (unsigned int)(v18 - 32) > 0x5E )
        break;
      v16 = v15 + 1;
      v17 = v18 == 92;
      if ( v18 != 92 )
        v17 = v18 == 34;
      if ( v17 )
      {
        *v15 = 92;
        v15 += 2;
      }
      else
      {
        v16 = v15++;
      }
      *v16 = v18;
LABEL_20:
      ++a1;
    }
    switch ( *a1 )
    {
      case 0:
        goto LABEL_29;
      case 7:
        *v15 = 92;
        v15[1] = 97;
        v15 += 2;
        goto LABEL_20;
      case 8:
        *v15 = 92;
        v15[1] = 98;
        v15 += 2;
        goto LABEL_20;
      case 9:
        *v15 = 92;
        v15[1] = 116;
        v15 += 2;
        goto LABEL_20;
      case 0xA:
        v19 = (unsigned __int8)*++a1;
        if ( v19 == 10 )
        {
          v20 = v15 + 2;
          do
          {
            v21 = (unsigned __int8)*++a1;
            v19 = v21;
            v15 = v20;
            *(v20 - 2) = 92;
            v20 += 2;
            *(v20 - 3) = 110;
          }
          while ( v21 == 10 );
        }
        if ( v19 )
        {
          v25 = v15;
          v15 += v7;
          memcpy(v25, s, v7);
          continue;
        }
        v22 = v15;
        *v15 = 92;
        v15 += 2;
        v22[1] = 110;
LABEL_29:
        *v15 = 34;
        v15[1] = 0;
        return v14;
      case 0xB:
        *v15 = 92;
        v15[1] = 118;
        v15 += 2;
        goto LABEL_20;
      case 0xC:
        *v15 = 92;
        v15[1] = 102;
        v15 += 2;
        goto LABEL_20;
      case 0xD:
        *v15 = 92;
        v15[1] = 114;
        v15 += 2;
        goto LABEL_20;
      default:
        v24 = v15;
        v15 += 4;
        sprintf(v24, "\\%03o", v18);
        goto LABEL_20;
    }
  }
}
