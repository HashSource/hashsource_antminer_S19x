int __fastcall sub_AF988(int a1, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // r4
  int v7; // r9
  int v9; // r11
  int v10; // r6
  _BOOL4 v11; // r0
  _DWORD *v12; // r12
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r5
  int v17; // r1
  bool v18; // cc
  _DWORD *v19; // r10
  int result; // r0
  int v21; // r1
  int v22; // [sp+0h] [bp-14h]
  _DWORD *v23; // [sp+4h] [bp-10h]
  int v24; // [sp+8h] [bp-Ch] BYREF
  int v25; // [sp+Ch] [bp-8h]
  int varg_r3; // [sp+3Ch] [bp+28h]

  v7 = ((int)a3 - 1) / 2;
  v23 = a3;
  v22 = (unsigned __int8)a3 & 1;
  if ( a2 >= v7 )
  {
    if ( ((unsigned __int8)a3 & 1) != 0 )
    {
      v5 = (_DWORD *)(a1 + 8 * a2);
      v24 = varg_r3;
      v25 = a5;
      goto LABEL_17;
    }
    v10 = a2;
    goto LABEL_7;
  }
  v9 = a2;
  do
  {
    v10 = 2 * (v9 + 1) - 1;
    v5 = (_DWORD *)(a1 + 8 * v10);
    v11 = sub_A3BBC(a1 + 16 * (v9 + 1), (int)v5);
    v12 = (_DWORD *)(a1 + 8 * v9);
    if ( !v11 )
    {
      v5 = (_DWORD *)(a1 + 16 * (v9 + 1));
      v10 = 2 * (v9 + 1);
    }
    v13 = v5[1];
    v9 = v10;
    *v12 = *v5;
    v12[1] = v13;
  }
  while ( v10 < v7 );
  if ( !v22 )
  {
LABEL_7:
    v14 = (int)v23;
    if ( v10 == ((int)v23 - 2) / 2 )
    {
      v14 = 2 * v10;
      a3 = (_DWORD *)(a1 + 8 * v10);
    }
    else
    {
      v5 = (_DWORD *)(a1 + 8 * v10);
    }
    if ( v10 == ((int)v23 - 2) / 2 )
    {
      v10 = v14 + 1;
      v5 = (_DWORD *)(a1 + 8 * (v14 + 1));
      v15 = v5[1];
      *a3 = *v5;
      a3[1] = v15;
    }
  }
  v16 = (v10 - 1) / 2;
  v24 = varg_r3;
  v25 = a5;
  if ( v10 > a2 )
  {
    while ( 1 )
    {
      v19 = (_DWORD *)(a1 + 8 * v16);
      v5 = (_DWORD *)(a1 + 8 * v10);
      v10 = v16;
      if ( !sub_A3BBC((int)v19, (int)&v24) )
        break;
      v17 = v19[1];
      v18 = a2 < v16;
      v16 = (v16 - 1) / 2;
      *v5 = *v19;
      v5[1] = v17;
      if ( !v18 )
      {
        v5 = v19;
        break;
      }
    }
  }
LABEL_17:
  result = v24;
  v21 = v25;
  *v5 = v24;
  v5[1] = v21;
  return result;
}
