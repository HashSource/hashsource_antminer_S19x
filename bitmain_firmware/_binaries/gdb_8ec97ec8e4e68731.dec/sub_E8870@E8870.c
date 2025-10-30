const char *__fastcall sub_E8870(const char *a1)
{
  int v2; // r3
  const char *result; // r0
  const char *v4; // r7
  int v5; // lr
  int v6; // r12
  int v7; // r1
  const char *v8; // r2
  int v9; // t1
  bool v10; // zf
  int v11; // r5
  int v12; // r7
  int v13; // r5
  _BYTE *v14; // r7
  int v16; // t1
  _BYTE v17[4]; // [sp+0h] [bp-2Ch] BYREF
  _BYTE *v18; // [sp+4h] [bp-28h]

  strlen(a1);
  v2 = *(unsigned __int8 *)a1;
  if ( !*a1 )
    return a1;
  result = 0;
  v4 = a1;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v8 = v4 + 1;
    v7 = *((unsigned __int8 *)v4 + 1);
    if ( v6 )
      break;
    switch ( v2 )
    {
      case ':':
        while ( v7 == 58 )
        {
          if ( !v5 )
          {
            result = v4 + 2;
            v2 = *((unsigned __int8 *)v4 + 2);
            v6 = 0;
            v4 = v8 + 1;
            goto LABEL_6;
          }
          v7 = *((unsigned __int8 *)v8 + 1);
          v4 = v8++;
        }
LABEL_5:
        v4 = v8;
        v2 = v7;
LABEL_6:
        if ( !v2 )
          goto LABEL_14;
        break;
      case '"':
      case '\'':
        v6 = v2;
        ++v4;
        v2 = v7;
        goto LABEL_6;
      case '(':
        v17[v5] = 41;
        ++v4;
        v2 = v7;
        ++v5;
        goto LABEL_6;
      case '[':
        v2 = *((unsigned __int8 *)v4 + 1);
        v17[v5] = 93;
        ++v4;
        ++v5;
        if ( !v7 )
          goto LABEL_14;
        break;
      case '<':
        ++v4;
        v17[v5] = 62;
        v2 = v7;
        ++v5;
        goto LABEL_6;
      default:
        v10 = v2 == 93;
        if ( v2 != 93 )
          v10 = v2 == 41;
        v11 = v10;
        if ( v2 == 62 )
          v11 |= 1u;
        if ( v11 )
        {
          if ( !v5 )
          {
LABEL_21:
            ++v4;
            v2 = v7;
            v6 = 0;
            goto LABEL_6;
          }
          v12 = (unsigned __int8)v17[v5 - 1];
          v18 = &v17[v5 - 1];
          v13 = v5 - 1;
          if ( v12 == v2 )
          {
            v4 = v8;
            v2 = v7;
            --v5;
            goto LABEL_6;
          }
          v14 = v18;
          while ( v13-- != 0 )
          {
            v16 = (unsigned __int8)*--v14;
            if ( v16 == v2 )
            {
              v4 = v8;
              v2 = v7;
              v5 = v13;
              goto LABEL_6;
            }
          }
        }
        goto LABEL_5;
    }
  }
  if ( v2 == v6 )
    goto LABEL_21;
  if ( v2 != 92 )
    goto LABEL_5;
  if ( v4[1] )
  {
    v9 = *((unsigned __int8 *)v4 + 2);
    v4 += 2;
    v2 = v9;
    goto LABEL_6;
  }
LABEL_14:
  if ( !result )
    return a1;
  return result;
}
