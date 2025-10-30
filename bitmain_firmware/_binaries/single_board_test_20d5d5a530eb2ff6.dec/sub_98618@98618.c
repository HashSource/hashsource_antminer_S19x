int __fastcall sub_98618(_DWORD *a1, unsigned __int8 **a2)
{
  int v2; // r6
  int *v5; // r2
  int v6; // r2
  _BOOL4 v7; // r1
  int v8; // r2
  unsigned __int8 *v10; // r3
  int v11; // r3
  unsigned __int8 *v12; // r3
  unsigned int v13; // r6
  int v14; // r7
  int v15; // r8
  int *v16; // r3
  int v17; // r2
  unsigned int v18; // r3
  unsigned __int8 *v19; // r2
  unsigned int v20; // r3
  unsigned int v21; // r6
  int v22; // r3
  int v23; // r0
  unsigned __int8 *v24; // r3
  unsigned __int8 *v25; // r3
  unsigned int v26; // r6
  int v27; // r8
  unsigned int v28; // r3
  unsigned __int8 *v29; // r2
  unsigned int v30; // r3
  unsigned int v31; // r6
  int v32; // r0
  int v33; // r0
  int v34; // r3
  _BOOL4 v35; // r2
  int v36; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 *v37; // [sp+10h] [bp-Ch] BYREF
  unsigned int v38; // [sp+14h] [bp-8h]

  v2 = a1[31];
  memset((void *)(v2 + 636), 0, 0x24u);
  v5 = (int *)a1[1];
  if ( (*(_DWORD *)(v5[25] + 48) & 8) != 0 )
    goto LABEL_8;
  v6 = *v5;
  v7 = v6 >= 772;
  if ( v6 == 0x10000 )
    v7 = 0;
  if ( !v7 )
  {
LABEL_8:
    v10 = a2[1];
    if ( v10 && (v12 = v10 - 1, v14 = (int)(*a2 + 1), v13 = **a2, v13 <= (unsigned int)v12) )
    {
      a2[1] = &v12[-v13];
      *a2 = (unsigned __int8 *)(v14 + v13);
      v15 = a1[31];
      CRYPTO_free(*(_DWORD *)(v15 + 540), "ssl/statem/../packet_local.h", 453);
      *(_DWORD *)(v15 + 540) = 0;
      *(_DWORD *)(v15 + 544) = 0;
      if ( v13 )
      {
        v32 = sub_E9E68(v14, v13, "ssl/statem/../packet_local.h", 462);
        *(_DWORD *)(v15 + 540) = v32;
        if ( !v32 )
        {
          sub_95494(a1, 80, 361, 68, (int)"ssl/statem/statem_clnt.c", 2517);
          return 0;
        }
        *(_DWORD *)(v15 + 544) = v13;
      }
      if ( (*(_DWORD *)(*(_DWORD *)(a1[1] + 100) + 48) & 2) == 0 )
        goto LABEL_15;
      v18 = (unsigned int)a2[1];
      if ( v18 > 1 )
      {
        v19 = *a2;
        v20 = v18 - 2;
        v21 = (*a2)[1] | (**a2 << 8);
        if ( v21 <= v20 )
        {
          *a2 = &v19[v21 + 2];
          a2[1] = (unsigned __int8 *)(v20 - v21);
          v37 = v19 + 2;
          v38 = v21;
          if ( !sub_A3FD8(a1, &v37, 0) )
          {
            sub_95494(a1, 80, 361, 360, (int)"ssl/statem/statem_clnt.c", 2538);
            return 0;
          }
          if ( !sub_A4010(a1) )
          {
            sub_95494(a1, 80, 361, 65, (int)"ssl/statem/statem_clnt.c", 2544);
            return 0;
          }
LABEL_15:
          if ( sub_9D6FC(a1, a2) )
            goto LABEL_16;
          return 0;
        }
      }
      v11 = 2527;
    }
    else
    {
      v11 = 2510;
    }
    sub_95494(a1, 50, 361, 159, (int)"ssl/statem/statem_clnt.c", v11);
    return 0;
  }
  v8 = a1[10];
  v36 = 0;
  if ( (v8 & 1) != 0 )
    return 1;
  CRYPTO_free(*(_DWORD *)(v2 + 540), "ssl/statem/statem_clnt.c", 2466);
  v22 = a1[31];
  v23 = a1[383];
  *(_DWORD *)(v22 + 540) = 0;
  *(_DWORD *)(v22 + 544) = 0;
  CRYPTO_free(v23, "ssl/statem/statem_clnt.c", 2469);
  a1[383] = 0;
  a1[384] = 0;
  v24 = a2[1];
  if ( !v24 )
    goto LABEL_24;
  v25 = v24 - 1;
  v27 = (int)(*a2 + 1);
  v26 = **a2;
  if ( v26 > (unsigned int)v25 )
    goto LABEL_24;
  *a2 = (unsigned __int8 *)(v27 + v26);
  a2[1] = &v25[-v26];
  CRYPTO_free(a1[383], "ssl/statem/../packet_local.h", 453);
  a1[383] = 0;
  a1[384] = 0;
  if ( v26 )
  {
    v33 = sub_E9E68(v27, v26, "ssl/statem/../packet_local.h", 462);
    a1[383] = v33;
    if ( !v33 )
    {
LABEL_24:
      sub_95494(a1, 50, 361, 159, (int)"ssl/statem/statem_clnt.c", 2477);
      return 0;
    }
    a1[384] = v26;
  }
  v28 = (unsigned int)a2[1];
  if ( v28 <= 1 || (v29 = *a2, v30 = v28 - 2, v31 = (*a2)[1] | (**a2 << 8), v31 > v30) )
  {
    sub_95494(a1, 50, 361, 271, (int)"ssl/statem/statem_clnt.c", 2484);
    return 0;
  }
  *a2 = &v29[v31 + 2];
  a2[1] = (unsigned __int8 *)(v30 - v31);
  v37 = v29 + 2;
  v38 = v31;
  if ( !sub_8F274(a1, (int)&v37, 0x4000, &v36, 0, 1) || !sub_8F658(a1, 0x4000, v36, 0, 0, 1) )
  {
    CRYPTO_free(v36, "ssl/statem/statem_clnt.c", 2493);
    return 0;
  }
  CRYPTO_free(v36, "ssl/statem/statem_clnt.c", 2496);
  if ( !sub_A4010(a1) )
  {
    sub_95494(a1, 80, 361, 271, (int)"ssl/statem/statem_clnt.c", 2500);
    return 0;
  }
LABEL_16:
  if ( a2[1] )
  {
    sub_95494(a1, 50, 361, 159, (int)"ssl/statem/statem_clnt.c", 2559);
    return 0;
  }
  v16 = (int *)a1[1];
  v17 = v16[25];
  *(_DWORD *)(a1[31] + 536) = 1;
  if ( (*(_DWORD *)(v17 + 48) & 8) != 0 )
    return 2;
  v34 = *v16;
  v35 = v34 >= 772;
  if ( v34 == 0x10000 )
    v35 = 0;
  if ( !v35 )
    return 2;
  if ( a1[381] == 4 )
    return 2;
  return 3;
}
