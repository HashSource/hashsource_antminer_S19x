char **__fastcall sub_2FF1FC(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // lr
  _DWORD *v4; // r3
  int v5; // r12
  _DWORD *v6; // r12
  _DWORD *v7; // r12
  int v8; // r4
  int v9; // lr
  int v11; // lr

  v3 = a2[4];
  if ( v3 )
  {
    v4 = (_DWORD *)a2[4];
    while ( 1 )
    {
      if ( (v4[5] & 0x8000) == 0 )
      {
        v5 = v4[3];
        v6 = v5 ? *(_DWORD **)(v5 + 16) : *(_DWORD **)(a1 + 104);
        if ( v6 == v4 )
          break;
      }
      v4 = (_DWORD *)v4[4];
      if ( !v4 )
      {
        v7 = *(_DWORD **)(v3 + 12);
        if ( v7 )
          goto LABEL_14;
        return &off_470950;
      }
    }
    v7 = *(_DWORD **)(v3 + 12);
    if ( v7 )
      goto LABEL_14;
    return (char **)v4;
  }
  v7 = *(_DWORD **)(a2[37] + 100);
  if ( !v7 )
    return &off_470950;
  v4 = (_DWORD *)a2[4];
LABEL_14:
  while ( 1 )
  {
    v8 = v7[5];
    v9 = v7[3];
    if ( (v8 & 0x8000) == 0 )
      break;
    if ( !v9 )
      goto LABEL_18;
LABEL_13:
    v7 = (_DWORD *)v7[3];
  }
  if ( v9 )
  {
    if ( *(_DWORD **)(v9 + 16) == v7 )
      goto LABEL_21;
    goto LABEL_13;
  }
  if ( *(_DWORD **)(a1 + 104) != v7 )
  {
LABEL_18:
    if ( !v4 )
      return &off_470950;
    return (char **)v4;
  }
LABEL_21:
  if ( !v4 )
    return (char **)v7;
  v11 = v4[5];
  if ( ((v8 ^ v11) & 0x403) != 0 )
  {
    if ( (((unsigned __int16)a2[5] ^ (unsigned __int16)v8) & 0x401) != 0 )
      return (char **)v4;
    if ( (v11 & 2) != 0 )
    {
      if ( (v8 & 2) != 0 )
        return (char **)v7;
      return (char **)v4;
    }
    return (char **)v7;
  }
  if ( (((unsigned __int8)v8 ^ (unsigned __int8)v11) & 8) == 0 )
  {
    if ( (((unsigned __int8)v8 ^ (unsigned __int8)v11) & 0x10) != 0 )
    {
      if ( ((v8 ^ a2[5]) & 0x10) == 0 )
        return (char **)v7;
    }
    else if ( v7[7] <= a3 )
    {
      return (char **)v7;
    }
    return (char **)v4;
  }
  if ( ((v8 ^ a2[5]) & 8) == 0 )
    return (char **)v7;
  return (char **)v4;
}
