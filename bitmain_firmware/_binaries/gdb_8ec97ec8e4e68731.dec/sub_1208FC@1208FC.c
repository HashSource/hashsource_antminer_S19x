char *__fastcall sub_1208FC(char *result, int a2, int a3, char a4, _DWORD *a5, int *a6, void **a7)
{
  char *v8; // r5
  unsigned int v11; // r6
  unsigned int v12; // r7
  int v13; // r1
  int v14; // r3
  char v15; // r2
  unsigned int *v16; // r4
  unsigned int *v17; // r3
  int v18; // r0
  bool v19; // zf
  int v20; // r3
  int v21; // r3
  char v22; // r2
  char v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r1
  char v27; // r1
  unsigned int v28; // r6
  int v29; // r0
  int v30; // r2
  void *v31; // r3
  void *v32; // r2
  int v33; // r12
  bool v34; // zf
  int v35; // r2
  unsigned int *v36; // r3
  __int64 v37; // r0
  int v38; // r6
  const char *v39; // r0
  int v40; // r3
  char v41; // [sp+8h] [bp-3Ch]
  struct obstack *v42; // [sp+Ch] [bp-38h]
  _DWORD v43[5]; // [sp+10h] [bp-34h] BYREF
  int v44; // [sp+24h] [bp-20h]
  __int64 v45; // [sp+30h] [bp-14h]
  unsigned int v46; // [sp+38h] [bp-Ch]

  v8 = result;
  if ( !dword_4872F4 )
  {
    if ( *(_BYTE *)(a2 + 16) )
      goto LABEL_3;
    goto LABEL_31;
  }
  v38 = *(_DWORD *)sub_242FC8(result);
  v39 = (const char *)((int (__fastcall *)(int))loc_11E0F8)(a2);
  if ( *(_BYTE *)(a2 + 17) )
  {
    v40 = *(_DWORD *)a2;
    if ( *(_BYTE *)(*(_DWORD *)a2 + 17) )
    {
      ((void (__fastcall *)(const char *))loc_11E090)(v39);
      JUMPOUT(0x120BDC);
    }
  }
  else
  {
    v40 = a2;
  }
  result = (char *)sub_2594B0(v38, "Reading %s for %s\n", v39, **(const char ***)(*(_DWORD *)v40 + 148));
  if ( !*(_BYTE *)(a2 + 16) )
LABEL_31:
    result = (char *)((int (__fastcall *)(char *, int))loc_11FFD0)(v8, a2);
LABEL_3:
  v11 = *(_DWORD *)(a2 + 4);
  if ( v11 < v11 + *(_DWORD *)(a2 + 8) )
  {
    v12 = *(_DWORD *)(a2 + 4);
    v41 = a4 & 1;
    v42 = (struct obstack *)(v8 + 48);
    do
    {
      sub_1207CC((int)v43, a2, a3, v12, 0);
      v28 = v12 - v11;
      if ( v44 == 2 )
      {
        v29 = *((_DWORD *)v8 + 16);
        v30 = *((_DWORD *)v8 + 15);
        if ( (unsigned int)(v29 - v30) <= 0x3F )
        {
          obstack_newchunk(v42, 64);
          v30 = *((_DWORD *)v8 + 15);
          v29 = *((_DWORD *)v8 + 16);
        }
        v31 = (void *)*((_DWORD *)v8 + 14);
        v32 = (void *)(v30 + 64);
        v33 = *((_DWORD *)v8 + 18);
        *((_DWORD *)v8 + 15) = v32;
        v34 = v32 == v31;
        if ( v32 == v31 )
          v27 = v8[88];
        v35 = ((unsigned int)v32 + v33) & ~v33;
        *((_DWORD *)v8 + 15) = v35;
        if ( v34 )
          v8[88] = v27 | 2;
        if ( v35 - *((_DWORD *)v8 + 13) > (unsigned int)(v29 - *((_DWORD *)v8 + 13)) )
        {
          v35 = v29;
          *((_DWORD *)v8 + 15) = v29;
        }
        *((_DWORD *)v8 + 14) = v35;
        v36 = (unsigned int *)memset(v31, 0, 0x40u);
        v37 = v45;
        v16 = v36;
        v36[10] = v46;
        *((_QWORD *)v36 + 4) = v37;
      }
      else
      {
        v13 = *((_DWORD *)v8 + 16);
        v14 = *((_DWORD *)v8 + 15);
        v15 = v13 - v14;
        if ( (unsigned int)(v13 - v14) <= 0x1F )
        {
          obstack_newchunk(v42, 32);
          v14 = *((_DWORD *)v8 + 15);
          v13 = *((_DWORD *)v8 + 16);
        }
        v16 = (unsigned int *)*((_DWORD *)v8 + 14);
        v17 = (unsigned int *)(v14 + 32);
        v18 = *((_DWORD *)v8 + 18);
        *((_DWORD *)v8 + 15) = v17;
        v19 = v17 == v16;
        if ( v17 == v16 )
          v15 = v8[88];
        v20 = ((unsigned int)v17 + v18) & ~v18;
        *((_DWORD *)v8 + 15) = v20;
        if ( v19 )
          v8[88] = v15 | 2;
        if ( v20 - *((_DWORD *)v8 + 13) > (unsigned int)(v13 - *((_DWORD *)v8 + 13)) )
        {
          v20 = v13;
          *((_DWORD *)v8 + 15) = v13;
        }
        *((_DWORD *)v8 + 14) = v20;
        memset(v16, 0, 0x20u);
      }
      v21 = v44;
      v22 = *((_BYTE *)v16 + 10);
      *v16 = v28;
      v16[5] = (unsigned int)v8;
      v23 = v22 & 0xFB | (4 * ((__clz(v21 - 2) & 0x20) != 0));
      v24 = v43[0];
      *((_BYTE *)v16 + 10) = v23;
      v25 = v43[4];
      v16[3] = a2;
      result = (char *)*a7;
      v16[1] = v24 + v25;
      *((_BYTE *)v16 + 10) = v23 & 0xF7 | (8 * (v41 & 1));
      v26 = *a6;
      if ( *a6 == *a5 )
      {
        *a5 = 2 * v26;
        result = (char *)sub_93050(result, 8 * v26);
        v26 = *a6;
        *a7 = result;
      }
      v11 = *(_DWORD *)(a2 + 4);
      *(_DWORD *)&result[4 * v26] = v16;
      *a6 = v26 + 1;
      v12 += v16[1];
    }
    while ( v12 < v11 + *(_DWORD *)(a2 + 8) );
  }
  return result;
}
