size_t *__fastcall sub_12581C(size_t *result, _BYTE **a2)
{
  size_t v2; // r2
  size_t v4; // r3
  char v5; // r3
  int v6; // r4
  _BYTE *v7; // r5
  char v8; // r7
  const void *v9; // r1
  _BYTE *v10; // r5
  void *v11; // r0
  size_t v12; // r1
  size_t v13; // r4
  char v14; // r3
  int v15; // t1
  int v16; // r3
  _BYTE *v17; // r5
  _BYTE *v18; // r5

  if ( result )
  {
    v2 = *result;
    if ( (int)*result <= 0 )
    {
      v6 = v2 + 1;
      if ( a2 )
      {
        v18 = *a2;
        *v18 = 0;
        *a2 = v18 + 1;
        return (size_t *)(v2 + 1);
      }
    }
    else
    {
      v4 = result[3];
      if ( (v4 & 8) != 0 )
      {
        v5 = v4 & 7;
        v6 = v2 + 1;
        if ( a2 )
        {
          v7 = *a2;
          *v7 = v5;
          v8 = 255 << v5;
          v9 = (const void *)result[2];
          v10 = v7 + 1;
          goto LABEL_6;
        }
      }
      else
      {
        v12 = result[2];
        v13 = v12 + v2;
        while ( 1 )
        {
          v15 = *(unsigned __int8 *)--v13;
          v14 = v15;
          if ( v15 )
            break;
          if ( !--v2 )
          {
            v14 = *(_BYTE *)(v12 - 1);
            v6 = 1;
            goto LABEL_12;
          }
        }
        v6 = v2 + 1;
LABEL_12:
        if ( (v14 & 1) != 0 )
        {
          v8 = -1;
          LOBYTE(v16) = 0;
        }
        else if ( (v14 & 2) != 0 )
        {
          v8 = -2;
          LOBYTE(v16) = 1;
        }
        else if ( (v14 & 4) != 0 )
        {
          v8 = -4;
          LOBYTE(v16) = 2;
        }
        else if ( (v14 & 8) != 0 )
        {
          v8 = -8;
          LOBYTE(v16) = 3;
        }
        else if ( (v14 & 0x10) != 0 )
        {
          v8 = -16;
          LOBYTE(v16) = 4;
        }
        else if ( (v14 & 0x20) != 0 )
        {
          v8 = -32;
          LOBYTE(v16) = 5;
        }
        else if ( (v14 & 0x40) != 0 )
        {
          v8 = -64;
          LOBYTE(v16) = 6;
        }
        else
        {
          v16 = v14 & 0x80;
          if ( v16 )
          {
            v8 = 0x80;
            LOBYTE(v16) = 7;
          }
          else
          {
            v8 = -1;
          }
        }
        if ( a2 )
        {
          v17 = *a2;
          *v17 = v16;
          v10 = v17 + 1;
          if ( !v2 )
            goto LABEL_7;
          v9 = (const void *)result[2];
LABEL_6:
          v11 = v10;
          v10 += v2;
          memcpy(v11, v9, v2);
          *(v10 - 1) &= v8;
LABEL_7:
          *a2 = v10;
          return (size_t *)v6;
        }
      }
    }
    return (size_t *)v6;
  }
  return result;
}
