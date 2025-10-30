int __fastcall sub_1DEF2C(int **a1, const char *a2, int a3)
{
  int v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  _BYTE *v9; // r0
  _DWORD *v10; // r0
  int v11; // r0
  _DWORD *v12; // r0
  int v14; // r7
  const char *v15; // r0
  _DWORD *v16; // r0
  unsigned int v17; // r8
  int v18; // r9
  unsigned __int8 *v19; // r7
  _DWORD *v20; // r0
  unsigned __int8 *v21; // r4
  _DWORD *v22; // r0
  int v23; // t1
  unsigned int v24; // r4
  unsigned int v25; // r1
  unsigned int v26; // r7
  int v27; // r5
  char *v28; // r6
  char *v29; // r0

  v6 = **a1;
  v7 = (_DWORD *)sub_242FC8(a1);
  v8 = sub_2594B0(*v7, "%s ", a2);
  if ( a3 < 0 )
  {
    v16 = (_DWORD *)sub_242FC8(v8);
    v11 = sub_2594B0(*v16, "(%d)", a3);
  }
  else
  {
    v9 = (_BYTE *)((int (__fastcall *)(int))loc_166E9C)(v6);
    if ( a3 < (int)v9
      && (v9 = (_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v6, a3)) != 0
      && (v9 = (_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(v6, a3), *v9) )
    {
      v14 = *(_DWORD *)sub_242FC8(v9);
      v15 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v6, a3);
      sub_2594B0(v14, "(%s)", v15);
    }
    else
    {
      v10 = (_DWORD *)sub_242FC8(v9);
      sub_2594B0(*v10, "(%d)", a3);
    }
    v11 = ((int (__fastcall *)(int))loc_166E9C)(v6);
    if ( a3 < v11 )
    {
      v17 = ((int (__fastcall *)(int))loc_165BB8)(v6);
      v18 = ((int (__fastcall *)(int, int))loc_1DD420)(v6, a3);
      v19 = (unsigned __int8 *)a1[2] + *(_DWORD *)((*a1)[4] + 4 * a3);
      v20 = (_DWORD *)sub_242FC8(v18);
      v11 = sub_2594B0(*v20, " = ");
      if ( v18 > 0 )
      {
        v21 = v19 - 1;
        do
        {
          v22 = (_DWORD *)sub_242FC8(v11);
          v23 = *++v21;
          v11 = sub_2594B0(*v22, "%02x", v23);
        }
        while ( v21 != &v19[v18 - 1] );
      }
      if ( (unsigned int)v18 <= 8 )
      {
        v24 = sub_15C250(v19, v18, v17);
        v26 = v25;
        v27 = *(_DWORD *)sub_242FC8(v24);
        v28 = sub_98E84(v24);
        v29 = sub_988AC(__SPAIR64__(v26, v24));
        v11 = sub_2594B0(v27, " %s %s", v28, v29);
      }
    }
  }
  v12 = (_DWORD *)sub_242FC8(v11);
  return sub_2594B0(*v12, (const char *)&word_356638);
}
