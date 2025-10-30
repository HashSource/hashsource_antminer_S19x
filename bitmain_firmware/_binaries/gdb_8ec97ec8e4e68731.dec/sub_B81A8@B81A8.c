int __fastcall sub_B81A8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r12
  int v8; // r5
  int v9; // r0
  int v10; // r4
  int v11; // r0
  int result; // r0
  _DWORD *v13; // r0
  int v14; // r5
  char *v15; // r6
  int v16; // r0
  int v17; // r5
  char *v18; // r6
  int v19; // r0
  int varg_r3a; // [sp+2Ch] [bp+1Ch]

  v7 = a7;
  v8 = a4;
  if ( a4 )
  {
    if ( a7 )
      goto LABEL_3;
    goto LABEL_14;
  }
  v8 = *(_DWORD *)(dword_487D2C + 8);
  if ( !v8 )
    v8 = dword_47ACB8;
  if ( !a7 )
LABEL_14:
    v7 = sub_235FD0();
LABEL_3:
  varg_r3a = v8;
  v9 = sub_16EFFC(a1, a2, a3, v8, a5, a6, v7);
  v10 = v9;
  if ( v9 )
  {
    v11 = sub_16F654(v9);
    if ( v10 == v11 )
    {
      if ( dword_4877EC )
      {
        v14 = *(_DWORD *)sub_242FC8(v11);
        v15 = sub_98EEC(v10);
        v16 = ((int (__fastcall *)(int))loc_163EB0)(v10);
        sub_2594B0(v14, "gdbarch_update_p: Architecture %s (%s) unchanged\n", v15, *(const char **)(v16 + 24));
      }
      return 1;
    }
    else
    {
      if ( dword_4877EC )
      {
        v17 = *(_DWORD *)sub_242FC8(v11);
        v18 = sub_98EEC(v10);
        v19 = ((int (__fastcall *)(int))loc_163EB0)(v10);
        sub_2594B0(v17, "gdbarch_update_p: New architecture %s (%s) selected\n", v18, *(const char **)(v19 + 24));
      }
      ((void (__fastcall *)(int))loc_16F5C8)(v10);
      return 1;
    }
  }
  else
  {
    result = dword_4877EC;
    if ( dword_4877EC )
    {
      v13 = (_DWORD *)sub_242FC8(dword_4877EC);
      sub_2594B0(*v13, "gdbarch_update_p: Architecture not found\n");
      return 0;
    }
  }
  return result;
}
