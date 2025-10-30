int __fastcall sub_11A494(int a1)
{
  int v1; // r5
  int v3; // r6
  int v4; // r8
  int v5; // r0
  int v6; // r4
  _DWORD *v7; // r0
  int *v8; // r3
  int v9; // r4
  int v10; // r10
  int *v11; // r3
  int v12; // r7
  int v13; // r11
  int v14; // r0
  int v16; // r0
  int v17; // r0

  v1 = 0;
  v3 = 0;
  v4 = 0;
  while ( v1 < sub_10C010(*(_DWORD *)(a1 + 4)) - 1 )
  {
    v5 = sub_10C01C(*(_DWORD **)(a1 + 4), v1++);
    v6 = v5;
    v7 = (_DWORD *)sub_10C01C(*(_DWORD **)(a1 + 4), v1);
    if ( !v6 )
      goto LABEL_19;
    if ( *(_DWORD *)v6 )
    {
      if ( *(_DWORD *)v6 != 1 )
        goto LABEL_18;
      v8 = *(int **)(v6 + 4);
      v9 = *v8;
      v10 = v8[1];
      if ( !v7 )
      {
LABEL_21:
        v6 = (int)v7;
        goto LABEL_19;
      }
    }
    else
    {
      v9 = *(_DWORD *)(v6 + 4);
      v10 = v9;
      if ( !v7 )
        goto LABEL_21;
    }
    if ( *v7 )
    {
      if ( *v7 != 1 )
        goto LABEL_18;
      v11 = (int *)v7[1];
      v12 = *v11;
      v13 = v11[1];
    }
    else
    {
      v12 = v7[1];
      v13 = v12;
    }
    if ( sub_126528(v9, v12) >= 0 || sub_126528(v9, v10) > 0 || sub_126528(v12, v13) > 0 )
    {
LABEL_18:
      v6 = 0;
      goto LABEL_19;
    }
    if ( !v3 && (v3 = sub_B822C()) == 0 || !sub_12700C(v10, v3) || !sub_BAD28(v3, 1u) )
    {
      v6 = 0;
      sub_D0048(34, 162, 65, (int)"crypto/x509v3/v3_asid.c", 304);
      goto LABEL_19;
    }
    v14 = sub_126F3C(v3, v4);
    v6 = v14;
    if ( !v14 )
    {
      sub_D0048(34, 162, 65, (int)"crypto/x509v3/v3_asid.c", 312);
      goto LABEL_19;
    }
    v4 = v14;
    if ( sub_126528(v14, v12) >= 0 )
      goto LABEL_18;
  }
  v16 = sub_10C010(*(_DWORD *)(a1 + 4));
  v17 = sub_10C01C(*(_DWORD **)(a1 + 4), v16 - 1);
  v6 = !v17 || *(_DWORD *)v17 != 1 || sub_126528(**(_DWORD **)(v17 + 4), *(_DWORD *)(*(_DWORD *)(v17 + 4) + 4)) <= 0;
LABEL_19:
  ASN1_INTEGER_free(v4);
  sub_B895C(v3);
  return v6;
}
