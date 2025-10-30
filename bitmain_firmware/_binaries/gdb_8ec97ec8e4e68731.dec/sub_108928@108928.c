int __fastcall sub_108928(int result, int a2)
{
  int v3; // r4
  int v4; // r3
  _DWORD *v5; // r8
  int v6; // r1
  int v7; // r0
  _DWORD *v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r1
  int *v12; // r3
  int v13; // r7
  int v14; // r4
  _DWORD *v15; // r9
  __int64 v16; // r0
  int v17; // r3
  char *v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r4
  const char *v22; // r10
  int v24; // r3
  int v25; // r2
  int v26; // r4
  int v27; // r0
  char v28; // r2
  bool v29; // zf
  int v30; // r3
  _DWORD *v31; // r0
  int v32; // r1
  int v33; // r0
  _DWORD *v34; // r0
  int v35; // r0
  _DWORD *v36; // r0
  int v37; // r0
  _DWORD *v38; // r0
  int v39; // r7
  int (__fastcall *v40)(char *); // r3
  char *v41; // r0
  int v42; // r3
  int v43; // r3
  const char *v44; // r7
  int v45; // r0
  unsigned int v46; // [sp+14h] [bp-30h]
  int v47; // [sp+18h] [bp-2Ch]
  unsigned int v48; // [sp+24h] [bp-20h]
  unsigned int v49; // [sp+28h] [bp-1Ch]
  _BYTE v50[4]; // [sp+30h] [bp-14h] BYREF
  int v51; // [sp+34h] [bp-10h] BYREF
  char v52; // [sp+38h] [bp-Ch]
  char v53; // [sp+39h] [bp-Bh]
  unsigned __int16 v54; // [sp+3Ah] [bp-Ah]
  unsigned int v55; // [sp+3Ch] [bp-8h]

  v3 = *(unsigned __int8 *)(a2 + 52);
  if ( !*(_BYTE *)(a2 + 52) )
  {
    v4 = *(_DWORD *)(a2 + 32);
    v5 = (_DWORD *)result;
    if ( v4 > 0 )
    {
      do
      {
        v6 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v3);
        if ( !*(_BYTE *)(v6 + 52) )
        {
          if ( dword_48A514 )
          {
            v34 = (_DWORD *)sub_242F8C(result);
            sub_25A6BC(&word_3E1F84, *v34);
            v35 = sub_259B58("");
            v36 = (_DWORD *)sub_242F8C(v35);
            sub_25A6BC("and ", *v36);
            sub_259B58("");
            sub_259F10("%s...", *(const char **)(*(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v3) + 4));
            v37 = sub_259B58("");
            v38 = (_DWORD *)sub_242F8C(v37);
            sub_25680C(*v38);
            v6 = *(_DWORD *)(*(_DWORD *)(a2 + 28) + 4 * v3);
          }
          result = sub_108928(v5, v6);
          v4 = *(_DWORD *)(a2 + 32);
        }
        ++v3;
      }
      while ( v4 > v3 );
    }
    if ( !*(_DWORD *)(*(_DWORD *)(a2 + 64) + 4) )
      goto LABEL_6;
    v7 = nullsub_23();
    ((void (__fastcall *)(int))loc_E6834)(v7);
    v8 = *(_DWORD **)(a2 + 64);
    v9 = v5[9];
    v10 = v8[3];
    v11 = v8[2];
    dword_47B268 = v8[5];
    dword_47B258 = v11;
    sub_2A8A04(v9, v11, v10, v10 >> 31, 0);
    v12 = *(int **)(a2 + 64);
    dword_47B2A0 = (int)v5;
    v13 = *v12;
    v14 = v12[1];
    v48 = *(_DWORD *)(a2 + 16);
    v49 = *(_DWORD *)(a2 + 20);
    v47 = v5[36];
    dword_47B264 = *(_DWORD *)(sub_1B6B24(v5, dword_47B26C) + 12);
    sub_E6538(0);
    v15 = (_DWORD *)v5[9];
    dword_47B25C = 0;
    dword_47B260 = (int)v15;
    dword_47B254 = 0;
    *(_QWORD *)&dword_47B244 = (unsigned int)(v13 + v14);
    if ( byte_47898C || v13 < dword_47B258 )
    {
      sub_1055E4(v13);
      byte_47898D = 0;
    }
    else
    {
      sub_1055E4(v13 - dword_47B258);
      sub_104F0C(v15);
      v39 = dword_47B25C;
      v40 = *(int (__fastcall **)(char *))(v15[1] + 76);
      ++dword_47B25C;
      v39 *= 12;
      v53 = 0;
      v51 = v40((char *)&unk_47B2A4 + v39);
      v52 = byte_47B2A8[v39];
      v54 = (*(int (__fastcall **)(char *))(v15[1] + 88))((char *)&unk_47B2A4 + v39 + 6);
      v29 = sub_2A78D4(v15) == 0;
      v41 = (char *)&unk_47B2A4 + v39 + 8;
      v42 = v15[1];
      if ( v29 )
        v45 = (*(int (__fastcall **)(char *))(v42 + 76))(v41);
      else
        v45 = (*(int (__fastcall **)(char *))(v42 + 80))(v41);
      v43 = v5[49];
      v55 = v45;
      v5[49] = v43 + 1;
      v16 = __PAIR64__(&byte_47898D, (unsigned int)sub_105530((int)v5, &v51));
      v44 = (const char *)v16;
      byte_47898D = 0;
      if ( v52 == 4 )
      {
        if ( !strcmp((const char *)v16, "gcc_compiled.") )
        {
          byte_47898D = 1;
        }
        else if ( !strcmp(v44, "gcc2_compiled.") )
        {
          byte_47898D = 2;
        }
        if ( *(unsigned __int8 *)v44 == *(unsigned __int8 *)(*(_DWORD *)(dword_47B260 + 4) + 24) )
          ++v44;
        if ( !strncmp(v44, "__gnu_compiled", 0xEu) )
          byte_47898D = 2;
      }
    }
    v17 = dword_47B25C;
    if ( dword_47B25C == dword_47B254 )
    {
      sub_104F0C(v15);
      v17 = dword_47B25C;
    }
    if ( byte_47B2A8[12 * v17] == 100 )
    {
      v18 = (char *)sub_347418(v14, dword_47B258);
      v46 = (unsigned int)v18;
      dword_478988 = 0;
      if ( v18 )
      {
        do
        {
          sub_258BD4(v18);
          v24 = dword_47B25C;
          if ( dword_47B25C == dword_47B254 )
          {
            sub_104F0C(v15);
            v24 = dword_47B25C;
          }
          v25 = v15[1];
          v26 = 12 * v24;
          dword_47B25C = v24 + 1;
          v27 = (*(int (__fastcall **)(char *))(v25 + 76))((char *)&unk_47B2A4 + 12 * v24);
          v28 = *((_BYTE *)&unk_47B2A4 + v26 + 4);
          v53 = 0;
          v51 = v27;
          v52 = v28;
          v54 = (*(int (__fastcall **)(char *))(v15[1] + 88))((char *)&unk_47B2A4 + v26 + 6);
          v29 = sub_2A78D4(v15) == 0;
          v30 = v15[1];
          if ( v29 )
            v19 = (*(int (__fastcall **)(char *))(v30 + 76))((char *)&unk_47B2A4 + v26 + 8);
          else
            v19 = (*(int (**)(void))(v30 + 80))();
          v20 = v5[49];
          v55 = v19;
          v5[49] = v20 + 1;
          v21 = *((unsigned __int8 *)&unk_47B2A4 + v26 + 4);
          v18 = (char *)sub_105530((int)v5, &v51);
          v22 = v18;
          if ( (v21 & 0xE0) != 0 )
          {
            v18 = (char *)sub_107954(v21, (int *)v54, v55, v18, v47, v5, *(_DWORD *)(*(_DWORD *)(a2 + 64) + 24));
          }
          else if ( v21 == 4 )
          {
            v18 = (char *)strcmp(v18, "gcc_compiled.");
            if ( v18 )
            {
              v18 = (char *)strcmp(v22, "gcc2_compiled.");
              if ( !v18 )
                byte_47898D = 2;
            }
            else
            {
              byte_47898D = 1;
            }
          }
        }
        while ( v46 > ++dword_478988 );
      }
      if ( dword_478964 )
      {
        if ( v48 < dword_478964 )
          dword_478964 = v48;
      }
      else
      {
        dword_478964 = v48;
      }
      v32 = v5[38];
      if ( v32 != -1 )
      {
        v33 = sub_E7454(v49, v32);
        *(_DWORD *)(a2 + 56) = v33;
        sub_20C194(v33);
        dword_47B2A0 = 0;
        result = sub_E5BCC((int)v50);
LABEL_6:
        *(_BYTE *)(a2 + 52) = 1;
        return result;
      }
      v16 = sub_94700((int)"dbxread.c", 2448, "sect_index_text not initialized");
    }
    sub_946E0("First symbol in segment of executable not a source symbol", HIDWORD(v16));
  }
  v31 = (_DWORD *)sub_242FB4(result);
  return sub_2594B0(*v31, "Psymtab for %s already read in.  Shouldn't happen.\n", *(const char **)(a2 + 4));
}
