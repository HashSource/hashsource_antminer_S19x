int __fastcall sub_158A40(_DWORD *a1, _DWORD *a2, int ***a3)
{
  int (__fastcall *v6)(_DWORD *, int, int, _DWORD, int ***); // r8
  int (__fastcall *v7)(_DWORD *, int **, _DWORD, int ***); // r9
  void **v8; // r6
  int **v9; // r1
  int **v10; // r11
  int **v11; // r1
  int **v12; // r0
  int v13; // r10
  int v14; // r5
  int ***v16; // r0

  if ( sub_C6CD4(a1, a2) )
    return 1;
  v6 = *(int (__fastcall **)(_DWORD *, int, int, _DWORD, int ***))(*a1 + 136);
  v7 = *(int (__fastcall **)(_DWORD *, int **, _DWORD, int ***))(*a1 + 140);
  if ( !a2[5] )
    return -1;
  v8 = 0;
  if ( a3 )
    goto LABEL_4;
  v16 = (int ***)sub_130B08();
  a3 = v16;
  if ( !v16 )
    return -1;
  v8 = (void **)v16;
LABEL_4:
  sub_130BC0((int)a3);
  v10 = sub_130CCC(a3, v9);
  v12 = sub_130CCC(a3, v11);
  v13 = (int)v12;
  if ( v12
    && sub_174BC8(v12, a2[2], a1[17])
    && v6(a1, v13, v13, a2[2], a3)
    && sub_174BC8(v13, v13, a2[3])
    && v6(a1, v13, v13, a2[2], a3)
    && sub_174BC8(v13, v13, a1[18])
    && v7(a1, v10, a2[3], a3)
    && sub_174BC8(v13, v13, v10) )
  {
    v14 = sub_B85B0(v13);
  }
  else
  {
    v14 = -1;
  }
  sub_130C74(a3);
  sub_130B5C(v8);
  return v14;
}
