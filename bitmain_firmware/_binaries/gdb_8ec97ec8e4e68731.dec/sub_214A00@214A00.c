int __fastcall sub_214A00(int *a1)
{
  bool v1; // zf
  __int64 v3; // r0
  __int64 v4; // r0
  int v5; // r2
  int v6; // r3
  __int64 v7; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r8
  int v11; // r5
  int v12; // r3
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r3
  unsigned int v17; // r9
  unsigned int *v18; // r0
  int v19; // lr
  _DWORD *v20; // r8
  int *v21; // r5
  int v22; // r10
  int v23; // r7
  int v24; // r6
  int *v25; // r9
  int *i; // r2
  int v27; // r4
  int v28; // r3
  int v29; // r7
  int v30; // r6
  int v31; // r8
  unsigned int v32; // r10
  int v33; // r12
  unsigned int *v34; // r1
  int v35; // r6
  int v36; // r2
  int v37; // r6
  int v38; // r6
  int v39; // r4
  int v41[2]; // [sp+8h] [bp-18h] BYREF
  int v42[2]; // [sp+10h] [bp-10h] BYREF
  int v43; // [sp+18h] [bp-8h] BYREF
  int v44; // [sp+1Ch] [bp-4h]

  v1 = a1 == 0;
  LODWORD(v3) = dword_4896DC;
  if ( !v1 )
  {
    if ( !dword_4896DC )
      goto LABEL_10;
    sub_1B141C(v41, "_ovly_table", 0, 0);
    if ( !v41[0] )
      goto LABEL_44;
    v5 = *(__int16 *)(v41[0] + 22);
    v6 = *(_DWORD *)(v41[0] + 8);
    if ( v5 == -1 )
    {
      v3 = sub_94700((int)"symfile.c", 3578, "Section index is uninitialized", v6);
      v38 = *(_DWORD *)(HIDWORD(v3) + 148);
      if ( (*(_DWORD *)(HIDWORD(v3) + 20) & 4) != 0 )
      {
        v39 = HIDWORD(v3);
        sub_2ADCFC(v38, sub_210B08, 0);
        LODWORD(v3) = sub_2AE08C(v38, v39);
      }
      return v3;
    }
    if ( v6 + *(_DWORD *)(*(_DWORD *)(v41[1] + 144) + 4 * v5) == dword_4896E0 )
    {
      v29 = *a1;
      v30 = sub_1B7250(a1[1]);
      v31 = ((int (*)(void))loc_165EE0)();
      v32 = ((int (__fastcall *)(int))loc_165BB8)(v30);
      LODWORD(v3) = dword_4896DC;
      if ( dword_4896E4 )
      {
        v33 = 0;
        v34 = (unsigned int *)dword_4896DC;
        while ( 1 )
        {
          v35 = 16 * v33;
          if ( *(_DWORD *)(dword_4896DC + 16 * v33) == *(_DWORD *)(v29 + 28) && v34[2] == *(_DWORD *)(v29 + 32) )
            break;
          ++v33;
          v34 += 4;
          if ( v33 == dword_4896E4 )
            goto LABEL_8;
        }
        sub_2114A0(dword_4896E0 + v33 * (v31 / 8), v34, 4, v31 / 8, v32);
        LODWORD(v3) = dword_4896DC;
        v36 = *(_DWORD *)(dword_4896DC + v35);
        v37 = dword_4896DC + v35;
        if ( v36 == *(_DWORD *)(v29 + 28) && *(_DWORD *)(v37 + 8) == *(_DWORD *)(v29 + 32) )
        {
          a1[2] = *(_DWORD *)(v37 + 12);
          return v3;
        }
      }
    }
    else
    {
      LODWORD(v3) = dword_4896DC;
    }
  }
LABEL_8:
  if ( (_DWORD)v3 )
    free((void *)v3);
LABEL_10:
  dword_4896E4 = 0;
  dword_4896DC = 0;
  dword_4896E0 = 0;
  sub_1B141C(v42, "_novlys", 0, 0);
  v8 = v42[0];
  if ( !v42[0] )
    goto LABEL_42;
  sub_1B1BE8(&v43, "_ovly_table");
  v9 = v43;
  v10 = v44;
  if ( !v43 )
LABEL_44:
    sub_946E0(
      "Error reading inferior's overlay table: couldn't find `_ovly_table' array\n"
      "in inferior.  Use `overlay manual' mode.",
      HIDWORD(v4));
  v11 = sub_1B7250(v44);
  v12 = ((int (*)(void))loc_165EE0)();
  v13 = v11;
  v14 = v12 / 8;
  v15 = ((int (__fastcall *)(int))loc_165BB8)(v13);
  v16 = *(__int16 *)(v8 + 22);
  v17 = v15;
  if ( v16 == -1 )
  {
    v4 = sub_94700((int)"symfile.c", 3502, "Section index is uninitialized");
    goto LABEL_44;
  }
  dword_4896E4 = sub_FA920(*(_DWORD *)(v8 + 8) + *(_DWORD *)(*(_DWORD *)(v42[1] + 144) + 4 * v16), 4, v15);
  v18 = (unsigned int *)sub_93028(16 * dword_4896E4);
  v19 = *(__int16 *)(v9 + 22);
  dword_4896DC = (int)v18;
  if ( v19 == -1 )
  {
    v7 = sub_94700((int)"symfile.c", 3506, "Section index is uninitialized");
LABEL_42:
    sub_946E0(
      "Error reading inferior's overlay table: couldn't find `_novlys' variable\n"
      "in inferior.  Use `overlay manual' mode.",
      HIDWORD(v7));
  }
  dword_4896E0 = *(_DWORD *)(v9 + 8) + *(_DWORD *)(*(_DWORD *)(v10 + 144) + 4 * v19);
  LODWORD(v3) = sub_2114A0(dword_4896E0, v18, 4 * dword_4896E4, v14, v17);
  v20 = *(_DWORD **)(dword_487D2C + 36);
  if ( v20 )
  {
    v21 = (int *)v20[43];
    v22 = dword_489690;
    v23 = dword_4896E4;
    v24 = dword_4896DC;
    v25 = (int *)v20[42];
    while ( 1 )
    {
      for ( i = v25; v21 > i; i += 3 )
      {
        v27 = *i;
        if ( *i )
        {
          if ( v22 )
          {
            LODWORD(v3) = sub_2117A4(i);
            if ( (_DWORD)v3 )
            {
              if ( v23 )
              {
                HIDWORD(v3) = v24;
                v28 = 0;
                while ( 1 )
                {
                  LODWORD(v3) = *(_DWORD *)(v24 + 16 * v28);
                  if ( (_DWORD)v3 == *(_DWORD *)(v27 + 28) )
                  {
                    LODWORD(v3) = *(_DWORD *)(v27 + 32);
                    if ( *(_DWORD *)(HIDWORD(v3) + 8) == (_DWORD)v3 )
                      break;
                  }
                  ++v28;
                  HIDWORD(v3) += 16;
                  if ( v28 == v23 )
                    goto LABEL_20;
                }
                i[2] = *(_DWORD *)(HIDWORD(v3) + 12);
              }
            }
          }
        }
LABEL_20:
        ;
      }
      if ( v21 == i )
      {
        v20 = (_DWORD *)*v20;
        if ( !v20 )
          return v3;
        i = (int *)v20[43];
        v25 = (int *)v20[42];
      }
      else if ( (int *)v20[43] != i )
      {
        return v3;
      }
      v21 = i;
    }
  }
  return v3;
}
