int __fastcall sub_CB1AC(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v8; // r7
  int v9; // r8
  int v10; // r9
  int v11; // r11
  int v13; // r0
  int (__fastcall *v14)(_DWORD *, int, int, int); // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]
  int (__fastcall *v17)(_DWORD *, int, int, int, int); // [sp+18h] [bp-Ch]
  int v18; // [sp+1Ch] [bp-8h]

  if ( !sub_C6CD4(a1, a3) )
  {
    v8 = 0;
    v9 = 0;
    v15 = a1[10];
    v17 = *(int (__fastcall **)(_DWORD *, int, int, int, int))(*a1 + 136);
    v14 = *(int (__fastcall **)(_DWORD *, int, int, int))(*a1 + 140);
    if ( !a4 )
    {
      v13 = sub_130B08(0);
      a4 = v13;
      if ( !v13 )
        return v8;
      v9 = v13;
    }
    sub_130BC0(a4);
    v10 = sub_130CCC(a4);
    v11 = sub_130CCC(a4);
    v16 = sub_130CCC(a4);
    v18 = sub_130CCC(a4);
    if ( !v18 )
      goto LABEL_7;
    if ( a3[5] )
    {
      if ( !v14(a1, v10, a3[2], a4)
        || !sub_133FE4(v11, v10, v15)
        || !sub_133AF8(v10, v10, v11, v15)
        || !sub_133AF8(v11, v10, a1[17], v15) )
      {
        goto LABEL_7;
      }
    }
    else if ( a1[19] )
    {
      if ( !v14(a1, v11, a3[4], a4)
        || !sub_133AF8(v10, a3[2], v11, v15)
        || !sub_133F18(v16, a3[2], v11, v15)
        || !v17(a1, v11, v10, v16, a4)
        || !sub_133FE4(v10, v11, v15)
        || !sub_133AF8(v11, v10, v11, v15) )
      {
        goto LABEL_7;
      }
    }
    else if ( !v14(a1, v10, a3[2], a4)
           || !sub_133FE4(v11, v10, v15)
           || !sub_133AF8(v10, v10, v11, v15)
           || !v14(a1, v11, a3[4], a4)
           || !v14(a1, v11, v11, a4)
           || !v17(a1, v11, v11, a1[17], a4)
           || !sub_133AF8(v11, v11, v10, v15) )
    {
      goto LABEL_7;
    }
    if ( a3[5] )
    {
      if ( !sub_B89E4(v10, a3[3]) )
        goto LABEL_7;
    }
    else if ( !v17(a1, v10, a3[3], a3[4], a4) )
    {
      goto LABEL_7;
    }
    if ( sub_133FE4(*(_DWORD *)(a2 + 16), v10, v15) )
    {
      *(_DWORD *)(a2 + 20) = 0;
      if ( v14(a1, v18, a3[3], a4) )
      {
        if ( v17(a1, v16, a3[2], v18, a4)
          && sub_134010(v16, v16, 2, v15)
          && sub_133FE4(v10, v16, v15)
          && v14(a1, *(_DWORD *)(a2 + 8), v11, a4)
          && sub_133F18(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 8), v10, v15)
          && v14(a1, v10, v18, a4)
          && sub_134010(v18, v10, 3, v15)
          && sub_133F18(v10, v16, *(_DWORD *)(a2 + 8), v15)
          && v17(a1, v10, v11, v10, a4) )
        {
          v8 = sub_133F18(*(_DWORD *)(a2 + 12), v10, v18, v15) != 0;
          goto LABEL_8;
        }
      }
    }
LABEL_7:
    v8 = 0;
LABEL_8:
    sub_130C74(a4);
    sub_130B5C(v9);
    return v8;
  }
  sub_B8930(*(int ***)(a2 + 16), 0);
  *(_DWORD *)(a2 + 20) = 0;
  return 1;
}
