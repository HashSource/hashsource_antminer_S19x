int __fastcall sub_46CB0(int a1, int a2, int a3)
{
  unsigned int v5; // r3
  int v6; // r3
  int v7; // r6
  int v10; // r7
  int v11; // r9
  int v12; // r3
  const void *v13; // r7
  size_t v14; // r2
  int v15; // r2
  int v16; // r3
  unsigned int *v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r2
  int v20; // r3
  int v21; // r3
  unsigned int *v22; // r3
  unsigned int v23; // r2
  int v24; // r0

  v5 = *(_DWORD *)(a1 + 56) + 1;
  *(_DWORD *)(a1 + 56) = v5;
  if ( v5 > 0x800 )
  {
    v7 = 0;
    sub_45F98(a3, (_DWORD *)a1, 2, "maximum parsing depth reached");
    return v7;
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 == 257 )
  {
    v7 = sub_48858(*(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68));
    goto LABEL_9;
  }
  if ( v6 <= 257 )
  {
    if ( v6 == 91 )
    {
      v7 = sub_48408();
      if ( !v7 )
        return 0;
      sub_46498((_DWORD *)a1, a3);
      v20 = *(_DWORD *)(a1 + 60);
      if ( v20 == 93 )
        goto LABEL_10;
      if ( v20 )
      {
        while ( sub_46CB0(a1, a2, a3) && !sub_4935C() )
        {
          sub_46498((_DWORD *)a1, a3);
          v21 = *(_DWORD *)(a1 + 60);
          if ( v21 != 44 )
          {
            if ( v21 == 93 )
              goto LABEL_10;
            goto LABEL_62;
          }
          sub_46498((_DWORD *)a1, a3);
          if ( !*(_DWORD *)(a1 + 60) )
            goto LABEL_62;
        }
      }
      else
      {
LABEL_62:
        sub_45F98(a3, (_DWORD *)a1, 8, "']' expected");
      }
      if ( *(_DWORD *)(v7 + 4) == -1 )
        return 0;
      v22 = (unsigned int *)(v7 + 4);
      __dmb(0xBu);
      do
      {
        v23 = __ldrex(v22);
        v19 = v23 - 1;
      }
      while ( __strex(v19, v22) );
    }
    else
    {
      if ( v6 <= 91 )
      {
        if ( v6 == -1 )
        {
          v7 = 0;
          sub_45F98(a3, (_DWORD *)a1, 8, "invalid token");
          return v7;
        }
        goto LABEL_57;
      }
      if ( v6 != 123 )
      {
        if ( v6 != 256 )
          goto LABEL_57;
        v10 = *(_DWORD *)(a1 + 64);
        v11 = *(_DWORD *)(a1 + 68);
        if ( (a2 & 0x10) == 0 && memchr(*(const void **)(a1 + 64), 0, *(_DWORD *)(a1 + 68)) )
        {
          v7 = 0;
          sub_45F98(a3, (_DWORD *)a1, 11, "\\u0000 is not allowed without JSON_ALLOW_NUL");
          return v7;
        }
        v7 = sub_485C0(v10, v11);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        goto LABEL_9;
      }
      v7 = sub_48078();
      if ( !v7 )
        return 0;
      sub_46498((_DWORD *)a1, a3);
      v12 = *(_DWORD *)(a1 + 60);
      if ( v12 == 125 )
        goto LABEL_10;
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
            sub_47764(v13);
            sub_45F98(a3, (_DWORD *)a1, 13, "NUL byte in object key not supported");
            goto LABEL_36;
          }
          if ( (a2 & 1) != 0 && sub_480FC(v7, v13) )
          {
            sub_47764(v13);
            sub_45F98(a3, (_DWORD *)a1, 14, "duplicate object key");
            goto LABEL_36;
          }
          sub_46498((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 58 )
          {
            sub_47764(v13);
            sub_45F98(a3, (_DWORD *)a1, 8, "':' expected");
            goto LABEL_36;
          }
          sub_46498((_DWORD *)a1, a3);
          v15 = sub_46CB0(a1, a2, a3);
          if ( !v15 || sub_48CF4(v7, v13, v15) )
          {
            sub_47764(v13);
            goto LABEL_36;
          }
          sub_47764(v13);
          sub_46498((_DWORD *)a1, a3);
          v16 = *(_DWORD *)(a1 + 60);
          if ( v16 != 44 )
            break;
          sub_46498((_DWORD *)a1, a3);
          if ( *(_DWORD *)(a1 + 60) != 256 )
            goto LABEL_63;
          v13 = *(const void **)(a1 + 64);
          v14 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(a1 + 64) = 0;
          *(_DWORD *)(a1 + 68) = 0;
          if ( !v13 )
            return 0;
        }
        if ( v16 == 125 )
          goto LABEL_10;
        sub_45F98(a3, (_DWORD *)a1, 8, "'}' expected");
      }
      else
      {
LABEL_63:
        sub_45F98(a3, (_DWORD *)a1, 8, "string or '}' expected");
      }
LABEL_36:
      if ( *(_DWORD *)(v7 + 4) == -1 )
        return 0;
      v17 = (unsigned int *)(v7 + 4);
      __dmb(0xBu);
      do
      {
        v18 = __ldrex(v17);
        v19 = v18 - 1;
      }
      while ( __strex(v19, v17) );
    }
    if ( !v19 )
    {
      v24 = v7;
      v7 = 0;
      sub_48A34(v24);
      return v7;
    }
    return 0;
  }
  if ( v6 == 259 )
  {
    v7 = sub_48A10();
  }
  else if ( v6 < 259 )
  {
    v7 = sub_488DC();
  }
  else
  {
    if ( v6 != 260 )
    {
      if ( v6 == 261 )
      {
        v7 = sub_48A28();
        goto LABEL_9;
      }
LABEL_57:
      v7 = 0;
      sub_45F98(a3, (_DWORD *)a1, 8, "unexpected token");
      return v7;
    }
    v7 = sub_48A1C();
  }
LABEL_9:
  if ( v7 )
  {
LABEL_10:
    --*(_DWORD *)(a1 + 56);
    return v7;
  }
  return 0;
}
