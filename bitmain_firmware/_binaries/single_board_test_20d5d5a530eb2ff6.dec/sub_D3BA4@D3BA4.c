int __fastcall sub_D3BA4(int a1, int a2, int a3, unsigned int a4)
{
  _DWORD *v8; // r0
  _DWORD *v9; // r5
  int result; // r0
  int v11; // r5
  _BOOL4 v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r8
  int v16; // r7
  size_t v17; // r10
  int v18; // r0
  unsigned __int8 *v19; // r0
  int v20; // r0
  int v21; // r0

  v8 = (_DWORD *)sub_D8934(a1);
  if ( !v8[70] )
    return -1;
  v9 = v8;
  if ( (int)v8[182] >= 0 )
  {
    v11 = sub_D8934(a1);
    v12 = a4 <= 0x17;
    if ( a2 != a3 )
      v12 = 1;
    if ( v12 )
      return -1;
    if ( sub_D8924(a1) )
      v13 = 19;
    else
      v13 = 24;
    if ( sub_D83D4(a1, v13, 8, a2) > 0 )
    {
      v14 = sub_D8AC4(a1);
      if ( !sub_E5B38(v11 + 288, v14, *(_DWORD *)(v11 + 728)) )
      {
        v15 = a3 + 8;
        v16 = a2 + 8;
        v17 = a4 - 24;
        if ( sub_D8924(a1) )
        {
          if ( !sub_E5DF0(v11 + 288, v15, v16, a4 - 24) )
          {
            sub_E7724(v11 + 288, v16 + v17, 16);
            goto LABEL_22;
          }
        }
        else if ( !sub_E6490(v11 + 288, v15, v16, a4 - 24) )
        {
          a4 -= 24;
          v18 = sub_D8AC4(a1);
          sub_E7724(v11 + 288, v18, 16);
          v19 = (unsigned __int8 *)sub_D8AC4(a1);
          if ( !sub_BC33C(v19, (unsigned __int8 *)(v15 + v17), 16) )
          {
LABEL_22:
            *(_DWORD *)(v11 + 284) = 0;
            *(_DWORD *)(v11 + 728) = -1;
            return a4;
          }
          sub_E07F8(v16, v17);
        }
      }
    }
    a4 = -1;
    goto LABEL_22;
  }
  if ( !v8[71] )
    return -1;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( sub_D8924(a1) )
      {
        if ( !sub_E5DF0(v9 + 72, a3, a2, a4) )
          return a4;
      }
      else if ( !sub_E6490(v9 + 72, a3, a2, a4) )
      {
        return a4;
      }
    }
    else if ( !sub_E5B38(v8 + 72, a3, a4) )
    {
      return a4;
    }
    return -1;
  }
  if ( !sub_D8924(a1) )
  {
    if ( (int)v9[180] >= 0 )
    {
      v20 = sub_D8AC4(a1);
      result = sub_E7578(v9 + 72, v20);
      if ( !result )
      {
        v9[71] = 0;
        return result;
      }
    }
    return -1;
  }
  v21 = sub_D8AC4(a1);
  sub_E7724(v9 + 72, v21, 16);
  v9[71] = 0;
  v9[180] = 16;
  return 0;
}
