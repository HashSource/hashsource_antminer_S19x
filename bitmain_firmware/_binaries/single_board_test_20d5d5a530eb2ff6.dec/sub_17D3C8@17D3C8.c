int __fastcall sub_17D3C8(_DWORD *a1, int a2, int *a3, int *a4)
{
  unsigned int v6; // r6
  int v9; // r7
  int v10; // r0
  int *v11; // r5
  int v12; // r0
  int v13; // r4
  int v14; // r0
  int v16; // r0
  int v17; // r4
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r7
  int v22; // r2
  int v23; // r4
  char *v24; // [sp+Ch] [bp-8h] BYREF

  v6 = 0;
  if ( sub_10C010((int)a1) <= 0 )
    return 1;
  while ( 2 )
  {
    v9 = sub_10C01C(a1, v6);
    v10 = sub_17DF5C(v9, 156);
    v11 = (int *)v10;
    if ( v10 )
      v11 = *(int **)(v10 + 4);
    v12 = sub_17DF5C(v9, 157);
    v13 = v12;
    if ( v12 )
      v13 = *(_DWORD *)(v12 + 4);
    switch ( sub_17DFA4(v9) )
    {
      case 150:
        if ( !a3 )
          goto LABEL_8;
        if ( *a3 )
          goto LABEL_8;
        v18 = sub_17DFAC(v9);
        v19 = sub_D8E18(v18);
        *a3 = v19;
        if ( v19 )
          goto LABEL_8;
        return 0;
      case 151:
        if ( a3 )
        {
          if ( !*a3 )
          {
            v16 = sub_188F10(v9, a2, -1);
            v17 = v16;
            if ( !v16 )
              return 0;
            *a3 = sub_D8E18(v16);
            sub_AE5FC(v17);
            if ( !*a3 )
              return 0;
          }
        }
        goto LABEL_8;
      case 152:
        if ( sub_17DFC0(v9) != 158 )
          goto LABEL_8;
        v20 = sub_17DFE0(v9);
        v21 = v20;
        if ( !v20 )
          return 0;
        if ( !v13 || sub_116A10(v20, *(char **)(v13 + 8), *(_DWORD *)v13) )
        {
          if ( !v11
            || (v22 = sub_12A71C(&v24, v11), v22 < 0)
            || (v23 = sub_116994(v21, v24, v22), CRYPTO_free(v24), v23) )
          {
            if ( sub_10BD3C(a4, v21) )
            {
LABEL_8:
              if ( (int)++v6 >= sub_10C010((int)a1) )
                return 1;
              continue;
            }
          }
        }
        X509_free(v21);
        return 0;
      case 155:
        v14 = sub_17DF8C(v9);
        if ( sub_17D3C8(v14, a2, a3, a4) )
          goto LABEL_8;
        return 0;
      default:
        goto LABEL_8;
    }
  }
}
