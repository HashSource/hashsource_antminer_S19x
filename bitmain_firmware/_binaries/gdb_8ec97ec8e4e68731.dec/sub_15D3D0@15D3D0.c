int *__fastcall sub_15D3D0(_DWORD *a1)
{
  char *v2; // r0
  int *v3; // r4
  int v4; // r1
  bool v5; // zf
  int v6; // r2
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r0
  int *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  _DWORD *v14; // r7
  _DWORD *v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0

  v2 = sub_15D27C((char *)0x60);
  v3 = (int *)v2;
  v4 = a1[1];
  v5 = dword_487724 == 0;
  v6 = a1[2];
  v7 = *a1 + 1;
  *(_DWORD *)v2 = v7;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v6;
  a1[21] = v2;
  *((_DWORD *)v2 + 19) = a1;
  if ( !v5 )
  {
    v8 = (_DWORD *)sub_242FC8(v2);
    v9 = sub_2594B0(*v8, "-> ");
    v10 = (int *)sub_242FC8(v9);
    v11 = sub_15C998(*v10, v3);
    v12 = (_DWORD *)sub_242FC8(v11);
    sub_2594B0(*v12, " }\n");
    v7 = *v3;
  }
  if ( !v7 )
    return v3;
  v14 = sub_9253C((int)dword_15C550, (int)a1);
  ((void (__fastcall *)(int *))loc_15CE14)(v3);
  if ( !((int (__fastcall *)(int *))loc_15C614)(v3) )
  {
    if ( dword_487724 )
    {
      v15 = (_DWORD *)sub_242FC8(0);
      v16 = sub_2594B0(*v15, "-> ");
      v17 = (_DWORD *)sub_242FC8(v16);
      v18 = sub_2594B0(*v17, "<NULL frame>");
      v19 = (_DWORD *)sub_242FC8(v18);
      sub_2594B0(*v19, " // this frame has same ID }\n");
    }
    a1[22] = 5;
    v3[19] = 0;
    v3 = 0;
    a1[21] = 0;
  }
  sub_92640(v14);
  return v3;
}
