int __fastcall sub_116C08(int a1)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r9
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int *v11; // r10
  void **v12; // r0
  unsigned int i; // r8
  int v14; // r0
  int v15; // r0
  int v16; // r5
  int v17; // r7
  int v18; // r0
  int v19; // r5
  int v20; // r1
  int v21; // r0
  int v22; // r2
  _DWORD *v23; // [sp+Ch] [bp-20h]
  int v24; // [sp+14h] [bp-18h]
  int v25; // [sp+24h] [bp-8h]
  int v26; // [sp+24h] [bp-8h]

  if ( *(_DWORD *)(a1 + 152) )
    return *(_DWORD *)(a1 + 152);
  sub_10C554(*(pthread_rwlock_t **)(a1 + 200));
  if ( !*(_DWORD *)(a1 + 152) )
  {
    v3 = CRYPTO_malloc((void *)0x14);
    v4 = v3;
    if ( !v3 )
    {
      sub_D0048(34, 170, 65, (int)"crypto/x509v3/pcy_cache.c", 94);
      goto LABEL_4;
    }
    *v3 = 0;
    v3[1] = 0;
    v3[2] = -1;
    v3[3] = -1;
    v3[4] = -1;
    *(_DWORD *)(a1 + 152) = v3;
    v5 = (_DWORD *)sub_10EDA8(a1);
    v6 = v5;
    if ( v5 )
    {
      v7 = *v5;
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 4) == 258 )
          goto LABEL_28;
        v8 = sub_126F04(v7);
        v9 = v6[1];
        v4[3] = v8;
        if ( !v9 )
          goto LABEL_12;
      }
      else
      {
        v9 = v6[1];
        if ( !v9 )
          goto LABEL_28;
      }
      if ( *(_DWORD *)(v9 + 4) == 258 )
        goto LABEL_28;
      v4[4] = sub_126F04(v9);
    }
    else if ( v25 != -1 )
    {
      goto LABEL_28;
    }
LABEL_12:
    v10 = sub_10EDA8(a1);
    v23 = (_DWORD *)v10;
    if ( !v10 )
    {
      if ( v25 == -1 )
        goto LABEL_4;
      goto LABEL_28;
    }
    v11 = *(int **)(a1 + 152);
    v24 = sub_10C010(v10);
    if ( v24 <= 0 )
    {
      v17 = 0;
LABEL_24:
      v18 = v17;
LABEL_25:
      policy_data_free(v18);
    }
    else
    {
      v12 = sub_10BFD4(sub_116BC4);
      v11[1] = (int)v12;
      if ( v12 )
      {
        for ( i = 0; i != v24; ++i )
        {
          v14 = sub_10C01C(v23, i);
          v15 = ((int (__fastcall *)(int, _DWORD))sub_116F1C)(v14, 0);
          v16 = v15;
          if ( !v15 )
          {
            v22 = 45;
            goto LABEL_45;
          }
          if ( sub_EAC84(*(_DWORD *)(v15 + 4)) == (char *)746 )
          {
            if ( *v11 )
              goto LABEL_37;
            *v11 = v16;
          }
          else
          {
            if ( sub_10BC4C(v11[1], v16) >= 0 )
            {
LABEL_37:
              v18 = v16;
              *(_DWORD *)(a1 + 128) |= 0x800u;
              goto LABEL_25;
            }
            if ( !sub_10BD3C((int *)v11[1], v16) )
            {
              v17 = v16;
              sub_D0048(34, 169, 65, (int)"crypto/x509v3/pcy_cache.c", 61);
              goto LABEL_24;
            }
          }
        }
        policy_data_free(0);
        sub_10BFDC((int)v23, (void (__fastcall *)(int))POLICYINFO_free);
        v20 = sub_10EDA8(a1);
        if ( v20 )
        {
          v26 = sub_116FD8(a1, v20);
          if ( v26 > 0 )
          {
            v21 = sub_10EDA8(a1);
            v19 = v21;
            if ( v21 )
            {
              if ( *(_DWORD *)(v21 + 4) == 258 )
                goto LABEL_29;
              v4[2] = sub_126F04(v21);
LABEL_30:
              sub_11F594(v6);
              ASN1_INTEGER_free(v19);
              goto LABEL_4;
            }
          }
        }
LABEL_28:
        v19 = 0;
LABEL_29:
        *(_DWORD *)(a1 + 128) |= 0x800u;
        goto LABEL_30;
      }
      v22 = 38;
LABEL_45:
      sub_D0048(34, 169, 65, (int)"crypto/x509v3/pcy_cache.c", v22);
    }
    sub_10BFDC((int)v23, (void (__fastcall *)(int))POLICYINFO_free);
    sub_10BFDC(v11[1], (void (__fastcall *)(int))policy_data_free);
    v11[1] = 0;
  }
LABEL_4:
  sub_10C564(*(pthread_rwlock_t **)(a1 + 200));
  return *(_DWORD *)(a1 + 152);
}
