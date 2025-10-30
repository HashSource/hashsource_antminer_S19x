int __fastcall sub_11A690(_DWORD *a1)
{
  signed int v2; // r9
  int v3; // r8
  _DWORD *v4; // r5
  _DWORD *v5; // r0
  int v6; // r4
  int *v7; // r3
  int v8; // r6
  int *v9; // r3
  int v10; // r7
  int v11; // r0
  int v12; // r6
  int v13; // r3
  int v14; // r0
  int v15; // r0
  _DWORD *v17; // r0
  int v18; // [sp+8h] [bp-14h]
  int v19; // [sp+Ch] [bp-10h]
  int v20; // [sp+10h] [bp-Ch]

  v2 = 0;
  sub_10C070(a1[1]);
  v3 = 0;
  v19 = 0;
  if ( sub_10C010(a1[1]) - 1 > 0 )
  {
    do
    {
      v4 = (_DWORD *)sub_10C01C((_DWORD *)a1[1], v2);
      v5 = (_DWORD *)sub_10C01C((_DWORD *)a1[1], v2 + 1);
      v6 = (int)v5;
      if ( !v4 )
      {
        v6 = 0;
        goto LABEL_32;
      }
      if ( *v4 )
      {
        if ( *v4 != 1 )
          goto LABEL_31;
        v7 = (int *)v4[1];
        v8 = v7[1];
        v18 = *v7;
      }
      else
      {
        v18 = v4[1];
        v8 = v18;
      }
      if ( !v5 )
        goto LABEL_32;
      if ( *v5 )
      {
        if ( *v5 != 1 )
          goto LABEL_31;
        v9 = (int *)v5[1];
        v10 = *v9;
        v20 = v9[1];
      }
      else
      {
        v10 = v5[1];
        v20 = v10;
      }
      if ( sub_126528(v18, v10) > 0 || sub_126528(v18, v8) > 0 || sub_126528(v10, v20) > 0 )
        goto LABEL_31;
      if ( sub_126528(v8, v10) >= 0 )
      {
        v6 = 0;
        sub_D0048(34, 161, 116, (int)"crypto/x509v3/v3_asid.c", 418);
        goto LABEL_32;
      }
      if ( !v3 && (v3 = sub_B822C()) == 0 || !sub_12700C(v8, v3) || !sub_BAD28(v3, 1u) )
      {
        v6 = 0;
        sub_D0048(34, 161, 65, (int)"crypto/x509v3/v3_asid.c", 429);
        goto LABEL_32;
      }
      v11 = sub_126F3C(v3, v19);
      v12 = v11;
      if ( !v11 )
      {
        v6 = 0;
        sub_D0048(34, 161, 65, (int)"crypto/x509v3/v3_asid.c", 437);
        goto LABEL_32;
      }
      if ( sub_126528(v11, v10) )
      {
        ++v2;
        goto LABEL_26;
      }
      if ( *v4 )
      {
        if ( *v4 == 1 )
        {
          ASN1_INTEGER_free(*(_DWORD *)(v4[1] + 4));
          *(_DWORD *)(v4[1] + 4) = v20;
        }
        v13 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 )
          goto LABEL_23;
      }
      else
      {
        v17 = CRYPTO_malloc((void *)8);
        if ( !v17 )
        {
          v19 = v12;
          v6 = 0;
          sub_D0048(34, 161, 65, (int)"crypto/x509v3/v3_asid.c", 450);
          goto LABEL_32;
        }
        *v17 = v18;
        v17[1] = v20;
        *v4 = 1;
        v4[1] = v17;
        v13 = *(_DWORD *)v6;
        if ( *(_DWORD *)v6 )
        {
LABEL_23:
          if ( v13 == 1 )
            *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4) = 0;
          goto LABEL_25;
        }
      }
      *(_DWORD *)(v6 + 4) = v13;
LABEL_25:
      sub_11A67C(v6);
      sub_10BC04((int *)a1[1], v2 + 1);
LABEL_26:
      v19 = v12;
    }
    while ( v2 < sub_10C010(a1[1]) - 1 );
  }
  v14 = sub_10C010(a1[1]);
  v15 = sub_10C01C((_DWORD *)a1[1], v14 - 1);
  if ( v15 && *(_DWORD *)v15 == 1 && sub_126528(**(_DWORD **)(v15 + 4), *(_DWORD *)(*(_DWORD *)(v15 + 4) + 4)) > 0 )
    goto LABEL_31;
  if ( !*a1 )
  {
    v6 = 1;
    goto LABEL_32;
  }
  if ( *a1 != 1 || !sub_10C010(a1[1]) )
LABEL_31:
    v6 = 0;
  else
    v6 = sub_11A494((int)a1) != 0;
LABEL_32:
  ASN1_INTEGER_free(v19);
  sub_B895C(v3);
  return v6;
}
