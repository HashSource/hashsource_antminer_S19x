_BYTE *__fastcall sub_85CE4(_BYTE *a1, char *s)
{
  size_t v4; // r0
  _BYTE *v5; // r2
  size_t v6; // r7
  size_t i; // r0
  unsigned int v8; // r3
  unsigned int v9; // t1
  bool v10; // zf
  int v11; // r3
  unsigned int v12; // t1
  int v13; // r3
  _BYTE *v14; // r8
  char *v15; // r4
  bool v16; // zf
  int v17; // r2
  int v18; // r2
  char *v19; // r3
  char *v20; // r4
  int v21; // t1
  char *v23; // r0

  v4 = strlen(s);
  v5 = a1;
  v6 = v4;
  for ( i = 3; ; i += v6 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = (unsigned __int8)*v5++;
        v8 = v9;
        if ( v9 - 32 <= 0x5E )
        {
          do
          {
            v10 = v8 == 34;
            if ( v8 != 34 )
              v10 = v8 == 92;
            if ( v10 )
              v11 = 2;
            else
              v11 = 1;
            i += v11;
            v12 = (unsigned __int8)*v5++;
            v8 = v12;
          }
          while ( v12 - 32 <= 0x5E );
        }
        if ( v8 <= 0xD )
          break;
LABEL_13:
        i += 4;
      }
      v13 = 1 << v8;
      if ( (v13 & 0x3B80) == 0 )
        break;
      i += 2;
    }
    if ( (v13 & 0x400) == 0 )
      break;
  }
  if ( (v13 & 1) == 0 )
    goto LABEL_13;
  v14 = sub_7FBE0(i);
  v15 = v14 + 1;
  *v14 = 34;
  while ( 2 )
  {
    while ( 1 )
    {
      v17 = (unsigned __int8)*a1;
      if ( (unsigned int)(v17 - 32) > 0x5E )
        break;
      v16 = v17 == 34;
      if ( v17 != 34 )
        v16 = v17 == 92;
      if ( v16 )
        *v15++ = 92;
      *v15++ = v17;
LABEL_22:
      ++a1;
    }
    switch ( *a1 )
    {
      case 0:
        goto LABEL_31;
      case 7:
        *v15 = 92;
        v15[1] = 97;
        v15 += 2;
        goto LABEL_22;
      case 8:
        *v15 = 92;
        v15[1] = 98;
        v15 += 2;
        goto LABEL_22;
      case 9:
        *v15 = 92;
        v15[1] = 116;
        v15 += 2;
        goto LABEL_22;
      case 0xA:
        v18 = (unsigned __int8)*++a1;
        if ( v18 == 10 )
        {
          v20 = v15 + 2;
          do
          {
            *(v20 - 2) = 92;
            v19 = v20;
            *(v20 - 1) = 110;
            v20 += 2;
            v21 = (unsigned __int8)*++a1;
            v18 = v21;
          }
          while ( v21 == 10 );
        }
        else
        {
          v19 = v15;
        }
        if ( v18 )
        {
          v15 = (char *)memcpy(v19, s, v6) + v6;
          continue;
        }
        *v19 = 92;
        v15 = v19 + 2;
        v19[1] = 110;
LABEL_31:
        v15[1] = 0;
        *v15 = 34;
        return v14;
      case 0xB:
        *v15 = 92;
        v15[1] = 118;
        v15 += 2;
        goto LABEL_22;
      case 0xC:
        *v15 = 92;
        v15[1] = 102;
        v15 += 2;
        goto LABEL_22;
      case 0xD:
        *v15 = 92;
        v15[1] = 114;
        v15 += 2;
        goto LABEL_22;
      default:
        v23 = v15;
        v15 += 4;
        sprintf(v23, "\\%03o", v17);
        goto LABEL_22;
    }
  }
}
