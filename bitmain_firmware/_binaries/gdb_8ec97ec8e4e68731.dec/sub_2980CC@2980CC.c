int __fastcall sub_2980CC(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  int v5; // r6
  int v7; // r3
  int v8; // r8
  const char *v9; // r9
  bool v10; // zf
  int v11; // r3

  v2 = a2;
  v3 = *(unsigned __int8 *)(a1 + a2);
  if ( *(_BYTE *)(a1 + a2) )
  {
    v5 = *(unsigned __int8 *)(a1 + a2);
    if ( strchr("()\n", v3) )
      return ++v2;
    if ( strchr("<>;&|$", v3) )
    {
      v7 = *(unsigned __int8 *)(a1 + v2 + 1);
      if ( v3 != v7 )
      {
        if ( v7 == 38 )
        {
          if ( (v3 & 0xFD) != 0x3C )
            goto LABEL_10;
          goto LABEL_27;
        }
        if ( v7 == 62 )
        {
          if ( v3 != 38 )
          {
LABEL_10:
            if ( v3 != 36 )
              return ++v2;
            v8 = 0;
            v5 = 0;
            goto LABEL_13;
          }
LABEL_27:
          v2 += 2;
          return v2;
        }
        if ( v7 != 40 )
          goto LABEL_10;
        v10 = v3 == 36;
        if ( v3 != 36 )
          v10 = (v3 & 0xFD) == 60;
        if ( !v10 )
          goto LABEL_10;
        goto LABEL_52;
      }
      if ( v3 != 36 )
      {
        if ( v3 == 60 )
        {
          v11 = *(unsigned __int8 *)(a1 + v2 + 2);
          if ( v11 == 45 || v11 == 60 )
            ++v2;
        }
        goto LABEL_27;
      }
    }
    else if ( strchr("!@?+*", v3) && *(_BYTE *)(a1 + v2 + 1) == 40 )
    {
LABEL_52:
      v2 += 2;
      v8 = 1;
      v3 = *(unsigned __int8 *)(a1 + v2);
      v5 = 41;
      goto LABEL_45;
    }
    if ( !strchr("\"'`", v3) )
    {
      v5 = 0;
      v8 = 0;
LABEL_13:
      v9 = off_4707B0;
      while ( v3 != 92 )
      {
        if ( v8 )
        {
          if ( v3 == 40 )
          {
            ++v8;
            goto LABEL_20;
          }
          if ( v3 == v5 )
          {
            if ( !--v8 )
              v5 = 0;
            goto LABEL_20;
          }
LABEL_31:
          if ( !v5 )
          {
LABEL_16:
            if ( strchr(v9, v3) )
              return v2;
            if ( strchr("\"'`", v3) )
              v5 = v3;
            else
              v5 = 0;
            goto LABEL_20;
          }
          goto LABEL_20;
        }
        if ( !v5 )
          goto LABEL_16;
        if ( v3 == v5 )
          v5 = 0;
LABEL_20:
        ++v2;
        v3 = *(unsigned __int8 *)(a1 + v2);
        if ( !*(_BYTE *)(a1 + v2) )
          return v2;
      }
      if ( *(_BYTE *)(a1 + v2 + 1) == 10 || v5 != 39 )
      {
        ++v2;
        goto LABEL_20;
      }
      if ( !v8 )
        goto LABEL_20;
      goto LABEL_31;
    }
    ++v2;
    v8 = 0;
    v3 = *(unsigned __int8 *)(a1 + v2);
LABEL_45:
    if ( !v3 )
      return v2;
    goto LABEL_13;
  }
  return v2;
}
