int __fastcall sub_131F0(int a1, int a2, int a3)
{
  unsigned int v6; // r3
  int v7; // r3
  int v8; // r6
  int v10; // r8
  size_t v11; // r6
  int v12; // r3
  const void *v13; // r8
  size_t v14; // r2
  int v15; // r3
  int v16; // r3
  int v17; // r3
  int v18; // r3
  int v19; // r3
  unsigned int *v20; // r3
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r0
  unsigned int *v24; // r3
  unsigned int v25; // r2

  v6 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v6;
  if ( v6 > 0x800 )
  {
    sub_128D8(a3, (_DWORD *)a1, 2, "maximum parsing depth reached");
    return 0;
  }
  v7 = *(_DWORD *)(a1 + 60);
  if ( v7 == 257 )
  {
    v8 = sub_14150(*(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68));
    goto LABEL_18;
  }
  if ( v7 <= 257 )
  {
    if ( v7 == 91 )
    {
      v8 = sub_13ED4();
      if ( !v8 )
        return 0;
      sub_12BFC((_DWORD *)a1, a3);
      v17 = *(_DWORD *)(a1 + 60);
      if ( v17 == 93 )
        goto LABEL_18;
      if ( v17 )
      {
        while ( 1 )
        {
          v19 = sub_131F0(a1, a2, a3);
          if ( !v19 || sub_1483C(v8, v19) )
            break;
          sub_12BFC((_DWORD *)a1, a3);
          v18 = *(_DWORD *)(a1 + 60);
          if ( v18 != 44 )
          {
            if ( v18 == 93 )
              goto LABEL_18;
            goto LABEL_56;
          }
          sub_12BFC((_DWORD *)a1, a3);
          if ( !*(_DWORD *)(a1 + 60) )
            goto LABEL_56;
        }
      }
      else
      {
LABEL_56:
        sub_128D8(a3, (_DWORD *)a1, 8, "']' expected");
      }
      if ( *(_DWORD *)(v8 + 4) == -1 )
        return 0;
      v20 = (unsigned int *)(v8 + 4);
      __dmb(0xFu);
      do
      {
        v21 = __ldrex(v20);
        v22 = v21 - 1;
      }
      while ( __strex(v22, v20) );
    }
    else
    {
      if ( v7 <= 91 )
      {
        if ( v7 == -1 )
        {
          sub_128D8(a3, (_DWORD *)a1, 8, "invalid token");
          return 0;
        }
LABEL_8:
        sub_128D8(a3, (_DWORD *)a1, 8, "unexpected token");
        return 0;
      }
      if ( v7 != 123 )
      {
        if ( v7 != 256 )
          goto LABEL_8;
        v10 = *(_DWORD *)(a1 + 64);
        v11 = *(_DWORD *)(a1 + 68);
        if ( (a2 & 0x10) == 0 && memchr(*(const void **)(a1 + 64), 0, v11) )
        {
          v8 = 0;
          sub_128D8(a3, (_DWORD *)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
          return v8;
        }
        v8 = sub_13FD0(v10, v11);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        goto LABEL_18;
      }
      v8 = sub_13DEC();
      if ( !v8 )
        return 0;
      sub_12BFC((_DWORD *)a1, a3);
      v12 = *(_DWORD *)(a1 + 60);
      if ( v12 == 125 )
        goto LABEL_18;
      if ( v12 == 256 )
      {
        v13 = *(const void **)(a1 + 64);
        v14 = *(_DWORD *)(a1 + 68);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        if ( !v13 )
          return 0;
        while ( 1 )
        {
          if ( memchr(v13, 0, v14) )
          {
            sub_1383C(v13);
            sub_128D8(a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
            goto LABEL_59;
          }
          if ( (a2 & 1) != 0 && sub_13E38(v8, v13) )
          {
            sub_1383C(v13);
            sub_128D8(a3, (_DWORD *)a1, 14, "duplicate object key");
            goto LABEL_59;
          }
          sub_12BFC((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 58 )
          {
            sub_1383C(v13);
            sub_128D8(a3, (_DWORD *)a1, 8, "':' expected");
            goto LABEL_59;
          }
          sub_12BFC((_DWORD *)a1, a3);
          v15 = sub_131F0(a1, a2, a3);
          if ( !v15 || sub_144B0(v8, v13, v15) )
          {
            sub_1383C(v13);
            goto LABEL_59;
          }
          sub_1383C(v13);
          sub_12BFC((_DWORD *)a1, a3);
          v16 = *(_DWORD *)(a1 + 60);
          if ( v16 != 44 )
            break;
          sub_12BFC((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 256 )
            goto LABEL_58;
          v13 = *(const void **)(a1 + 64);
          v14 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          if ( !v13 )
            return 0;
        }
        if ( v16 == 125 )
          goto LABEL_18;
        sub_128D8(a3, (_DWORD *)a1, 8, "'}' expected");
      }
      else
      {
LABEL_58:
        sub_128D8(a3, (_DWORD *)a1, 8, "string or '}' expected");
      }
LABEL_59:
      if ( *(_DWORD *)(v8 + 4) == -1 )
        return 0;
      v24 = (unsigned int *)(v8 + 4);
      __dmb(0xFu);
      do
      {
        v25 = __ldrex(v24);
        v22 = v25 - 1;
      }
      while ( __strex(v22, v24) );
    }
    if ( !v22 )
    {
      v23 = v8;
      v8 = 0;
      sub_1427C(v23);
      return v8;
    }
    return 0;
  }
  if ( v7 == 259 )
  {
    v8 = sub_14260();
  }
  else if ( v7 < 259 )
  {
    v8 = sub_1419C();
  }
  else if ( v7 == 260 )
  {
    v8 = sub_14268();
  }
  else
  {
    if ( v7 != 261 )
      goto LABEL_8;
    v8 = sub_14270();
  }
LABEL_18:
  if ( !v8 )
    return v8;
  --*(_DWORD *)(a1 + 56);
  return v8;
}
