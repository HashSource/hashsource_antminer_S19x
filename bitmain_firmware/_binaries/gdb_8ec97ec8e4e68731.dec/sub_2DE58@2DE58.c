void __fastcall sub_2DE58(int a1, int a2, _DWORD *a3)
{
  unsigned int v5; // r2
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0
  int v12; // [sp+0h] [bp-1Ch]
  unsigned __int64 v13; // [sp+10h] [bp-Ch] BYREF

  ((void (__fastcall *)(int, int, unsigned __int64 *))loc_1DFAFC)(a2, 15, &v13);
  v5 = a3[52];
  if ( v5 > v13 )
  {
    if ( dword_487978 )
      goto LABEL_6;
  }
  else
  {
    if ( v13 >= v5 + 36 )
    {
      if ( !dword_487978 )
        return;
LABEL_6:
      v6 = (_DWORD *)sub_242FC8(v13);
      v7 = sub_2594B0(*v6, "displaced: PC is apparently %.8lx after SVC step ", (_DWORD)v13);
      v8 = (_DWORD *)sub_242FC8(v7);
      sub_2594B0(*v8, "(outside scratch space)\n");
      return;
    }
    if ( dword_487978 )
    {
      v9 = (_DWORD *)sub_242FC8(v13);
      v10 = sub_2594B0(*v9, "displaced: PC is apparently %.8lx after SVC step ", (_DWORD)v13);
      v11 = (_DWORD *)sub_242FC8(v10);
      sub_2594B0(*v11, "(within scratch space)\n");
    }
    v12 = a3[51] + a3[40];
    sub_25B70(a2, (int)a3, 15, v12, v12, 0, 0);
  }
}
