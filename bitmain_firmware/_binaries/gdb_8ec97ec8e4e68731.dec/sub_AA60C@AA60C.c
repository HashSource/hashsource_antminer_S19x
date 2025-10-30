int __fastcall sub_AA60C(int a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // r6
  int v5; // r4
  int v6; // r5
  int v9; // r0
  int v10; // r0
  int v11; // r10
  int v12; // r0
  int v13; // r3
  char v14; // r0
  __int16 v15; // r1
  size_t v16; // r2
  __int16 v17; // r1
  int v18; // r9
  int v19; // r12
  int v20; // r3
  void *v21; // r1
  void *v22; // r3
  int v23; // lr
  bool v24; // zf
  int v25; // r3
  int v26; // r12
  int v27; // r9
  _DWORD *v28; // lr
  int v29; // r3
  int v30; // r12
  int v31; // r2
  int v32; // r3
  int v33; // r2
  int v34; // r2
  __int64 v35; // r0
  int v36; // r3
  int v37; // r2
  int v38; // r12
  int v39; // r11
  int v40; // r0
  void *v41; // r0
  int v42; // r7
  int v43; // r3
  _DWORD *v44; // r6
  int v45; // r8
  _DWORD *v46; // r12
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r3
  _DWORD *v51; // lr
  int v52; // r1
  int v53; // [sp+Ch] [bp-10h]

  v4 = __PAIR64__(a4, a2);
  v5 = a1;
  if ( (*(_BYTE *)(*(_DWORD *)(a1 + 24) + 2) & 8) != 0 )
    return v5;
  v9 = sub_A0ED8(a1);
  if ( !v9 )
  {
    v10 = sub_A0380(v5);
    if ( v10 < 0 )
    {
      v6 = v5;
      *(_BYTE *)(*(_DWORD *)(v5 + 24) + 2) |= 8u;
      return v6;
    }
    if ( v4 )
    {
      v53 = sub_26C1E0(v10);
      v39 = *(__int16 *)(*(_DWORD *)(v5 + 24) + 4);
      v40 = sub_A0380(v5);
      v11 = v40;
      if ( v40 != -1 )
      {
        if ( HIDWORD(v4) )
          goto LABEL_12;
        goto LABEL_11;
      }
    }
    else if ( a3 )
    {
      v53 = sub_26C1E0(v10);
      v11 = sub_A0380(v5);
      if ( v11 != -1 )
      {
        v39 = *(__int16 *)(*(_DWORD *)(v5 + 24) + 4);
LABEL_11:
        HIDWORD(v4) = sub_26DD30(v5, v4, a3);
        v5 = sub_26BC70(HIDWORD(v4));
LABEL_12:
        v12 = sub_16FF58(v5);
        v13 = *(_DWORD *)(v12 + 24);
        v6 = v12;
        v14 = 1;
        v15 = *(_WORD *)(v13 + 2);
        *(_DWORD *)(v13 + 28) = &word_3B4A2C;
        *(_WORD *)(v13 + 4) = v39;
        v16 = 24 * v39;
        v17 = v15 & 0xFC7F | 0x80;
        *(_BYTE *)v13 = 3;
        *(_WORD *)(v13 + 2) = v17;
        if ( (v17 & 0x10) != 0 )
        {
          v18 = *(_DWORD *)(v13 + 16);
          v19 = *(_DWORD *)(v18 + 64);
          v20 = *(_DWORD *)(v18 + 60);
          if ( v19 - v20 < v16 )
          {
            obstack_newchunk((struct obstack *)(v18 + 48), 24 * v39);
            v20 = *(_DWORD *)(v18 + 60);
            v19 = *(_DWORD *)(v18 + 64);
            v16 = 24 * v39;
          }
          v21 = *(void **)(v18 + 56);
          v22 = (void *)(v20 + v16);
          v23 = *(_DWORD *)(v18 + 72);
          *(_DWORD *)(v18 + 60) = v22;
          v24 = v22 == v21;
          if ( v22 == v21 )
            v14 = *(_BYTE *)(v18 + 88);
          v25 = ((unsigned int)v22 + v23) & ~v23;
          *(_DWORD *)(v18 + 60) = v25;
          if ( v24 )
            *(_BYTE *)(v18 + 88) = v14 | 2;
          if ( v25 - *(_DWORD *)(v18 + 52) > (unsigned int)(v19 - *(_DWORD *)(v18 + 52)) )
          {
            v25 = v19;
            *(_DWORD *)(v18 + 60) = v19;
          }
          *(_DWORD *)(v18 + 56) = v25;
        }
        else
        {
          v41 = sub_93028(24 * v39);
          v16 = 24 * v39;
          v21 = v41;
        }
        v26 = *(_DWORD *)(v5 + 24);
        v27 = 24 * v11;
        *(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) = v21;
        memcpy(v21, *(const void **)(v26 + 24), v16);
        v28 = *(_DWORD **)(v5 + 24);
        v29 = *(_DWORD *)(v6 + 24);
        v30 = *(_DWORD *)(v5 + 20);
        v31 = v28[2];
        if ( !v31 )
          v31 = v28[3];
        *(_BYTE *)(v29 + 2) |= 8u;
        *(_DWORD *)(v29 + 12) = 0;
        *(_DWORD *)(v29 + 8) = v31;
        v32 = v28[6];
        *(_DWORD *)(v6 + 20) = v30;
        v33 = *(_QWORD *)(v32 + 24 * v11) / 8LL;
        if ( (_DWORD)v4 )
          LODWORD(v4) = v4 + v33;
        if ( a3 )
          v34 = a3 + v33;
        else
          v34 = 0;
        LODWORD(v35) = sub_A9B0C(*(_DWORD *)(v32 + v27 + 12), v4, v34, SHIDWORD(v4));
        if ( (_DWORD)v35 )
        {
          HIDWORD(v35) = "S";
          v36 = *(_DWORD *)(v6 + 20) + *(_DWORD *)(v35 + 20);
          v37 = *(_DWORD *)(*(_DWORD *)(v6 + 24) + 24) + v27;
          v38 = *(_DWORD *)(v37 + 8);
          *(_QWORD *)(v37 + 12) = v35;
          *(_DWORD *)(v37 + 8) = v38 & 0xF;
          *(_DWORD *)(v6 + 20) = v36;
        }
        else
        {
          v42 = *(_DWORD *)(v6 + 24);
          if ( v11 + 1 < v39 )
          {
            v43 = *(_DWORD *)(v42 + 24);
            v44 = (_DWORD *)(v43 + v27);
            v45 = v43 + 24 * v39 - 24;
            do
            {
              v46 = v44;
              v47 = v44[6];
              v48 = v44[7];
              v49 = v44[8];
              v50 = v44[9];
              v51 = v44 + 10;
              v44 += 6;
              *v46 = v47;
              v46[1] = v48;
              v46[2] = v49;
              v46[3] = v50;
              v46 += 4;
              v52 = v51[1];
              *v46 = *v51;
              v46[1] = v52;
            }
            while ( (_DWORD *)v45 != v44 );
          }
          v36 = *(_DWORD *)(v6 + 20);
          --*(_WORD *)(v42 + 4);
        }
        *(_DWORD *)(v6 + 20) = v36 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 24) + 24) + v27 + 12) + 20);
        sub_26C300(v53);
        return v6;
      }
    }
    return v5;
  }
  return sub_A9F40(v9, v4, a3, SHIDWORD(v4), 1);
}
