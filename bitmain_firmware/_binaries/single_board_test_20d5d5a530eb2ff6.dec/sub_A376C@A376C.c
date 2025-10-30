int __fastcall sub_A376C(_DWORD *a1, char *a2, unsigned int a3, const void *a4, size_t n, int *a6)
{
  unsigned int v8; // r5
  int *v10; // r3
  int v11; // r7
  unsigned int v12; // r10
  int v13; // r9
  int v14; // r8
  int v15; // r6
  int v16; // r3
  int (__fastcall *v17)(_DWORD *, int, char *, int, int, int); // r7
  int *v18; // r3
  int v19; // r3
  _BOOL4 v20; // r2
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r10
  int v25; // r0
  int v26; // r0
  int v27; // r8
  int v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r8
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int *v35; // r3
  int v36; // r3
  _BOOL4 v37; // r2
  int v38; // r0
  int v39; // r10
  int v40; // r0
  bool v41; // zf
  int v42; // r0
  int v43; // [sp+4h] [bp-60h]
  unsigned int v44; // [sp+8h] [bp-5Ch]
  int v45; // [sp+8h] [bp-5Ch]
  char *v46; // [sp+14h] [bp-50h] BYREF
  int v47; // [sp+18h] [bp-4Ch] BYREF
  int v48; // [sp+1Ch] [bp-48h] BYREF
  _BYTE v49[64]; // [sp+20h] [bp-44h] BYREF

  v8 = a3;
  if ( !a3 )
  {
    v12 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 3;
    v14 = 0;
    v44 = -2;
    goto LABEL_6;
  }
  v10 = (int *)a1[1];
  if ( (*(_DWORD *)(v10[25] + 48) & 8) != 0 )
    goto LABEL_80;
  v22 = *v10;
  v23 = *v10 < 772;
  if ( v22 == 0x10000 )
    v23 |= 1u;
  if ( v23 )
  {
LABEL_80:
    if ( a1[355] )
      goto LABEL_4;
  }
  if ( v8 <= 0x1F )
  {
LABEL_4:
    v11 = 0;
    v12 = 1;
    v13 = 0;
    v14 = 0;
    v44 = -1;
    v15 = 4;
    goto LABEL_6;
  }
  v24 = (_DWORD *)a1[376];
  v13 = sub_DCB64();
  if ( !v13 )
  {
    v11 = 0;
    v15 = 0;
    goto LABEL_29;
  }
  v25 = sub_D7A5C();
  v11 = v25;
  if ( !v25 )
  {
    v15 = 0;
    goto LABEL_29;
  }
  v14 = v24[83];
  if ( v14 )
  {
    v26 = ((int (__fastcall *)(_DWORD *, char *, char *, int, int, _DWORD))v14)(a1, a2, a2 + 16, v25, v13, 0);
    if ( v26 < 0 )
    {
LABEL_28:
      v15 = 1;
LABEL_29:
      v14 = 0;
      sub_D7A6C(v11);
      sub_DCA8C(v13);
      goto LABEL_7;
    }
    if ( !v26 )
    {
      v14 = 0;
      v12 = 1;
      v44 = -1;
      v15 = 4;
      goto LABEL_6;
    }
    v45 = v26 == 2;
  }
  else
  {
    v45 = memcmp(a2, v24 + 78, 0x10u);
    if ( v45 )
    {
      v12 = 1;
      v44 = -1;
      v15 = 4;
      goto LABEL_6;
    }
    v31 = v24[82];
    v32 = sub_D93F0(0);
    v33 = sub_DC8C4(v13, v31, 32, v32, 0);
    if ( v33 <= 0 )
      goto LABEL_28;
    v34 = sub_D3240(v33);
    if ( sub_D8770(v11, v34, 0, v24[82] + 32, a2 + 16) <= 0 )
      goto LABEL_28;
    v35 = (int *)a1[1];
    if ( (*(_DWORD *)(v35[25] + 48) & 8) == 0 )
    {
      v36 = *v35;
      v37 = v36 >= 772;
      if ( v36 == 0x10000 )
        v37 = 0;
      v45 = v37;
    }
  }
  v27 = sub_DCA7C(v13);
  if ( !v27 )
    goto LABEL_28;
  if ( v8 <= sub_D8944(v11) + v27 + 16 )
    goto LABEL_57;
  v8 -= v27;
  if ( sub_DCA18(v13, a2, v8) <= 0 || sub_DCA28(v13, v49, 0) <= 0 )
    goto LABEL_28;
  v14 = sub_BC33C(v49, &a2[v8], v27);
  if ( v14 )
  {
LABEL_57:
    v12 = 1;
    v44 = -1;
    v15 = 4;
    v14 = 0;
  }
  else
  {
    v46 = &a2[sub_D8944(v11) + 16];
    v8 -= sub_D8944(v11) + 16;
    v38 = CRYPTO_malloc(v8, "ssl/t1_lib.c", 1473);
    v39 = v38;
    if ( !v38 || sub_D7FA8(v11, v38, &v47, v46, v8) <= 0 )
    {
      v15 = 1;
      CRYPTO_free(v39, "ssl/t1_lib.c", 1476);
      goto LABEL_29;
    }
    if ( sub_D83AC(v11, v47 + v39, &v48) <= 0 )
    {
      v42 = v39;
      v12 = 1;
      CRYPTO_free(v42, "ssl/t1_lib.c", 1481);
      v15 = 4;
      v44 = -1;
    }
    else
    {
      v46 = (char *)v39;
      v47 += v48;
      v14 = d2i_SSL_SESSION(0, &v46, v47);
      v47 -= (int)&v46[-v39];
      v40 = CRYPTO_free(v39, "ssl/t1_lib.c", 1490);
      if ( v14 )
      {
        if ( v47 )
        {
          v12 = 1;
          sub_8D6A4(v14);
          v15 = 4;
          v44 = -1;
          v14 = 0;
        }
        else
        {
          if ( n )
          {
            memcpy((void *)(v14 + 332), a4, n);
            *(_DWORD *)(v14 + 328) = n;
          }
          v41 = v45 == 0;
          if ( v45 )
            v12 = 3;
          else
            v12 = 2;
          v44 = v45 != 0;
          if ( v41 )
            v15 = 5;
          else
            v15 = 6;
        }
      }
      else
      {
        sub_D00F0(v40);
        v12 = 1;
        v44 = -1;
        v15 = 4;
      }
    }
  }
LABEL_6:
  sub_D7A6C(v11);
  sub_DCA8C(v13);
  v16 = a1[376];
  v17 = *(int (__fastcall **)(_DWORD *, int, char *, int, int, int))(v16 + 568);
  if ( v17 )
  {
    v43 = *(_DWORD *)(v16 + 572);
    v28 = v8;
    if ( v8 >= 0x10 )
      v28 = 16;
    v29 = v17(a1, v14, a2, v28, v15, v43);
    switch ( v29 )
    {
      case 1:
        v15 = 2;
        sub_8D6A4(v14);
        v14 = 0;
        goto LABEL_35;
      case 2:
        v30 = v14;
        if ( v12 >= 2 )
          v15 = 4;
        v14 = 0;
        sub_8D6A4(v30);
        goto LABEL_7;
      case 3:
      case 4:
        if ( v44 > 1 )
          goto LABEL_34;
        if ( v29 != 3 )
        {
          v15 = 6;
          if ( a1[355] )
            goto LABEL_8;
          goto LABEL_15;
        }
        v15 = 5;
LABEL_35:
        if ( a1[355] )
          goto LABEL_8;
        break;
      default:
LABEL_34:
        v15 = 1;
        goto LABEL_35;
    }
    goto LABEL_16;
  }
LABEL_7:
  if ( a1[355] )
  {
LABEL_8:
    v18 = (int *)a1[1];
    if ( (*(_DWORD *)(v18[25] + 48) & 8) != 0 )
      goto LABEL_16;
    v19 = *v18;
    v20 = v19 >= 772;
    if ( v19 == 0x10000 )
      v20 = 0;
    if ( !v20 )
      goto LABEL_16;
  }
  if ( v15 >= 3 && (v15 <= 4 || v15 == 6) )
LABEL_15:
    a1[343] = 1;
LABEL_16:
  *a6 = v14;
  return v15;
}
