int __fastcall sub_125E8C(int result, int a2, int a3, int a4, int a5, int a6, int (__fastcall **a7)(int, int))
{
  int v7; // kr00_4
  int v8; // r7
  int (__fastcall **v9)(int, int); // r11
  int v10; // r5
  int v11; // r6
  int *v12; // r4
  int v13; // r0
  int v14; // r1
  int *v15; // r3
  int *v16; // r2
  int v17; // r4
  int v18; // r9
  int v19; // r1
  bool v20; // cc
  int *v21; // r5
  int v22; // r6
  int v23; // r0
  int *v24; // r12
  int *v25; // r12
  int v26; // r1
  int v27; // [sp+4h] [bp-18h]
  int varg_r3; // [sp+44h] [bp+28h]

  v7 = a3 - 1;
  v8 = result;
  v9 = a7;
  if ( a2 >= (a3 - 1) / 2 )
  {
    v11 = a2;
  }
  else
  {
    v10 = a2;
    do
    {
      v11 = 2 * (v10 + 1) - 1;
      v12 = (int *)(v8 + 8 * v11);
      v27 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a6 + 4))(a6, *(_DWORD *)(v8 + 16 * (v10 + 1) + 4));
      v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a6 + 4))(a6, v12[1]);
      if ( (*a7)(v27 + *(_DWORD *)(v8 + 16 * (v10 + 1)), v13 + *v12) >= 0 )
      {
        v12 = (int *)(v8 + 16 * (v10 + 1));
        v11 = 2 * (v10 + 1);
      }
      result = *v12;
      v14 = v12[1];
      v15 = (int *)(v8 + 8 * v10);
      v10 = v11;
      *v15 = *v12;
      v15[1] = v14;
    }
    while ( v11 < v7 / 2 );
    v9 = a7;
  }
  if ( (a3 & 1) == 0 && v11 == (a3 - 2) / 2 )
  {
    v25 = (int *)(v8 + 8 * v11);
    v11 = 2 * v11 + 1;
    v16 = (int *)(v8 + 8 * v11);
    result = *v16;
    v26 = v16[1];
    *v25 = *v16;
    v25[1] = v26;
  }
  else
  {
    v16 = (int *)(v8 + 8 * v11);
  }
  v17 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    v18 = v11;
    while ( 1 )
    {
      v21 = (int *)(v8 + 8 * v17);
      v22 = (*(int (__fastcall **)(int, int, int *))(*(_DWORD *)a6 + 4))(a6, v21[1], v16);
      v23 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a6 + 4))(a6, a5);
      result = (*v9)(v22 + *v21, v23 + varg_r3);
      v24 = (int *)(v8 + 8 * v18);
      if ( result >= 0 )
        break;
      v16 = (int *)a2;
      result = *v21;
      v19 = v21[1];
      v18 = v17;
      v20 = a2 < v17;
      v17 = (v17 - 1) / 2;
      *v24 = *v21;
      v24[1] = v19;
      if ( !v20 )
      {
        v16 = v21;
        goto LABEL_16;
      }
    }
    v16 = (int *)(v8 + 8 * v18);
  }
LABEL_16:
  *v16 = varg_r3;
  v16[1] = a5;
  return result;
}
