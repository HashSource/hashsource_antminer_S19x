int __fastcall sub_250784(int a1, int a2, int a3, int a4, int a5, int a6, int (__fastcall *a7)(int, int))
{
  int v7; // r4
  int v8; // r10
  int v9; // r9
  int v11; // r11
  int v12; // r5
  int v13; // r0
  int v14; // r1
  _DWORD *v15; // r3
  int v16; // r3
  bool v17; // zf
  int v18; // r1
  int v19; // r2
  int v20; // r11
  int v21; // r1
  int v22; // r2
  bool v23; // cc
  _DWORD *v24; // r6
  int result; // r0
  int v26; // r1
  int v27; // r2
  int v28; // [sp+4h] [bp-20h]
  int v30; // [sp+Ch] [bp-18h]
  int v31; // [sp+14h] [bp-10h] BYREF
  int v32; // [sp+18h] [bp-Ch]
  int v33; // [sp+1Ch] [bp-8h]
  int varg_r3; // [sp+4Ch] [bp+28h]

  v8 = a2;
  v9 = (a3 - 1) / 2;
  v30 = a3;
  v28 = a3 & 1;
  if ( a2 >= v9 )
  {
    if ( (a3 & 1) != 0 )
    {
      v7 = a1 + 12 * a2;
      v31 = varg_r3;
      v32 = a5;
      v33 = a6;
      goto LABEL_22;
    }
    v12 = a2;
    goto LABEL_9;
  }
  v11 = a2;
  do
  {
    v12 = 2 * (v11 + 1) - 1;
    v7 = a1 + 12 * v12;
    v13 = a7(a1 + 24 * (v11 + 1), v7);
    if ( !v13 )
      v7 = a1 + 24 * (v11 + 1);
    v14 = *(_DWORD *)(v7 + 4);
    a3 = *(_DWORD *)(v7 + 8);
    if ( !v13 )
      v12 = 2 * (v11 + 1);
    v15 = (_DWORD *)(a1 + 12 * v11);
    v11 = v12;
    *v15 = *(_DWORD *)v7;
    v15[1] = v14;
    v15[2] = a3;
  }
  while ( v12 < v9 );
  v8 = a2;
  if ( !v28 )
  {
LABEL_9:
    v16 = v30;
    v17 = v12 == (v30 - 2) / 2;
    if ( v12 == (v30 - 2) / 2 )
    {
      a3 = 2 * v12;
      v16 = 3 * v12;
    }
    else
    {
      v7 = 3 * v12;
    }
    if ( v12 == (v30 - 2) / 2 )
    {
      v12 = a3 + 1;
      v16 = a1 + 4 * v16;
      v7 = 3 * (a3 + 1);
    }
    else
    {
      v7 = a1 + 4 * v7;
    }
    if ( v17 )
    {
      v7 = a1 + 4 * v7;
      v18 = *(_DWORD *)(v7 + 4);
      v19 = *(_DWORD *)(v7 + 8);
      *(_DWORD *)v16 = *(_DWORD *)v7;
      *(_DWORD *)(v16 + 4) = v18;
      *(_DWORD *)(v16 + 8) = v19;
    }
  }
  v20 = (v12 - 1) / 2;
  v31 = varg_r3;
  v32 = a5;
  v33 = a6;
  if ( v12 > v8 )
  {
    while ( 1 )
    {
      v24 = (_DWORD *)(a1 + 12 * v20);
      v7 = a1 + 12 * v12;
      if ( !a7((int)v24, (int)&v31) )
        break;
      v21 = v24[1];
      v22 = v24[2];
      v23 = v8 < v20;
      v12 = v20;
      v20 = (v20 - 1) / 2;
      *(_DWORD *)v7 = *v24;
      *(_DWORD *)(v7 + 4) = v21;
      *(_DWORD *)(v7 + 8) = v22;
      if ( !v23 )
      {
        v7 = (int)v24;
        break;
      }
    }
  }
LABEL_22:
  result = v31;
  v26 = v32;
  v27 = v33;
  *(_DWORD *)v7 = v31;
  *(_DWORD *)(v7 + 4) = v26;
  *(_DWORD *)(v7 + 8) = v27;
  return result;
}
