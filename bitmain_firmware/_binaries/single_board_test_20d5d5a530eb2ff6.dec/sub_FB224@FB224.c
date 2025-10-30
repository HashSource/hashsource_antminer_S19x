int __fastcall sub_FB224(int a1, _BYTE *a2, int a3, _DWORD *a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // r5
  int v10; // r4
  int v11; // r0
  int v12; // r9
  int *v13; // r6
  _BYTE *v14; // r11
  int v15; // r5
  char v16; // r3
  int v17; // r0
  int v18; // r6
  int v19; // r0
  int v20; // r8
  int v21; // r3
  _BYTE *v22; // r0
  int *v23; // r0
  int v24; // r0
  int v26; // r2
  __int16 v27; // r2
  int v28; // r9
  _BYTE *v29; // r12
  bool v30; // cf
  char v31; // r3
  int v32; // r3
  unsigned int v33; // r3
  unsigned int v34; // r9
  unsigned int v35; // r3
  unsigned int v36; // r7
  _BYTE *v37; // r3
  unsigned int v38; // r7
  int v39; // lr
  int *v40; // r5
  char *v41; // r2
  int v42; // r0
  int v43; // r1
  _BYTE *v44; // r4
  _BYTE *v45; // r6
  int *v46; // r12
  _BYTE *v47; // r1
  _BYTE *v48; // r5
  int *v49; // r0
  _BYTE *v50; // r1
  _BYTE *v51; // r5
  int v52; // r2
  int v53; // t1
  int v54; // t1
  _BYTE *v55; // r3
  char *v56; // r1
  _BYTE *v57; // r0
  char v58; // t1
  int v59; // [sp+0h] [bp-1Ch]
  _DWORD *v60; // [sp+0h] [bp-1Ch]
  int v62; // [sp+8h] [bp-14h]
  int v63; // [sp+Ch] [bp-10h]
  int v64; // [sp+10h] [bp-Ch]
  int *v65; // [sp+10h] [bp-Ch]
  _BYTE *v66; // [sp+14h] [bp-8h]
  int v67; // [sp+44h] [bp+28h]

  v6 = a5;
  if ( !a5 )
    v6 = a4;
  v10 = a6;
  v11 = sub_D8C78((int)a4);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 0;
    v14 = 0;
    v15 = 0;
    goto LABEL_20;
  }
  if ( a6 == -1 )
  {
    v10 = v11;
  }
  else if ( a6 == -2 )
  {
    v10 = -3;
  }
  else if ( a6 < -3 )
  {
    v59 = 175;
    v27 = 136;
    goto LABEL_25;
  }
  v16 = sub_B85BC(*(_DWORD **)(a1 + 16)) - 1;
  v17 = a1;
  v18 = v16 & 7;
  v63 = v18;
  v19 = sub_F7ED8(v17);
  v20 = v19;
  if ( v18 )
  {
    if ( v19 > v12 + 1 )
      goto LABEL_10;
LABEL_22:
    v26 = 187;
LABEL_23:
    v59 = v26;
    v27 = 110;
LABEL_25:
    v13 = 0;
    v14 = 0;
    sub_D0048(4, 152, v27, (int)"crypto/rsa/rsa_pss.c", v59);
LABEL_26:
    v15 = (int)v13;
    goto LABEL_20;
  }
  v20 = v19 - 1;
  *a2++ = 0;
  if ( v19 - 1 <= v12 + 1 )
    goto LABEL_22;
LABEL_10:
  v21 = v20 - v12;
  v64 = v20 - v12;
  if ( v10 == -3 )
  {
    v10 = v21 - 2;
    goto LABEL_13;
  }
  if ( v10 >= v21 - 1 )
  {
    v26 = 194;
    goto LABEL_23;
  }
LABEL_13:
  if ( v10 > 0 )
  {
    v22 = CRYPTO_malloc((void *)v10);
    v14 = v22;
    if ( !v22 )
    {
      sub_D0048(4, 152, 65, (int)"crypto/rsa/rsa_pss.c", 201);
      v13 = 0;
      v15 = 0;
      goto LABEL_20;
    }
    if ( sub_F497C((int)v22, v10) <= 0 )
    {
      v13 = 0;
      v15 = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v14 = 0;
  }
  v23 = (int *)sub_D14F4();
  v13 = v23;
  if ( !v23 )
    goto LABEL_26;
  v24 = sub_D1520(v23, a4, 0);
  if ( v24
    && (v24 = sub_D16D8((int)v13, (int)&unk_1C3E50, 8)) != 0
    && (v24 = sub_D16D8((int)v13, a3, v12)) != 0
    && (!v10 || (v24 = sub_D16D8((int)v13, (int)v14, v10)) != 0)
    && (v24 = sub_D16E4(v13, (int)&a2[v64 - 1], 0)) != 0 )
  {
    v60 = v6;
    v15 = 0;
    if ( !sub_166460(a2, v64 - 1, &a2[v64 - 1], v12, v60) )
    {
      v28 = v20 - v10 - v12;
      a2[v28 - 2] ^= 1u;
      if ( v10 > 0 )
      {
        v29 = &a2[v28 - 1];
        v30 = v29 >= v14 + 4;
        if ( v29 < v14 + 4 )
          v30 = v14 >= &a2[v28 + 3];
        v31 = v30;
        if ( (unsigned int)v10 <= 6 )
          v31 = 0;
        v32 = v31 & 1;
        if ( (((unsigned __int8)v14 | (unsigned __int8)v29) & 3) != 0 )
          v32 = 0;
        if ( v32 )
        {
          v33 = (unsigned int)(v10 - 4) >> 2;
          v34 = v33 + 1;
          v35 = v33 - 8;
          v62 = 4 * v34;
          if ( v35 > 0xFFFFFFF6 )
          {
            v38 = 0;
            v48 = v14;
            v49 = (int *)v29;
            v47 = v29;
          }
          else
          {
            v36 = v35 & 0xFFFFFFF8;
            v37 = v29 + 32;
            v38 = v36 + 8;
            v39 = 0;
            v40 = (int *)(v29 + 32);
            v41 = v14 + 32;
            v65 = v13;
            v66 = v29;
            v67 = v10;
            do
            {
              v42 = *((_DWORD *)v41 - 8);
              v39 += 8;
              v43 = *((_DWORD *)v37 - 8);
              __pld(v37 + 48);
              v44 = v37;
              v45 = v41;
              v46 = v40;
              v41 += 32;
              *(v40 - 8) = v43 ^ v42;
              v37 += 32;
              v40 += 8;
              *(v40 - 15) = *((_DWORD *)v37 - 15) ^ *((_DWORD *)v41 - 15);
              *(v40 - 14) = *((_DWORD *)v37 - 14) ^ *((_DWORD *)v41 - 14);
              *(v40 - 13) = *((_DWORD *)v37 - 13) ^ *((_DWORD *)v41 - 13);
              *(v40 - 12) = *((_DWORD *)v37 - 12) ^ *((_DWORD *)v41 - 12);
              *(v40 - 11) = *((_DWORD *)v37 - 11) ^ *((_DWORD *)v41 - 11);
              *(v40 - 10) = *((_DWORD *)v37 - 10) ^ *((_DWORD *)v41 - 10);
              *(v40 - 9) = *((_DWORD *)v37 - 9) ^ *((_DWORD *)v41 - 9);
            }
            while ( v39 != v38 );
            v47 = v44;
            v48 = v45;
            v49 = v46;
            v13 = v65;
            v29 = v66;
            v10 = v67;
          }
          v50 = v47 - 4;
          v51 = v48 - 4;
          do
          {
            v53 = *((_DWORD *)v50 + 1);
            v50 += 4;
            v52 = v53;
            ++v38;
            v54 = *((_DWORD *)v51 + 1);
            v51 += 4;
            *v49++ = v54 ^ v52;
          }
          while ( v38 < v34 );
          v55 = &v29[v62];
          if ( v10 != v62 )
          {
            v29[4 * v34] ^= v14[4 * v34];
            if ( v10 > v62 + 1 )
            {
              v55[1] ^= v14[v62 + 1];
              if ( v10 > v62 + 2 )
                v55[2] ^= v14[v62 + 2];
            }
          }
        }
        else
        {
          v56 = v14 - 1;
          v57 = &v29[v10];
          do
          {
            v58 = *++v56;
            *v29++ ^= v58;
          }
          while ( v57 != v29 );
        }
      }
      if ( v63 )
        *a2 &= 255 >> (8 - v63);
      a2[v20 - 1] = -68;
      v15 = 1;
    }
  }
  else
  {
    v15 = v24;
  }
LABEL_20:
  sub_D1504(v13);
  sub_E0758(v14, v10, (size_t)"crypto/rsa/rsa_pss.c");
  return v15;
}
