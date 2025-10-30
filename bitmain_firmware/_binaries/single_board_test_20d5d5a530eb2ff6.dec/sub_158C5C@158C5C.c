bool __fastcall sub_158C5C(_DWORD *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, int ***a5)
{
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r8
  void **v12; // r11
  int ***v13; // r0
  int **v14; // r1
  int *v15; // r8
  int **v16; // r1
  int **v17; // r1
  int *v18; // r10
  int **v19; // r1
  int **v20; // r1
  int **v21; // r1
  int **v22; // r1
  int **v23; // r1
  int **v24; // r9
  _BOOL4 v25; // r0
  _BOOL4 v27; // r8
  int *v28; // [sp+Ch] [bp-18h]
  int *v29; // [sp+10h] [bp-14h]
  int **v30; // [sp+14h] [bp-10h]
  int **v31; // [sp+18h] [bp-Ch]
  int **v32; // [sp+1Ch] [bp-8h]

  v9 = sub_C6CD4(a1, a3);
  v10 = a4;
  if ( v9 )
    return sub_C6594(a2, v10) != 0;
  v11 = sub_C6CD4(a1, a4);
  if ( v11 )
  {
    v10 = a3;
    return sub_C6594(a2, v10) != 0;
  }
  v12 = 0;
  v13 = a5;
  if ( !a5 )
  {
    v13 = (int ***)sub_130B08();
    a5 = v13;
    if ( v13 )
    {
      v12 = (void **)v13;
      goto LABEL_4;
    }
    return v11;
  }
LABEL_4:
  sub_130BC0((int)v13);
  v15 = (int *)sub_130CCC(a5, v14);
  v28 = (int *)sub_130CCC(a5, v16);
  v18 = (int *)sub_130CCC(a5, v17);
  v29 = (int *)sub_130CCC(a5, v19);
  v31 = sub_130CCC(a5, v20);
  v32 = sub_130CCC(a5, v21);
  v30 = sub_130CCC(a5, v22);
  v24 = sub_130CCC(a5, v23);
  if ( !v24 )
    goto LABEL_31;
  if ( a3[5] )
  {
    if ( !sub_B89E4((int)v15, a3[2]) || !sub_B89E4((int)v28, a3[3]) )
      goto LABEL_31;
  }
  else if ( !sub_C6D34(a1, a3, (int)v15, (int)v28, (int)a5) )
  {
    goto LABEL_31;
  }
  if ( a4[5] )
  {
    if ( !sub_B89E4((int)v18, a4[2]) || !sub_B89E4((int)v29, a4[3]) )
      goto LABEL_31;
  }
  else if ( !sub_C6D34(a1, a4, (int)v18, (int)v29, (int)a5) )
  {
    goto LABEL_31;
  }
  if ( sub_B82F8(v15, v18) )
  {
    if ( !sub_174BC8(v24, v15, v18)
      || !sub_174BC8(v30, v28, v29)
      || !(*(int (__fastcall **)(_DWORD *, int **, int **, int **, int ***))(*a1 + 144))(a1, v30, v30, v24, a5)
      || !(*(int (__fastcall **)(_DWORD *, int **, int **, int ***))(*a1 + 140))(a1, v31, v30, a5)
      || !sub_174BC8(v31, v31, a1[17])
      || !sub_174BC8(v31, v31, v30)
      || !sub_174BC8(v31, v31, v24) )
    {
      goto LABEL_31;
    }
  }
  else
  {
    if ( sub_B82F8(v28, v29) || sub_B85B0((int)v18) )
    {
      v25 = sub_C6A30((int)a1, a2) != 0;
      goto LABEL_32;
    }
    if ( !(*(int (__fastcall **)(_DWORD *, int **, int *, int *, int ***))(*a1 + 144))(a1, v30, v29, v18, a5)
      || !sub_174BC8(v30, v30, v18)
      || !(*(int (__fastcall **)(_DWORD *, int **, int **, int ***))(*a1 + 140))(a1, v31, v30, a5)
      || !sub_174BC8(v31, v31, v30)
      || !sub_174BC8(v31, v31, a1[17]) )
    {
      goto LABEL_31;
    }
  }
  if ( !sub_174BC8(v32, v18, v31)
    || !(*(int (__fastcall **)(_DWORD *, int **, int **, int **, int ***))(*a1 + 136))(a1, v32, v32, v30, a5)
    || !sub_174BC8(v32, v32, v31)
    || !sub_174BC8(v32, v32, v29) )
  {
LABEL_31:
    v25 = 0;
    goto LABEL_32;
  }
  v25 = sub_C6E54(a1, a2) != 0;
LABEL_32:
  v27 = v25;
  sub_130C74(a5);
  sub_130B5C(v12);
  return v27;
}
