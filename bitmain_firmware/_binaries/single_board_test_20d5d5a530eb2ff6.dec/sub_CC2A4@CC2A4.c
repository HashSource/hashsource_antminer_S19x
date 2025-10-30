int __fastcall sub_CC2A4(_DWORD *a1, _DWORD *a2, int a3)
{
  int (__fastcall *v6)(_DWORD *, int *, int *, int); // r10
  int *v7; // r8
  int *v8; // r11
  int v9; // r9
  int v10; // r6
  int v12; // r0
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]
  int (__fastcall *v15)(_DWORD *, int *, int *, int *, int); // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  if ( sub_C6CD4(a1, a2) )
    return 1;
  v6 = *(int (__fastcall **)(_DWORD *, int *, int *, int))(*a1 + 140);
  v14 = a1[10];
  v15 = *(int (__fastcall **)(_DWORD *, int *, int *, int *, int))(*a1 + 136);
  if ( a3 )
  {
    v13 = 0;
LABEL_4:
    sub_130BC0(a3);
    v7 = (int *)sub_130CCC(a3);
    v8 = (int *)sub_130CCC(a3);
    v16 = sub_130CCC(a3);
    v9 = sub_130CCC(a3);
    if ( !v9 || !v6(a1, v7, (int *)a2[2], a3) )
      goto LABEL_8;
    if ( a2[5] )
    {
      if ( !sub_133AF8(v7, v7, a1[17], v14) || !v15(a1, v7, v7, (int *)a2[2], a3) || !sub_133AF8(v7, v7, a1[18], v14) )
        goto LABEL_8;
    }
    else
    {
      if ( !v6(a1, v8, (int *)a2[4], a3) || !v6(a1, (int *)v16, v8, a3) || !v15(a1, (int *)v9, (int *)v16, v8, a3) )
        goto LABEL_8;
      if ( a1[19] )
      {
        if ( !sub_133FE4(v8, v16, v14) || !sub_133AF8(v8, v8, v16, v14) || !sub_133F18(v7, v7, v8, v14) )
          goto LABEL_8;
      }
      else if ( !v15(a1, v8, (int *)v16, (int *)a1[17], a3) || !sub_133AF8(v7, v7, v8, v14) )
      {
        goto LABEL_8;
      }
      if ( !v15(a1, v7, v7, (int *)a2[2], a3)
        || !v15(a1, v8, (int *)a1[18], (int *)v9, a3)
        || !sub_133AF8(v7, v7, v8, v14) )
      {
LABEL_8:
        v10 = -1;
LABEL_9:
        sub_130C74(a3);
        sub_130B5C(v13);
        return v10;
      }
    }
    if ( v6(a1, v8, (int *)a2[3], a3) )
    {
      v10 = sub_B82F8(v8, v7) == 0;
      goto LABEL_9;
    }
    goto LABEL_8;
  }
  v12 = sub_130B08(0);
  a3 = v12;
  if ( v12 )
  {
    v13 = v12;
    goto LABEL_4;
  }
  return -1;
}
