int __fastcall sub_BF420(int a1, int *a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r5
  int *v7; // r8
  int v8; // r7
  int *v9; // r9
  int *v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r4
  int *v15; // r0
  int v16; // r0
  int v17; // r0

  result = sub_BF328(a1, a2);
  if ( result )
  {
    v5 = sub_130B08();
    v6 = v5;
    if ( !v5 )
      goto LABEL_14;
    sub_130BC0(v5);
    v7 = (int *)sub_130CCC(v6);
    v8 = sub_130CCC(v6);
    if ( !v8 )
      goto LABEL_14;
    if ( *(_DWORD *)(a1 + 36) )
    {
      v9 = *(int **)(a1 + 12);
      v10 = (int *)sub_B81FC();
      if ( sub_B8354(v9, v10) <= 0 || sub_B8354(*(int **)(a1 + 12), *(int **)(a1 + 8)) >= 0 )
        goto LABEL_7;
      if ( !sub_132330(v7, *(_DWORD *)(a1 + 12), *(_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 8), v6) )
        goto LABEL_14;
      if ( !sub_B86D8((int)v7) )
LABEL_7:
        *a2 |= 8u;
      v11 = sub_135748(*(_DWORD *)(a1 + 36), 64, v6, 0);
      if ( v11 < 0 )
        goto LABEL_14;
      if ( !v11 )
        v12 = *a2;
      v13 = *(_DWORD *)(a1 + 8);
      if ( !v11 )
        *a2 = v12 | 0x10;
      if ( !sub_131220(v7, v8, v13, *(_DWORD *)(a1 + 36), v6) )
        goto LABEL_14;
      if ( !sub_B86D8(v8) )
        *a2 |= 0x20u;
      v15 = *(int **)(a1 + 40);
      if ( v15 && sub_B8354(v15, v7) )
        *a2 |= 0x40u;
    }
    v16 = sub_135748(*(_DWORD *)(a1 + 8), 64, v6, 0);
    if ( v16 >= 0 )
    {
      if ( !v16 )
      {
        v14 = 1;
        *a2 |= 1u;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(a1 + 36) )
        goto LABEL_24;
      if ( sub_BA324((int)v7, *(int **)(a1 + 8)) )
      {
        v17 = sub_135748(v7, 64, v6, 0);
        if ( v17 >= 0 )
        {
          if ( !v17 )
          {
            v14 = 1;
            *a2 |= 2u;
            goto LABEL_15;
          }
LABEL_24:
          v14 = 1;
          goto LABEL_15;
        }
      }
    }
LABEL_14:
    v14 = 0;
LABEL_15:
    sub_130C74(v6);
    sub_130B5C(v6);
    return v14;
  }
  return result;
}
