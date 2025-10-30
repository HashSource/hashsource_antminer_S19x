int __fastcall sub_F1884(int a1, int a2, unsigned int a3, int a4)
{
  int v6; // r7
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r5
  __int16 v10; // r1
  const char *v11; // r10
  unsigned int v12; // r4
  int v13; // r3
  char v14; // r2
  int v15; // r6
  int v16; // r1
  int v17; // r3
  char v18; // r2
  char *v19; // r0
  char *v20; // r3
  int v21; // r12
  bool v22; // zf
  int v23; // r3
  char *v24; // r4
  int *v25; // lr
  int v26; // r0
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  size_t v32; // r5
  void *v33; // r0
  int v34; // r2
  int v35; // r3
  int v36; // r12
  int v37; // r0
  int v38; // r1
  bool v39; // zf
  int v40; // r3
  int v41; // r0
  size_t v42; // r5
  void *v43; // r0
  int v44; // r2
  int v45; // r3
  int v46; // r12
  int v47; // r0
  int v48; // r1
  bool v49; // zf
  int v50; // r3
  _DWORD v51[2]; // [sp+0h] [bp-A4h] BYREF
  int v52; // [sp+8h] [bp-9Ch]
  int v53; // [sp+Ch] [bp-98h]
  int v54; // [sp+10h] [bp-94h]
  int v55; // [sp+14h] [bp-90h]
  int v56; // [sp+18h] [bp-8Ch]
  int v57; // [sp+28h] [bp-7Ch]
  unsigned int v58; // [sp+2Ch] [bp-78h]
  char v59[24]; // [sp+34h] [bp-70h] BYREF
  _BYTE v60[6]; // [sp+4Ch] [bp-58h] BYREF
  unsigned __int16 v61; // [sp+52h] [bp-52h]
  _DWORD v62[3]; // [sp+64h] [bp-40h] BYREF
  int v63; // [sp+70h] [bp-34h]
  int v64; // [sp+74h] [bp-30h]
  int v65; // [sp+7Ch] [bp-28h]

  v58 = a3;
  v6 = 0;
  v7 = sub_F1470(a1);
  v8 = *(_DWORD *)(v7 + 24);
  v57 = v7;
  v9 = 0;
  v10 = *(_WORD *)(v8 + 2) & 0xFC7F | 0x80;
  *(_BYTE *)v8 = 3;
  *(_DWORD *)(v8 + 28) = &word_3B4A2C;
  *(_WORD *)(v8 + 2) = v10;
  *(_DWORD *)(v7 + 20) = a2;
  while ( dword_478988 < v58 && dword_478988 < (unsigned int)dword_478A00 )
  {
    ((void (__fastcall *)(_DWORD *, char *, _BYTE *))loc_F1614)(v62, v59, v60);
    v11 = (const char *)v62[0];
    if ( *(_BYTE *)v62[0] == *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a4 + 36) + 4) + 24) )
      v11 = (const char *)(v62[0] + 1);
    if ( v64 == 11 )
      goto LABEL_35;
    if ( v64 <= 11 )
    {
      if ( v64 == 8 )
      {
LABEL_35:
        v51[0] = v9;
        v42 = strlen(v11);
        v43 = *(void **)(a4 + 60);
        if ( v42 + 1 > *(_DWORD *)(a4 + 64) - (int)v43 )
        {
          obstack_newchunk((struct obstack *)(a4 + 48), v42 + 1);
          v43 = *(void **)(a4 + 60);
        }
        memcpy(v43, v11, v42);
        v44 = *(_DWORD *)(a4 + 60);
        *(_DWORD *)(a4 + 60) = v44 + v42 + 1;
        *(_BYTE *)(v44 + v42) = 0;
        v9 = v51;
        v45 = *(_DWORD *)(a4 + 60);
        v46 = *(_DWORD *)(a4 + 56);
        v47 = *(_DWORD *)(a4 + 72);
        v48 = *(_DWORD *)(a4 + 64);
        v49 = v45 == v46;
        v56 = v46;
        if ( v45 == v46 )
          LOBYTE(v44) = *(_BYTE *)(a4 + 88);
        v50 = (v45 + v47) & ~v47;
        *(_DWORD *)(a4 + 60) = v50;
        if ( v49 )
          *(_BYTE *)(a4 + 88) = v44 | 2;
        if ( v50 - *(_DWORD *)(a4 + 52) > (unsigned int)(v48 - *(_DWORD *)(a4 + 52)) )
        {
          v50 = v48;
          *(_DWORD *)(a4 + 60) = v48;
        }
        *(_DWORD *)(a4 + 56) = v50;
        v55 = sub_F1C48(v62, v65, v60, a4, v51[0]);
        v53 = 0;
        LOBYTE(v54) = v54 & 0xF1;
        v52 = 8 * v63;
        v54 &= 0xFu;
LABEL_33:
        ++v6;
      }
    }
    else
    {
      if ( v64 == 18 )
      {
        v51[0] = v9;
        v32 = strlen(v11);
        v33 = *(void **)(a4 + 60);
        if ( v32 + 1 > *(_DWORD *)(a4 + 64) - (int)v33 )
        {
          obstack_newchunk((struct obstack *)(a4 + 48), v32 + 1);
          v33 = *(void **)(a4 + 60);
        }
        memcpy(v33, v11, v32);
        v34 = *(_DWORD *)(a4 + 60);
        *(_DWORD *)(a4 + 60) = v34 + v32 + 1;
        *(_BYTE *)(v34 + v32) = 0;
        v9 = v51;
        v35 = *(_DWORD *)(a4 + 60);
        v36 = *(_DWORD *)(a4 + 56);
        v37 = *(_DWORD *)(a4 + 72);
        v38 = *(_DWORD *)(a4 + 64);
        v39 = v35 == v36;
        v56 = v36;
        if ( v35 == v36 )
          LOBYTE(v34) = *(_BYTE *)(a4 + 88);
        v40 = (v35 + v37) & ~v37;
        *(_DWORD *)(a4 + 60) = v40;
        if ( v39 )
          *(_BYTE *)(a4 + 88) = v34 | 2;
        if ( v40 - *(_DWORD *)(a4 + 52) > (unsigned int)(v38 - *(_DWORD *)(a4 + 52)) )
        {
          v40 = v38;
          *(_DWORD *)(a4 + 60) = v38;
        }
        *(_DWORD *)(a4 + 56) = v40;
        v41 = sub_F1C48(v62, v65, v60, a4, v51[0]);
        v53 = 0;
        LOBYTE(v54) = v54 & 0xF1;
        v55 = v41;
        v52 = v63;
        v54 = v54 & 0xF | (16 * v61);
        goto LABEL_33;
      }
      if ( v64 == 102 )
        break;
    }
  }
  v12 = 24 * v6;
  v13 = *(_DWORD *)(v57 + 24);
  v14 = *(_BYTE *)(v13 + 2);
  *(_WORD *)(v13 + 4) = v6;
  if ( (v14 & 0x10) != 0 )
  {
    v15 = *(_DWORD *)(v13 + 16);
    v16 = *(_DWORD *)(v15 + 64);
    v17 = *(_DWORD *)(v15 + 60);
    v18 = v16 - v17;
    if ( v16 - v17 < v12 )
    {
      obstack_newchunk((struct obstack *)(v15 + 48), 24 * v6);
      v17 = *(_DWORD *)(v15 + 60);
      v16 = *(_DWORD *)(v15 + 64);
    }
    v19 = *(char **)(v15 + 56);
    v20 = (char *)(v17 + v12);
    v21 = *(_DWORD *)(v15 + 72);
    *(_DWORD *)(v15 + 60) = v20;
    v22 = v20 == v19;
    if ( v20 == v19 )
      v18 = *(_BYTE *)(v15 + 88);
    v23 = (unsigned int)&v20[v21] & ~v21;
    *(_DWORD *)(v15 + 60) = v23;
    if ( v22 )
      *(_BYTE *)(v15 + 88) = v18 | 2;
    if ( v23 - *(_DWORD *)(v15 + 52) > (unsigned int)(v16 - *(_DWORD *)(v15 + 52)) )
    {
      v23 = v16;
      *(_DWORD *)(v15 + 60) = v16;
    }
    *(_DWORD *)(v15 + 56) = v23;
  }
  else
  {
    v19 = (char *)sub_93028(24 * v6);
  }
  *(_DWORD *)(*(_DWORD *)(v57 + 24) + 24) = v19;
  if ( v9 )
  {
    v24 = &v19[v12];
    do
    {
      v25 = v9 + 2;
      v9 = (_DWORD *)*v9;
      v26 = *v25;
      v27 = v25[1];
      v28 = v25[2];
      v29 = v25[3];
      v25 += 4;
      v24 -= 24;
      *(_DWORD *)v24 = v26;
      *((_DWORD *)v24 + 1) = v27;
      *((_DWORD *)v24 + 2) = v28;
      *((_DWORD *)v24 + 3) = v29;
      v30 = v25[1];
      *((_DWORD *)v24 + 4) = *v25;
      *((_DWORD *)v24 + 5) = v30;
    }
    while ( v9 );
  }
  return v57;
}
