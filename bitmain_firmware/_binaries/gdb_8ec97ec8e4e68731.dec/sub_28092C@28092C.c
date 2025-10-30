int __fastcall sub_28092C(int *a1)
{
  int v2; // r8
  int v3; // r5
  unsigned __int8 *v4; // r0
  int v5; // r11
  int v6; // r4
  int v7; // r8
  int v8; // r2
  _BOOL4 v9; // r3
  _BOOL4 v10; // r1
  _BOOL4 v12; // r5
  int v13; // r3
  bool v14; // zf
  unsigned __int8 *v15; // r3
  int v16; // r2
  int v17; // t1
  bool v18; // zf
  int v19; // r3
  bool v20; // zf
  int v21; // r3
  bool v22; // zf
  int v23; // [sp+4h] [bp-8h]

  v2 = dword_4900DC;
  v3 = a1[8];
  ++dword_4900DC;
  *(_BYTE *)(dword_48AAD4 + v2) = 32;
  dword_48ABA4 = v3;
  *(_BYTE *)(dword_48AAD4 + dword_4900DC) = 0;
  v4 = (unsigned __int8 *)sub_27F874(v3, (int *)off_46DED0);
  dword_4900DC = v2;
  *(_BYTE *)(dword_48AAD4 + v2) = 0;
  v5 = dword_4900DC;
  v6 = dword_4900D8;
  v7 = dword_4900D4;
  if ( dword_4900D8 > dword_4900DC )
  {
    v6 = dword_4900DC;
    dword_4900D8 = dword_4900DC;
  }
  if ( dword_4900D4 == v6 )
    return -1;
  v8 = (unsigned __int8)v3;
  if ( (unsigned __int8)v3 == v3
    && (v4 = (unsigned __int8 *)_ctype_b_loc(),
        v8 = (unsigned __int8)v3,
        (*(_WORD *)(*(_DWORD *)v4 + 2 * v3) & 0x200) != 0) )
  {
    v4 = (unsigned __int8 *)_ctype_toupper_loc();
    v8 = (unsigned __int8)v3;
    v9 = *(_DWORD *)(*(_DWORD *)v4 + 4 * v3) == 87;
  }
  else
  {
    v9 = v3 == 87;
  }
  v10 = v5 > v6;
  if ( v7 >= v6 )
    v10 = 0;
  if ( v9 && v10 )
  {
    v19 = *(unsigned __int8 *)(dword_48AAD4 + v6);
    v20 = v19 == 32;
    if ( v19 != 32 )
      v20 = v19 == 9;
    if ( !v20 )
      dword_4900D8 = --v6;
  }
  if ( a1[7] == 99 )
  {
    if ( v7 > v6 )
      goto LABEL_12;
    if ( v8 == v3
      && (v23 = v8, v4 = (unsigned __int8 *)_ctype_b_loc(), (*(_WORD *)(*(_DWORD *)v4 + 2 * v23) & 0x200) != 0) )
    {
      v4 = (unsigned __int8 *)_ctype_toupper_loc();
      v12 = *(_DWORD *)(*(_DWORD *)v4 + 4 * v23) == 87;
    }
    else
    {
      v12 = v3 == 87;
    }
    if ( v12 )
    {
      if ( v7 < v6 )
      {
        v13 = *(unsigned __int8 *)(dword_48AAD4 + v6);
        v14 = v13 == 9;
        if ( v13 != 9 )
          v14 = v13 == 32;
        if ( !v14 )
        {
LABEL_41:
          if ( v6 < 0 )
          {
            v6 = dword_4900D8;
            goto LABEL_11;
          }
          goto LABEL_42;
        }
        v4 = (unsigned __int8 *)(dword_48AAD4 + v7);
        v15 = (unsigned __int8 *)(dword_48AAD4 + v6 - 1);
        while ( 1 )
        {
          v6 = (int)&v15[-dword_48AAD4];
          dword_4900D8 = (int)&v15[-dword_48AAD4];
          if ( v15 == v4 )
            break;
          v17 = *v15--;
          v16 = v17;
          v18 = v17 == 9;
          if ( v17 != 9 )
            v18 = v16 == 32;
          if ( !v18 )
            goto LABEL_41;
        }
      }
      if ( v7 == v6 )
      {
        v6 = v7 + 1;
        dword_4900D8 = v7 + 1;
        goto LABEL_10;
      }
      if ( v6 < 0 )
      {
LABEL_48:
        v6 = dword_4900D8;
        goto LABEL_10;
      }
LABEL_42:
      if ( v5 - 1 > v6 )
      {
        v21 = *(unsigned __int8 *)(dword_48AAD4 + v6);
        v22 = v21 == 32;
        if ( v21 != 32 )
          v22 = v21 == 9;
        if ( !v22 )
        {
          dword_4900D8 = ++v6;
          goto LABEL_10;
        }
      }
      goto LABEL_48;
    }
  }
LABEL_10:
  if ( v7 < v6 )
  {
LABEL_11:
    dword_4900D8 = v7;
    dword_4900D4 = v6;
  }
LABEL_12:
  if ( (dword_48AAA0 & 0x80000) != 0 )
    off_470784(v4);
  return sub_280628(a1);
}
