int __fastcall sub_15932C(_DWORD *a1, _DWORD *a2, _DWORD *a3, unsigned int a4, _DWORD **a5, int *a6, int a7)
{
  _BOOL4 v12; // r10
  int v13; // r3
  int v14; // r4
  _DWORD *v15; // r0
  _BOOL4 v16; // r0
  _DWORD *v17; // r1
  int v18; // r0
  _DWORD *v19; // r3
  int v20; // r2
  _DWORD *v21; // [sp+Ch] [bp-8h]
  int v22; // [sp+38h] [bp+24h]

  if ( a4 > 1 )
    return sub_C7A8C(a1, a2, a3, a4, a5, a6, a7);
  if ( sub_B85B0(a1[2]) )
    return sub_C7A8C(a1, a2, a3, a4, a5, a6, a7);
  v12 = sub_B85B0(a1[3]);
  if ( v12 )
    return sub_C7A8C(a1, a2, a3, a4, a5, a6, a7);
  if ( a3 )
    v13 = ((unsigned __int8)a4 ^ 1) & 1;
  else
    v13 = 0;
  if ( v13 )
  {
    v19 = 0;
    v22 = a7;
    v20 = (int)a3;
    v17 = a2;
    v18 = (int)a1;
    return sub_C74CC(v18, v17, v20, v19, v22);
  }
  if ( a3 )
    v14 = 0;
  else
    v14 = a4 & 1;
  if ( v14 )
  {
    v17 = a2;
    v18 = (int)a1;
    v19 = *a5;
    v20 = *a6;
    v22 = a7;
    return sub_C74CC(v18, v17, v20, v19, v22);
  }
  v15 = sub_C63F4(a1);
  v21 = v15;
  if ( v15 )
  {
    v16 = sub_C74CC((int)a1, v15, (int)a3, 0, a7)
       && sub_C74CC((int)a1, a2, *a6, *a5, a7)
       && sub_C6B60(a1, a2, v21, a2) != 0;
    v12 = v16;
    sub_C6490((int)v21);
  }
  else
  {
    sub_D0048(16, 289, 65, (int)"crypto/ec/ec2_smpl.c", 875);
  }
  return v12;
}
