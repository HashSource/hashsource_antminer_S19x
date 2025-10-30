int __fastcall sub_D27F0(int a1, _DWORD *a2, _DWORD *a3, size_t a4)
{
  int v8; // r0
  _DWORD *v9; // r4
  _BOOL4 v10; // r3
  int result; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r3
  _BOOL4 v15; // r0
  int v16; // r0
  _DWORD *v17; // r8
  int v18; // r0
  int v19; // r2
  int v20; // r4
  int v21; // r0
  size_t v22; // r4
  int v23; // r5
  int v24; // r0
  int v25; // r0
  int v26; // r3
  _BOOL4 v27; // r0
  _BOOL4 v28; // r0
  _BOOL4 v29; // r0
  _BOOL4 v30; // r3
  _DWORD *v31; // r0
  int v32; // r3
  unsigned __int8 *v33; // r0
  int v34; // r0
  unsigned __int8 dest[20]; // [sp+8h] [bp-14h] BYREF

  v8 = sub_D8934(a1);
  if ( !*(_DWORD *)(v8 + 248) )
    return -1;
  v9 = (_DWORD *)v8;
  if ( *(int *)(v8 + 272) >= 0 )
  {
    v16 = sub_D8934(a1);
    v17 = (_DWORD *)v16;
    if ( a2 == a3 && a4 >= *(_DWORD *)(v16 + 268) + 8 )
    {
      if ( sub_D8924(a1) )
      {
        v31 = (_DWORD *)sub_D8AC4(a1);
        v32 = v31[1];
        *a2 = *v31;
        a2[1] = v32;
      }
      v18 = sub_D8AC0(a1);
      v19 = a2[1];
      *(_DWORD *)(v18 + 4) = *a2;
      *(_DWORD *)(v18 + 8) = v19;
      v20 = v17[67];
      v21 = sub_D8AC0(a1);
      v22 = a4 - v20 - 8;
      if ( !sub_E23DC(v17 + 70, v21, 15 - v17[66], v22) )
      {
        v23 = (int)(a2 + 2);
        v24 = sub_D8AC4(a1);
        sub_E2428(v17 + 70, v24, v17[68]);
        v25 = sub_D8924(a1);
        v26 = v17[82];
        if ( v25 )
        {
          if ( v26 )
            v27 = sub_E3140(v17 + 70, v23, v23, v22, v17[82]) != 0;
          else
            v27 = sub_E24EC(v17 + 70, v23, v23, v22) != 0;
          if ( !v27 && sub_E3C40((int)(v17 + 70), (void *)(v23 + v22)) )
            return v17[67] + 8 + v22;
        }
        else
        {
          if ( v26 )
            v28 = sub_E3740(v17 + 70, v23, v23, v22, v17[82]) == 0;
          else
            v28 = sub_E2B94(v17 + 70, v23, v23, v22) == 0;
          if ( v28 && sub_E3C40((int)(v17 + 70), dest) && !sub_BC33C(dest, (unsigned __int8 *)(v23 + v22), v17[67]) )
            return v22;
          sub_E07F8(v23, v22);
        }
      }
    }
    return -1;
  }
  v10 = a3 == 0;
  if ( !a2 )
    v10 = 0;
  result = 0;
  if ( !v10 )
  {
    if ( !v9[63] )
      return -1;
    if ( !a2 )
    {
      if ( a3 )
      {
        v30 = v9[65] == 0;
        if ( !a4 )
          v30 = 0;
        if ( !v30 )
        {
          sub_E2428(v9 + 70, a3, a4);
          return a4;
        }
      }
      else
      {
        v34 = sub_D8AC0(a1);
        if ( !sub_E23DC(v9 + 70, v34, 15 - v9[66], a4) )
        {
          v9[65] = 1;
          return a4;
        }
      }
      return -1;
    }
    if ( !sub_D8924(a1) && !v9[64] )
      return -1;
    if ( !v9[65] )
    {
      v12 = sub_D8AC0(a1);
      if ( sub_E23DC(v9 + 70, v12, 15 - v9[66], a4) )
        return -1;
      v9[65] = 1;
    }
    v13 = sub_D8924(a1);
    v14 = v9[82];
    if ( v13 )
    {
      if ( v14 )
        v15 = sub_E3140(v9 + 70, a3, a2, a4, v9[82]) != 0;
      else
        v15 = sub_E24EC(v9 + 70, a3, a2, a4) != 0;
      if ( !v15 )
      {
        result = a4;
        v9[64] = 1;
        return result;
      }
      return -1;
    }
    if ( v14 )
      v29 = sub_E3740(v9 + 70, a3, a2, a4, v9[82]) == 0;
    else
      v29 = sub_E2B94(v9 + 70, a3, a2, a4) == 0;
    if ( !v29
      || !sub_E3C40((int)(v9 + 70), dest)
      || (v33 = (unsigned __int8 *)sub_D8AC4(a1), sub_BC33C(dest, v33, v9[67]))
      || (result = a4, a4 == -1) )
    {
      sub_E07F8((int)a2, a4);
      result = -1;
    }
    v9[63] = 0;
    v9[64] = 0;
    v9[65] = 0;
  }
  return result;
}
