char *__fastcall sub_12FAF0(_WORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r5
  int v6; // r3
  char *v7; // r4
  bool v8; // cc
  char v9; // r2
  int v10; // r2
  int v11; // r0
  const char *v12; // r0
  char *v13; // r7
  int v14; // r4
  size_t v15; // r6
  void *v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v20; // r0
  bool v21; // zf
  int v22; // r3
  char v23; // r3
  char *v24; // r0
  bool v25; // cf
  char *result; // r0
  char v27; // r3

  v4 = sub_12E694((int)a1, 3, (int)a2);
  v5 = v4;
  if ( !v4 )
  {
    v6 = (unsigned __int16)*a1;
LABEL_5:
    v8 = (v6 & 0xFFFBu) > 0x13;
    if ( (v6 & 0xFFFB) != 0x13 )
      v8 = (unsigned int)(v6 - 56) > 1;
    v9 = v8;
    if ( v6 == 2 )
      v10 = 0;
    else
      v10 = v9 & 1;
    if ( !v10 )
    {
      switch ( v6 )
      {
        case 2:
        case 19:
        case 23:
        case 56:
          if ( !v4 )
            goto LABEL_16;
          v7 = *(char **)(v4 + 8);
          goto LABEL_43;
        case 4:
        case 17:
        case 40:
        case 60:
          return *(char **)(v4 + 8);
        case 57:
          goto LABEL_34;
        default:
          goto LABEL_38;
      }
    }
    return 0;
  }
  v7 = *(char **)(v4 + 8);
  v6 = (unsigned __int16)*a1;
  if ( !v7 )
    goto LABEL_5;
  switch ( *a1 )
  {
    case 2:
    case 0x13:
    case 0x17:
    case 0x38:
LABEL_43:
      if ( v7 )
      {
        if ( !strncmp(v7, "._", 2u) || !strncmp(v7, "<anonymous", 0xAu) )
          return 0;
      }
      else
      {
LABEL_16:
        v11 = sub_12FABC((int)a1, (int)a2);
        v5 = v11;
        if ( !v11 )
          return 0;
        v7 = *(char **)(v11 + 8);
        if ( !v7 )
          return 0;
        if ( *(char *)(v11 + 3) < 0 )
          return v7;
        v12 = (const char *)sub_1008BC(*(char **)(v11 + 8));
        v13 = (char *)v12;
        if ( v12 )
        {
          v14 = *(_DWORD *)(*a2 + 40);
          v15 = strlen(v12);
          v16 = *(void **)(v14 + 12);
          if ( v15 + 1 > *(_DWORD *)(v14 + 16) - (int)v16 )
          {
            obstack_newchunk((struct obstack *)v14, v15 + 1);
            v16 = *(void **)(v14 + 12);
          }
          memcpy(v16, v13, v15);
          v17 = *(_DWORD *)(v14 + 12);
          *(_DWORD *)(v14 + 12) = v17 + v15 + 1;
          *(_BYTE *)(v17 + v15) = 0;
          v18 = *(_DWORD *)(v14 + 12);
          v19 = *(_DWORD *)(v14 + 8);
          v20 = *(_DWORD *)(v14 + 16);
          v21 = v18 == v19;
          if ( v18 == v19 )
            LOBYTE(v17) = *(_BYTE *)(v14 + 40);
          v22 = (v18 + *(_DWORD *)(v14 + 24)) & ~*(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 12) = v22;
          if ( v21 )
            *(_BYTE *)(v14 + 40) = v17 | 2;
          if ( v22 - *(_DWORD *)(v14 + 4) > (unsigned int)(v20 - *(_DWORD *)(v14 + 4)) )
          {
            v22 = v20;
            *(_DWORD *)(v14 + 12) = v20;
          }
          *(_DWORD *)(v14 + 8) = v22;
          v23 = *(_BYTE *)(v5 + 3);
          *(_DWORD *)(v5 + 8) = v19;
          *(_BYTE *)(v5 + 3) = v23 | 0x80;
          free(v13);
          v7 = *(char **)(v5 + 8);
          v24 = strrchr(v7, 58);
          v25 = 1;
          if ( v24 )
            v25 = v7 >= v24;
          if ( !v25 && *(v24 - 1) == 58 )
            return v24 + 1;
          return v7;
        }
LABEL_38:
        v7 = *(char **)(v5 + 8);
      }
LABEL_39:
      if ( *(char *)(v5 + 3) < 0 )
        return v7;
      result = sub_12413C(v7, a2 + 16, *(_DWORD *)(*a2 + 40));
      v27 = *(_BYTE *)(v5 + 3);
      *(_DWORD *)(v5 + 8) = result;
      *(_BYTE *)(v5 + 3) = v27 | 0x80;
      break;
    case 4:
    case 0x11:
    case 0x28:
    case 0x3C:
      return v7;
    case 0x39:
LABEL_34:
      if ( !v4 )
        return "(anonymous namespace)";
      v7 = *(char **)(v4 + 8);
      if ( !v7 )
        return "(anonymous namespace)";
      return v7;
    default:
      goto LABEL_39;
  }
  return result;
}
