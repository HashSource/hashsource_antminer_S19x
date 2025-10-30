int __fastcall sub_97A3C(int *a1, unsigned __int8 **a2)
{
  unsigned int v2; // r3
  int v3; // r5
  int v5; // r0
  unsigned int v7; // r2
  int v8; // r12
  unsigned __int8 *v9; // r8
  int v10; // r7
  int v11; // r7
  bool v12; // zf
  int v13; // r3
  _DWORD *v15; // r3
  int v16; // r10
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r0
  int v21; // r1
  int v22; // r2
  unsigned __int8 *v23; // r5
  int v24; // r3
  char *v25; // r5
  size_t v26; // r8
  size_t v27; // t1
  unsigned int v28; // r3
  unsigned int v29; // r3
  unsigned __int8 *v30; // r9
  int v31; // r11
  _DWORD *v32; // r4
  int v33; // r7
  int v34; // r1
  int *v35; // r3
  int v36; // r3
  _BOOL4 v37; // r2
  unsigned int v38; // r3
  unsigned int v39; // r2
  int v40; // r7
  _BOOL4 v41; // r3
  int v42; // r0
  int (__fastcall *v43)(int *, int *, int *, _DWORD, _DWORD **, int); // r10
  int *v44; // r4
  int v45; // r3
  _DWORD *v46; // r2
  int *v47; // r10
  size_t v48; // r2
  size_t v49; // r2
  int v50; // r3
  int *v51; // r2
  int v52; // r1
  int v53; // r1
  int v54; // r2
  int v55; // r2
  _BOOL4 v56; // r2
  unsigned int *v57; // r3
  unsigned int v58; // r2
  _DWORD *v59; // r0
  int v60; // r2
  int *v61; // r2
  int v62; // r3
  int v63; // r2
  int v64; // r2
  int v65; // r3
  _DWORD *v66; // r0
  unsigned int v67; // [sp+Ch] [bp-20h]
  int v68; // [sp+14h] [bp-18h] BYREF
  _DWORD *v69; // [sp+18h] [bp-14h] BYREF
  int v70; // [sp+1Ch] [bp-10h] BYREF
  unsigned __int8 *v71; // [sp+20h] [bp-Ch] BYREF
  unsigned int v72; // [sp+24h] [bp-8h]

  v2 = (unsigned int)a2[1];
  v68 = 0;
  if ( v2 <= 1 )
  {
    sub_95494(a1, 50, 369, 159, (int)"ssl/statem/statem_clnt.c", 1416);
    goto LABEL_9;
  }
  v3 = (int)*a2;
  v5 = *a1;
  v7 = v2 - 2;
  v8 = **a2;
  v9 = *a2 + 2;
  v10 = (*a2)[1];
  *a2 = v9;
  a2[1] = (unsigned __int8 *)(v2 - 2);
  v11 = v10 | (v8 << 8);
  v12 = v5 == 772;
  if ( v5 == 772 )
    v12 = v11 == 771;
  if ( !v12 )
  {
    if ( v7 <= 0x1F )
    {
LABEL_6:
      v13 = 1440;
LABEL_7:
      sub_95494(a1, 50, 369, 159, (int)"ssl/statem/statem_clnt.c", v13);
LABEL_9:
      CRYPTO_free(v68, "ssl/statem/statem_clnt.c", 1751);
      return 0;
    }
    v15 = (_DWORD *)(a1[31] + 140);
    goto LABEL_11;
  }
  v67 = v2;
  if ( v7 <= 0x1F )
    goto LABEL_6;
  if ( memcmp(&hrrrandom, (const void *)(v3 + 2), 0x20u) )
  {
    v15 = (_DWORD *)(a1[31] + 140);
LABEL_11:
    v16 = 0;
    v17 = *(_DWORD *)(v3 + 6);
    v18 = *(_DWORD *)(v3 + 10);
    v19 = *(_DWORD *)(v3 + 14);
    *v15 = *(_DWORD *)v9;
    v15[1] = v17;
    v15[2] = v18;
    v15[3] = v19;
    v20 = *(_DWORD *)(v3 + 22);
    v21 = *(_DWORD *)(v3 + 26);
    v22 = *(_DWORD *)(v3 + 30);
    v15[4] = *(_DWORD *)(v3 + 18);
    v15[5] = v20;
    v15[6] = v21;
    v15[7] = v22;
    v23 = *a2 + 32;
    v24 = (int)(a2[1] - 32);
    *a2 = v23;
    a2[1] = (unsigned __int8 *)v24;
    goto LABEL_12;
  }
  if ( a1[275] )
  {
    sub_95494(a1, 10, 369, 244, (int)"ssl/statem/statem_clnt.c", 1427);
    goto LABEL_9;
  }
  v23 = (unsigned __int8 *)(v3 + 34);
  a1[275] = 1;
  v24 = v67 - 34;
  v16 = 1;
  *a2 = v23;
  a2[1] = (unsigned __int8 *)(v67 - 34);
LABEL_12:
  if ( !v24 || (v27 = *v23, v25 = (char *)(v23 + 1), v26 = v27, v28 = v24 - 1, v27 > v28) )
  {
    v13 = 1448;
    goto LABEL_7;
  }
  v29 = v28 - v26;
  v30 = (unsigned __int8 *)&v25[v26];
  a2[1] = (unsigned __int8 *)v29;
  *a2 = (unsigned __int8 *)&v25[v26];
  if ( v26 > 0x20 )
  {
    sub_95494(a1, 47, 369, 300, (int)"ssl/statem/statem_clnt.c", 1455);
    goto LABEL_9;
  }
  if ( v29 <= 1 )
  {
    v13 = 1461;
    goto LABEL_7;
  }
  *a2 = v30 + 2;
  a2[1] = (unsigned __int8 *)(v29 - 2);
  if ( v29 == 2 )
  {
    v13 = 1467;
    goto LABEL_7;
  }
  v31 = v30[2];
  a2[1] = (unsigned __int8 *)(v29 - 3);
  *a2 = v30 + 3;
  if ( v29 == 3 )
  {
    if ( !v16 )
    {
      v71 = 0;
      v72 = 0;
      goto LABEL_21;
    }
LABEL_32:
    sub_95494(a1, 50, 369, 271, (int)"ssl/statem/statem_clnt.c", 1477);
    goto LABEL_9;
  }
  if ( v29 == 4 )
    goto LABEL_32;
  v38 = v29 - 5;
  v39 = v30[4] | (v30[3] << 8);
  if ( v39 > v38 || v39 != v38 )
    goto LABEL_32;
  *a2 = &v30[v39 + 5];
  v71 = v30 + 5;
  v72 = v39;
  a2[1] = 0;
  if ( v16 )
  {
    v32 = (_DWORD *)a1[1];
    v40 = *(_DWORD *)(v32[25] + 48) & 8;
    if ( v40 )
      goto LABEL_48;
    goto LABEL_45;
  }
LABEL_21:
  if ( !sub_8F274(a1, (int)&v71, 768, &v68, 0, 1) || !sub_9D328(a1, v11, v68) )
    goto LABEL_9;
  v32 = (_DWORD *)a1[1];
  if ( (*(_DWORD *)(v32[25] + 48) & 8) != 0 )
    goto LABEL_24;
LABEL_45:
  v40 = 0;
  v41 = *v32 >= 772;
  if ( *v32 == 0x10000 )
    v41 = 0;
  if ( !v41 )
  {
    if ( !v16 )
    {
LABEL_24:
      v33 = 256;
      v34 = 256;
      goto LABEL_25;
    }
    v40 = 0;
  }
LABEL_48:
  if ( v31 )
  {
    sub_95494(a1, 47, 369, 341, (int)"ssl/statem/statem_clnt.c", 1500);
    goto LABEL_9;
  }
  if ( a1[298] != v26 || memcmp(v25, a1 + 290, v26) )
  {
    sub_95494(a1, 47, 369, 999, (int)"ssl/statem/statem_clnt.c", 1508);
    goto LABEL_9;
  }
  if ( v16 )
  {
    if ( !sub_9642C(a1, (int)&v25[v26]) )
      goto LABEL_9;
    v42 = a1[251];
    v70 = 0;
    sub_D7A6C(v42);
    a1[251] = 0;
    if ( sub_8F274(a1, (int)&v71, 2048, &v70, 0, 1) && sub_8F658(a1, 2048, v70, 0, 0, 1) )
    {
      CRYPTO_free(v70, "ssl/statem/statem_clnt.c", 1775);
      v65 = a1[366];
      v70 = 0;
      if ( v65 || !*(_DWORD *)(a1[31] + 532) )
      {
        if ( sub_9D664(a1, 0, 0, 0, 0) && sub_A91B0(a1, *(_DWORD *)(a1[27] + 4), a1[29] + 4) )
          return 1;
      }
      else
      {
        sub_95494(a1, 47, 610, 214, (int)"ssl/statem/statem_clnt.c", 1789);
      }
    }
    CRYPTO_free(v70, "ssl/statem/statem_clnt.c", 1816);
    return 0;
  }
  if ( v40 )
    goto LABEL_24;
  v56 = *v32 >= 772;
  if ( *v32 == 0x10000 )
    v56 = 0;
  if ( !v56 )
    goto LABEL_24;
  v33 = 512;
  v34 = 512;
LABEL_25:
  if ( !sub_8F114((int)a1, v34, v68) )
  {
    sub_95494(a1, 47, 369, 110, (int)"ssl/statem/statem_clnt.c", 1530);
    goto LABEL_9;
  }
  v35 = (int *)a1[1];
  a1[35] = 0;
  if ( (*(_DWORD *)(v35[25] + 48) & 8) != 0 )
    goto LABEL_127;
  v36 = *v35;
  v37 = v36 != 0x10000;
  if ( v36 < 772 )
    v37 = 0;
  if ( !v37 )
  {
LABEL_127:
    if ( *a1 > 768 && (v43 = (int (__fastcall *)(int *, int *, int *, _DWORD, _DWORD **, int))a1[355]) != 0 )
    {
      v44 = (int *)a1[285];
      if ( v44[116] )
      {
        v70 = 256;
        v45 = a1[356];
        v69 = 0;
        if ( !v43(a1, v44 + 18, &v70, 0, &v69, v45) || v70 <= 0 )
        {
          sub_95494(a1, 80, 369, 68, (int)"ssl/statem/statem_clnt.c", 1587);
          goto LABEL_9;
        }
        v46 = v69;
        v44 = (int *)a1[285];
        v44[1] = v70;
        v47 = v44;
        if ( !v46 )
        {
          v66 = sub_8736C((int)a1, (int)&v25[v26], 0);
          v44 = (int *)a1[285];
          v46 = v66;
        }
        v47[110] = (int)v46;
        if ( !v26 )
          goto LABEL_69;
        v48 = v44[82];
        if ( v48 != v26 )
          goto LABEL_69;
LABEL_78:
        if ( !memcmp(v25, v44 + 83, v48) )
        {
          a1[35] = 1;
          goto LABEL_70;
        }
        goto LABEL_69;
      }
    }
    else
    {
      v44 = (int *)a1[285];
    }
    if ( !v26 )
      goto LABEL_82;
    v48 = v44[82];
    if ( v26 != v48 )
      goto LABEL_82;
    goto LABEL_78;
  }
  if ( sub_7D3D0((int)(a1 + 404)) )
  {
    sub_95494(a1, 10, 369, 182, (int)"ssl/statem/statem_clnt.c", 1544);
    goto LABEL_9;
  }
  if ( !sub_8F5C4(a1, 0x19u, 512, v68, 0, 0) )
    goto LABEL_9;
  v44 = (int *)a1[285];
LABEL_69:
  if ( a1[35] )
  {
LABEL_70:
    v49 = a1[276];
    if ( v49 != v44[91] || memcmp(v44 + 92, a1 + 277, v49) )
    {
      sub_95494(a1, 47, 369, 272, (int)"ssl/statem/statem_clnt.c", 1605);
      goto LABEL_9;
    }
LABEL_72:
    v50 = *v44;
    if ( *a1 != *v44 )
    {
      sub_95494(a1, 70, 369, 210, (int)"ssl/statem/statem_clnt.c", 1643);
      goto LABEL_9;
    }
    goto LABEL_87;
  }
LABEL_82:
  if ( v44[82] )
  {
    v57 = (unsigned int *)(a1[376] + 80);
    do
      v58 = __ldrex(v57);
    while ( __strex(v58 + 1, v57) );
    if ( !sub_8D964((int)a1, 0) )
      goto LABEL_9;
    v44 = (int *)a1[285];
  }
  v51 = (int *)a1[1];
  v50 = *a1;
  v52 = v51[25];
  *v44 = *a1;
  if ( (*(_DWORD *)(v52 + 48) & 8) != 0 )
    goto LABEL_128;
  v53 = *v51;
  v54 = *v51 < 772;
  if ( v53 == 0x10000 )
    v54 |= 1u;
  if ( v54 )
  {
LABEL_128:
    v44[82] = v26;
    if ( v26 )
    {
      memcpy(v44 + 83, v25, v26);
      v44 = (int *)a1[285];
      goto LABEL_72;
    }
  }
LABEL_87:
  v55 = a1[31];
  *(_DWORD *)(v55 + 680) = v50;
  *(_DWORD *)(v55 + 684) = v50;
  if ( !sub_9642C(a1, (int)&v25[v26]) )
    goto LABEL_9;
  if ( a1[35] && *(_DWORD *)(a1[285] + 436) != v31 )
  {
    sub_95494(a1, 47, 369, 344, (int)"ssl/statem/statem_clnt.c", 1676);
    goto LABEL_9;
  }
  if ( v31 )
  {
    if ( !sub_9C7D8(a1) )
    {
      sub_95494(a1, 47, 369, 343, (int)"ssl/statem/statem_clnt.c", 1683);
      goto LABEL_9;
    }
    v59 = sub_871C0(*(_DWORD *)(a1[308] + 156), v31, v64);
    if ( !v59 )
    {
      sub_95494(a1, 47, 369, 257, (int)"ssl/statem/statem_clnt.c", 1691);
      goto LABEL_9;
    }
  }
  else
  {
    v59 = 0;
  }
  v60 = v68;
  *(_DWORD *)(a1[31] + 576) = v59;
  if ( !sub_8F658(a1, v33, v60, 0, 0, 1) )
    goto LABEL_9;
  v61 = (int *)a1[1];
  v62 = v61[25];
  if ( (*(_DWORD *)(v62 + 48) & 8) == 0 )
  {
    v63 = *v61;
    if ( v63 >= 772
      && v63 != 0x10000
      && (!(*(int (__fastcall **)(int *))(v62 + 8))(a1)
       || !(*(int (__fastcall **)(int *, int))(*(_DWORD *)(a1[1] + 100) + 16))(a1, 145)) )
    {
      goto LABEL_9;
    }
  }
  CRYPTO_free(v68, "ssl/statem/statem_clnt.c", 1748);
  return 3;
}
