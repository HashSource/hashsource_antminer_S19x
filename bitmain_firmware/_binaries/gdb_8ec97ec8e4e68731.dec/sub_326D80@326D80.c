int *__fastcall sub_326D80(int a1, int a2, int a3)
{
  int v6; // r0
  _DWORD *v7; // r3
  int v8; // r7
  int v9; // r5
  int *v10; // r0
  _DWORD *v11; // r2
  int *v12; // r3
  int v13; // r0
  int v15; // r1
  int *v16; // r0
  void (__fastcall *v17)(_DWORD); // r2

  if ( !*(_DWORD *)a1 || (sub_326A24(a1, a2), !*(_DWORD *)a1) )
  {
    v16 = (int *)(*(int (__fastcall **)(int, _DWORD))(a1 + 16))(16, *(_DWORD *)(a1 + 24));
    v11 = *(_DWORD **)a1;
    v12 = v16;
    *v16 = a2;
    v16[1] = a3;
    if ( v11 )
      goto LABEL_10;
    goto LABEL_14;
  }
  v6 = (*(int (__fastcall **)(_DWORD, int))(a1 + 4))(**(_DWORD **)a1, a2);
  v7 = *(_DWORD **)a1;
  v8 = v6;
  v9 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 )
    v9 = 1;
  if ( v6 )
    v9 = 0;
  if ( !v9 )
  {
    v10 = (int *)(*(int (__fastcall **)(int, _DWORD))(a1 + 16))(16, *(_DWORD *)(a1 + 24));
    v11 = *(_DWORD **)a1;
    v12 = v10;
    *v10 = a2;
    v10[1] = a3;
    if ( v11 )
    {
      if ( v8 < 0 )
      {
        v15 = v11[3];
        v10[2] = (int)v11;
        v10[3] = v15;
        v11[3] = 0;
        goto LABEL_11;
      }
LABEL_10:
      v13 = v11[2];
      v12[3] = (int)v11;
      v12[2] = v13;
      v11[2] = 0;
LABEL_11:
      *(_DWORD *)a1 = v12;
      return v12;
    }
LABEL_14:
    v12[3] = 0;
    v12[2] = 0;
    goto LABEL_11;
  }
  v17 = *(void (__fastcall **)(_DWORD))(a1 + 12);
  if ( v17 )
  {
    v17(v7[1]);
    v7 = *(_DWORD **)a1;
  }
  v7[1] = a3;
  return v7;
}
