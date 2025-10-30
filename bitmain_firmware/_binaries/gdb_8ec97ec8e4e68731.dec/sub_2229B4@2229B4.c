int __fastcall sub_2229B4(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // r4
  _DWORD *v8; // r12
  int v10; // r7
  int v12; // r6
  int v13; // r5
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r6
  int v23; // r1
  int v24; // r2
  int v25; // r3
  bool v26; // cc
  _DWORD *v27; // r7
  int result; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // [sp+0h] [bp-1Ch]
  int v34; // [sp+8h] [bp-14h] BYREF
  int v35; // [sp+Ch] [bp-10h]
  int v36; // [sp+10h] [bp-Ch]
  int v37; // [sp+14h] [bp-8h]
  int varg_r3; // [sp+44h] [bp+28h]

  v10 = (a3 - 1) / 2;
  v32 = a3 & 1;
  if ( a2 >= v10 )
  {
    if ( (a3 & 1) != 0 )
    {
      v7 = (_DWORD *)(a1 + 16 * a2);
      v34 = varg_r3;
      v35 = a5;
      v36 = a6;
      v37 = a7;
      goto LABEL_19;
    }
    v13 = a2;
    goto LABEL_9;
  }
  v12 = a2;
  do
  {
    v13 = 2 * (v12 + 1) - 1;
    v7 = (_DWORD *)(a1 + 16 * v13);
    v14 = sub_21EFDC((_DWORD *)(a1 + 32 * (v12 + 1)), v7);
    v8 = (_DWORD *)(a1 + 16 * v12);
    if ( v14 >= 0 )
      v7 = (_DWORD *)(a1 + 32 * (v12 + 1));
    v15 = v7[1];
    v16 = v7[2];
    v17 = v7[3];
    if ( v14 >= 0 )
      v13 = 2 * (v12 + 1);
    v12 = v13;
    *v8 = *v7;
    v8[1] = v15;
    v8[2] = v16;
    v8[3] = v17;
  }
  while ( v13 < v10 );
  if ( !v32 )
  {
LABEL_9:
    v18 = a3;
    if ( v13 == (a3 - 2) / 2 )
    {
      v18 = 2 * v13;
      v8 = (_DWORD *)(a1 + 16 * v13);
    }
    else
    {
      v7 = (_DWORD *)(a1 + 16 * v13);
    }
    if ( v13 == (a3 - 2) / 2 )
    {
      v13 = v18 + 1;
      v7 = (_DWORD *)(a1 + 16 * (v18 + 1));
      v19 = v7[1];
      v20 = v7[2];
      v21 = v7[3];
      *v8 = *v7;
      v8[1] = v19;
      v8[2] = v20;
      v8[3] = v21;
    }
  }
  v22 = (v13 - 1) / 2;
  v34 = varg_r3;
  v35 = a5;
  v36 = a6;
  v37 = a7;
  if ( v13 > a2 )
  {
    while ( 1 )
    {
      v27 = (_DWORD *)(a1 + 16 * v22);
      v7 = (_DWORD *)(a1 + 16 * v13);
      v13 = v22;
      if ( sub_21EFDC(v27, &v34) >= 0 )
        break;
      v23 = v27[1];
      v24 = v27[2];
      v25 = v27[3];
      v26 = a2 < v22;
      v22 = (v22 - 1) / 2;
      *v7 = *v27;
      v7[1] = v23;
      v7[2] = v24;
      v7[3] = v25;
      if ( !v26 )
      {
        v7 = v27;
        break;
      }
    }
  }
LABEL_19:
  result = v34;
  v29 = v35;
  v30 = v36;
  v31 = v37;
  *v7 = v34;
  v7[1] = v29;
  v7[2] = v30;
  v7[3] = v31;
  return result;
}
