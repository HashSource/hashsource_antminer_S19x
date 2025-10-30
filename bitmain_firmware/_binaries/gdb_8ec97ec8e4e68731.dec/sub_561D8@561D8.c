int *__fastcall sub_561D8(int a1, int *a2, int a3)
{
  int *v5; // r0
  int *v6; // r0
  int *v7; // r0
  int v8; // r2
  int *v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int *v14; // r0
  int *v15; // r0
  int *result; // r0
  int v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int v20; // lr
  int v21; // r12
  int v22; // [sp+4h] [bp-4h] BYREF

  if ( *a2 )
  {
    v5 = (int *)sub_242F8C(a1);
    dword_4747D8 = *v5;
    v6 = (int *)sub_242FB4(v5);
    dword_4747DC = *v6;
    v7 = (int *)sub_242FC8(v6);
    v8 = *v7;
    dword_4747E4 = dword_487A6C;
    dword_4747E0 = v8;
    dword_4747E8 = dword_487A38;
    v9 = (int *)sub_242F8C(v7);
    v10 = *a2;
    v11 = *v9;
    *a2 = 0;
    v22 = v10;
    v12 = sub_56E78(v11, &v22, a3);
    v13 = v22;
    if ( v22 )
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
    v14 = (int *)sub_242F8C(v13);
    *v14 = v12;
    v15 = (int *)sub_242FC8(v14);
    *v15 = v12;
    result = (int *)sub_242FB4(v15);
    *result = v12;
    dword_487A6C = v12;
    dword_487A38 = v12;
  }
  else
  {
    v17 = *(_DWORD *)sub_242F8C(a1);
    if ( v17 )
      v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
    v18 = (_DWORD *)sub_242F8C(v17);
    *v18 = dword_4747D8;
    v19 = (_DWORD *)sub_242FB4(v18);
    *v19 = dword_4747DC;
    result = (int *)sub_242FC8(v19);
    v20 = dword_4747E4;
    v21 = dword_4747E8;
    *result = dword_4747E0;
    dword_487A6C = v20;
    dword_487A38 = v21;
    dword_4747D8 = 0;
    dword_4747DC = 0;
    dword_4747E0 = 0;
    dword_4747E4 = 0;
    dword_4747E8 = 0;
  }
  return result;
}
