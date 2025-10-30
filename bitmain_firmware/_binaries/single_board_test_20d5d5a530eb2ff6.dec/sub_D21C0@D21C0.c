int __fastcall sub_D21C0(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int result; // r0
  _DWORD *v11; // r5
  _BOOL4 v12; // r3
  int v13; // r1
  unsigned __int8 *v14; // r10
  int v15; // r3
  int v16; // r8
  int v17; // r7
  size_t v18; // r6

  v8 = (_DWORD *)sub_D8934(a1);
  if ( !v8[62] )
    return -1;
  v9 = v8;
  if ( (int)v8[174] >= 0 )
  {
    v11 = (_DWORD *)sub_D8934(a1);
    v12 = a4 <= 0x17;
    if ( a2 != a3 )
      v12 = 1;
    if ( v12 )
      return -1;
    if ( *(_DWORD *)(a1 + 8) )
      v13 = 19;
    else
      v13 = 24;
    if ( sub_D83D4(a1, v13, 8, a2) <= 0 )
      goto LABEL_18;
    v14 = (unsigned __int8 *)(a1 + 48);
    if ( sub_E5B38(v11 + 64, a1 + 48, v11[174]) )
      goto LABEL_18;
    v15 = *(_DWORD *)(a1 + 8);
    v16 = a3 + 8;
    v17 = a2 + 8;
    v18 = a4 - 24;
    if ( v15 )
    {
      if ( v11[175] )
      {
        if ( !sub_E6B1C(v11 + 64, v16, v17, a4 - 24, v11[175]) )
        {
LABEL_26:
          sub_E7724(v11 + 64, v17 + v18, 16);
          goto LABEL_19;
        }
      }
      else if ( !sub_E5DF0(v11 + 64, v16, v17, a4 - 24) )
      {
        goto LABEL_26;
      }
LABEL_18:
      a4 = -1;
LABEL_19:
      v11[63] = 0;
      v11[174] = -1;
      return a4;
    }
    if ( v11[175] )
    {
      if ( sub_E7040(v11 + 64, v16, v17, a4 - 24, v11[175]) )
        goto LABEL_18;
    }
    else if ( sub_E6490(v11 + 64, v16, v17, a4 - 24) )
    {
      goto LABEL_18;
    }
    a4 -= 24;
    sub_E7724(v11 + 64, v14, 16);
    if ( !sub_BC33C(v14, (unsigned __int8 *)(v16 + v18), 16) )
      goto LABEL_19;
    sub_E07F8(v17, v18);
    goto LABEL_18;
  }
  if ( !v8[63] )
    return -1;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *(_DWORD *)(a1 + 8) )
      {
        if ( v8[175] )
        {
          if ( !sub_E6B1C(v8 + 64, a3, a2, a4, v8[175]) )
            return a4;
          return -1;
        }
        if ( !sub_E5DF0(v8 + 64, a3, a2, a4) )
          return a4;
      }
      else if ( v8[175] )
      {
        if ( !sub_E7040(v8 + 64, a3, a2, a4, v8[175]) )
          return a4;
      }
      else if ( !sub_E6490(v8 + 64, a3, a2, a4) )
      {
        return a4;
      }
      return -1;
    }
    if ( sub_E5B38(v8 + 64, a3, a4) )
      return -1;
    return a4;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 8) )
    {
      if ( (int)v8[172] >= 0 )
      {
        result = sub_E7578(v8 + 64, a1 + 48);
        if ( !result )
        {
          v9[63] = 0;
          return result;
        }
      }
      return -1;
    }
    sub_E7724(v8 + 64, a1 + 48, 16);
    v9[63] = 0;
    v9[172] = 16;
    return 0;
  }
}
