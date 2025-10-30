int __fastcall sub_1CC624(int a1, int a2, int a3, int a4, int a5, int (__fastcall *a6)(int, int *))
{
  int *v6; // r4
  int v7; // r10
  int v8; // r9
  int v10; // r11
  int v11; // r5
  int v12; // r0
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r6
  int v17; // r1
  bool v18; // cc
  int *v19; // r11
  int result; // r0
  int v21; // r1
  int v22; // [sp+4h] [bp-18h]
  int v24; // [sp+Ch] [bp-10h]
  int v25; // [sp+10h] [bp-Ch] BYREF
  int v26; // [sp+14h] [bp-8h]
  int varg_r3; // [sp+44h] [bp+28h]

  v7 = a2;
  v8 = (a3 - 1) / 2;
  v24 = a3;
  v22 = a3 & 1;
  if ( a2 >= v8 )
  {
    if ( (a3 & 1) != 0 )
    {
      v6 = (int *)(a1 + 8 * a2);
      v25 = varg_r3;
      v26 = a5;
      goto LABEL_17;
    }
    v11 = a2;
    goto LABEL_7;
  }
  v10 = a2;
  do
  {
    v11 = 2 * (v10 + 1) - 1;
    v6 = (int *)(a1 + 8 * v11);
    v12 = a6(a1 + 16 * (v10 + 1), v6);
    a3 = a1 + 8 * v10;
    if ( !v12 )
    {
      v6 = (int *)(a1 + 16 * (v10 + 1));
      v11 = 2 * (v10 + 1);
    }
    v13 = v6[1];
    v10 = v11;
    *(_DWORD *)a3 = *v6;
    *(_DWORD *)(a3 + 4) = v13;
  }
  while ( v11 < v8 );
  v7 = a2;
  if ( !v22 )
  {
LABEL_7:
    v14 = v24;
    if ( v11 == (v24 - 2) / 2 )
    {
      v14 = 2 * v11;
      a3 = a1 + 8 * v11;
    }
    else
    {
      v6 = (int *)(a1 + 8 * v11);
    }
    if ( v11 == (v24 - 2) / 2 )
    {
      v11 = v14 + 1;
      v6 = (int *)(a1 + 8 * (v14 + 1));
      v15 = v6[1];
      *(_DWORD *)a3 = *v6;
      *(_DWORD *)(a3 + 4) = v15;
    }
  }
  v16 = (v11 - 1) / 2;
  v25 = varg_r3;
  v26 = a5;
  if ( v11 > v7 )
  {
    while ( 1 )
    {
      v19 = (int *)(a1 + 8 * v16);
      v6 = (int *)(a1 + 8 * v11);
      v11 = v16;
      if ( !a6((int)v19, &v25) )
        break;
      v17 = v19[1];
      v18 = v7 < v16;
      v16 = (v16 - 1) / 2;
      *v6 = *v19;
      v6[1] = v17;
      if ( !v18 )
      {
        v6 = v19;
        break;
      }
    }
  }
LABEL_17:
  result = v25;
  v21 = v26;
  *v6 = v25;
  v6[1] = v21;
  return result;
}
