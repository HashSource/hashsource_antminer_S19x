_DWORD *__fastcall sub_1D09E4(_DWORD *a1, unsigned int a2, int a3, int a4, int a5)
{
  int v6; // r0
  int v10; // r0
  _DWORD *v11; // r4
  int v12; // r3
  int v14; // r0
  int v15; // r2
  int v16; // r3
  unsigned int v17; // r3
  unsigned int v18; // r9
  _DWORD *i; // r5
  int v20; // r0
  int v21; // r1
  unsigned int v22; // r3
  __int64 v23; // r0
  int v24; // lr
  int v25; // r3
  int v26; // r5
  int v27; // r6
  int v28; // r2
  int v29; // r0
  int v30; // r4
  int v31; // r0
  const char *v32; // r0
  int v33; // [sp+1Ch] [bp-34h]
  int v35; // [sp+20h] [bp-30h]
  int v36; // [sp+24h] [bp-2Ch]

  v6 = a1[7];
  if ( !v6 )
    goto LABEL_45;
  v10 = sub_B71F0(v6);
  v11 = (_DWORD *)v10;
  if ( !v10 )
    goto LABEL_45;
  v12 = a4;
  if ( a4 )
    v12 = 1;
  if ( !dword_489690 )
    v12 = 0;
  if ( !a3 )
    v12 = 0;
  if ( v12 )
  {
    v14 = ((int (__fastcall *)(_DWORD *, int, unsigned int, int))loc_1CEC9C)(a1, v10, a2, a3);
    if ( !v14 )
      goto LABEL_45;
    v15 = *(__int16 *)(a4 + 22);
    v16 = *(_DWORD *)(a4 + 8);
    if ( v15 == -1 )
    {
      sub_94700((int)"psymtab.c", 338, "Section index is uninitialized", v16);
LABEL_36:
      v23 = sub_94700((int)"psymtab.c", 271, "Section index is uninitialized", v22, a4);
      v33 = v24;
      v26 = v25;
      v27 = v23;
      v29 = ((int (__fastcall *)(_DWORD, int, int, _DWORD, int))sub_1D09E4)(v23, v25, v35, HIDWORD(v23), v28);
      v30 = v29;
      if ( v29 )
      {
        if ( v36 && *(_BYTE *)(v29 + 52) )
        {
          v31 = sub_1B7250(v27);
          v32 = (const char *)sub_25AC8C(v31, v26);
          sub_946B0("(Internal error: pc %s in read in psymtab, but not in symtab.)\n", v32);
        }
        sub_1CE1F0(v27, v30);
      }
      __asm { POP             {R4-R6,PC} }
    }
    if ( *(_DWORD *)(v14 + 8) != v16 + *(_DWORD *)(*(_DWORD *)(a5 + 144) + 4 * v15) )
    {
LABEL_45:
      v11 = (_DWORD *)sub_1D0878(a1, 1)[6];
      if ( v11 )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)v11 + 53) )
          {
            v17 = v11[4];
            if ( v17 <= a2 && v11[5] > a2 )
              break;
          }
          v11 = (_DWORD *)*v11;
          if ( !v11 )
            return v11;
        }
        if ( ((a3 == 0) & ~a1[3]) == 0 && a4 )
        {
          v18 = v11[4];
          for ( i = v11; ; v17 = i[4] )
          {
            if ( a2 >= v17 && a2 < i[5] )
            {
              v20 = ((int (__fastcall *)(_DWORD *, _DWORD *, unsigned int, int))loc_1CEC9C)(a1, i, a2, a3);
              if ( v20 )
              {
                v21 = *(__int16 *)(a4 + 22);
                v22 = *(_DWORD *)(v20 + 8);
                if ( v21 == -1 )
                  goto LABEL_36;
                if ( v22 == *(_DWORD *)(a4 + 8) + *(_DWORD *)(*(_DWORD *)(a5 + 144) + 4 * v21) )
                  return i;
              }
              else
              {
                v22 = i[4];
              }
              if ( v22 > v18 )
              {
                v18 = v22;
                v11 = i;
              }
            }
            i = (_DWORD *)*i;
            if ( !i )
              return v11;
          }
        }
      }
    }
  }
  return v11;
}
