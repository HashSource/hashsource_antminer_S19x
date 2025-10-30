int __fastcall sub_17D408(int a1, int **a2)
{
  _DWORD *v4; // r0
  int v5; // r5
  int v6; // r7
  int v7; // r3
  int v8; // r4
  int *v9; // r0
  char *v11; // r2
  unsigned int v12; // r0
  int v13; // r4
  int v14; // r0
  int v15; // r5
  int v16; // r0

  v4 = (_DWORD *)sub_26BC70(a1);
  v5 = sub_171258(v4);
  v6 = sub_170040(v5);
  v7 = **(char **)(v5 + 24);
  if ( (v7 & 0xFFFFFFF7) == 7 )
  {
    v8 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  }
  else
  {
    if ( v7 != 1 )
      goto LABEL_3;
    v13 = sub_26EBA8(a1);
    v5 = sub_171258(*(_DWORD **)(*(_DWORD *)(v5 + 24) + 20));
    v7 = **(char **)(v5 + 24);
    if ( (v7 & 0xFFFFFFF7) != 7 )
      goto LABEL_3;
    v8 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v6, v13, &dword_4899A0);
  }
  v11 = *(char **)(v5 + 24);
  v7 = *v11;
  if ( (v7 & 0xFFFFFFF7) != 7 )
  {
LABEL_3:
    if ( v7 != 8 )
      sub_946E0("Invalid data type for function to be called.");
    if ( *(_DWORD *)(v5 + 20) == 1 )
    {
      v16 = sub_2616BC(a1);
      v8 = sub_26EBA8(v16);
      v9 = 0;
    }
    else if ( *(_DWORD *)nullsub_31(a1) != 1
           || (v14 = sub_2616BC(a1),
               v15 = sub_26EBA8(v14),
               v8 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v6, v15, &dword_4899A0),
               v15 == v8) )
    {
      v8 = sub_26EB1C(a1);
      v9 = 0;
    }
    else
    {
      v9 = 0;
    }
    goto LABEL_7;
  }
  if ( (v11[2] & 4) != 0 )
  {
    v12 = (*(int (__fastcall **)(int, int))off_46D9C8)(v6, v8);
    v8 = v12;
    if ( !a2 )
      return ((int (__fastcall *)(int))loc_1696D8)(v6) + v8;
    v9 = sub_C3460(v12);
    if ( v9 )
    {
      if ( v8 == *(_DWORD *)v9[2] )
      {
        v9 = (int *)v9[6];
        if ( v9 )
          v9 = *(int **)(v9[6] + 20);
      }
      else
      {
        v9 = 0;
      }
    }
    goto LABEL_8;
  }
  v9 = (int *)*((_DWORD *)v11 + 5);
LABEL_7:
  if ( a2 )
LABEL_8:
    *a2 = v9;
  return ((int (__fastcall *)(int))loc_1696D8)(v6) + v8;
}
