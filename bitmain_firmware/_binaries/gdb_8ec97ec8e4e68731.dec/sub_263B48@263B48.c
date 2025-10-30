void __fastcall sub_263B48(int a1, int a2, _DWORD *a3, char *a4, int a5, int a6, int a7)
{
  unsigned __int8 *v8; // r5
  int v9; // r8
  int v10; // r10
  int v11; // r3
  int v12; // r6
  int v13; // r5
  int v14; // r11
  int v15; // r4
  const char *v16; // r0
  __int16 *v17; // r2
  int v18; // r5
  int v19; // r8
  int i; // r3
  int v21; // r2
  __int16 *v22; // r6
  int v23; // r6
  char *v24; // r4
  int v25; // r7
  __int16 *v26; // r3
  int v27; // r4
  int v28; // r1
  int v29; // r7
  int v30; // r3
  int v31; // r1
  int v32; // r2
  int v33; // r2
  int v34; // r3
  int v35; // r6
  int v36; // r5
  _DWORD *v37; // r0
  int v38; // r0
  int v39; // r4
  _DWORD *v40; // r0
  _DWORD *v41; // r0
  int v42; // r6
  int v43; // r5
  _DWORD *v44; // r4
  int v45; // r0
  int v46; // r0
  int v47; // r4
  int v48; // r5
  int v49; // r6
  int v50; // r10
  unsigned int v51; // r2
  unsigned int v52; // r3
  int v53; // r0
  int v54; // r1
  unsigned int v55; // r12
  int v56; // r1
  __int64 v57; // r4
  int v58; // r2
  int v59; // r3
  int v60; // r0
  int v61; // r0
  int v62; // r5
  int v63; // r5
  int v64; // r0
  int v65; // r6
  const char **v69[2]; // [sp+20h] [bp-4Ch] BYREF
  char s1[68]; // [sp+28h] [bp-44h] BYREF

  v8 = (unsigned __int8 *)a3[6];
  if ( (unsigned int)*v8 - 3 > 1 )
    sub_946E0("Internal error: non-aggregate type to value_struct_elt_for_reference");
  v9 = a3[6];
  v10 = *((__int16 *)v8 + 2) - 1;
  v11 = *((_WORD *)v8 + 1) & 0x380;
  v12 = (unsigned __int16)v11;
  v13 = 24 * v10;
  v14 = v11;
  while ( 1 )
  {
    if ( v12 == 128 )
      v17 = *(__int16 **)(v9 + 28);
    else
      v17 = &word_3B4A2C;
    if ( *v17 > v10 )
    {
      v18 = v9;
      v19 = a5;
      for ( i = v14; v19; v19 = *(_DWORD *)(v21 + 20) )
      {
        v21 = *(_DWORD *)(v19 + 24);
        if ( *(_BYTE *)v21 != 1 )
          break;
      }
      if ( v12 == 128 )
      {
        v22 = *(__int16 **)(v18 + 28);
        v25 = v22[2] - 1;
        if ( v25 >= 0 )
        {
          v23 = 12 * v25;
          while ( 1 )
          {
            if ( i == 128 )
              v26 = *(__int16 **)(v18 + 28);
            else
              v26 = &word_3B4A2C;
            v24 = *(char **)(*((_DWORD *)v26 + 8) + v23);
            if ( !strncmp(v24, (const char *)&dword_3C439C, 2u) || !strncmp(v24, "op", 2u) || !strncmp(v24, "type", 4u) )
            {
              if ( sub_3102B0(v24, s1, 2) || sub_3102B0(v24, s1, 0) )
                v24 = s1;
              v18 = a3[6];
            }
            if ( !strcmp(v24, a4) )
              break;
            --v25;
            v23 -= 12;
            if ( v25 == -1 )
            {
              if ( (*(_WORD *)(v18 + 2) & 0x380) == 0x80 )
                v22 = *(__int16 **)(v18 + 28);
              else
                v22 = &word_3B4A2C;
              goto LABEL_32;
            }
            i = *(_WORD *)(v18 + 2) & 0x380;
          }
          v47 = 0;
          if ( (*(_WORD *)(v18 + 2) & 0x380) == 0x80 )
            v23 += *(_DWORD *)(*(_DWORD *)(v18 + 28) + 32);
          v48 = *(_DWORD *)(v23 + 4);
          v49 = *(_DWORD *)(v23 + 8);
          sub_172A40(a3, v25);
          if ( v19 )
          {
            if ( v48 <= 0 )
            {
              if ( !v48 )
LABEL_100:
                sub_946E0("no member function matches that type instantiation");
            }
            else
            {
              v50 = v49;
              while ( 1 )
              {
                v49 = v50;
                v51 = *(unsigned __int8 *)(v50 + 12);
                if ( (v51 & 1) == (*(_DWORD *)(v19 + 16) & 1)
                  && ((v51 >> 1) & 1) == ((*(_DWORD *)(v19 + 16) >> 1) & 1)
                  && (sub_2605B4((int *)(*(_DWORD *)(v50 + 4) + 24), (int *)(v19 + 24), 0)
                   || sub_2605B4((int *)(*(_DWORD *)(v50 + 4) + 24), (int *)(v19 + 24), 1)) )
                {
                  break;
                }
                ++v47;
                v50 += 16;
                if ( v47 == v48 )
                  goto LABEL_100;
              }
            }
          }
          else
          {
            if ( v48 <= 0 )
              sub_946E0("no matching member function");
            v58 = v49;
            v59 = -1;
            do
            {
              if ( (*(_BYTE *)(v58 + 12) & 0x10) != 0 )
              {
                if ( v59 == -1 )
                  v59 = v47;
              }
              else
              {
                if ( v59 != -1 && (*(_BYTE *)(v49 + 16 * v59 + 12) & 0x10) == 0 )
                  sub_946E0("non-unique member `%s' requires type instantiation", a4);
                v59 = v47;
              }
              ++v47;
              v58 += 16;
            }
            while ( v47 != v48 );
            v49 += 16 * v59;
          }
          v52 = *(unsigned __int16 *)(v49 + 14);
          if ( v52 == 1 )
          {
            sub_21D6B0(v69, *(char **)v49, 0, 1, 0);
            if ( !v69[0] )
              return;
            if ( a6 )
            {
              v60 = ((int (*)(void))loc_15B3A0)();
              goto LABEL_86;
            }
            ((void (*)(void))loc_15B3A0)();
          }
          else if ( v52 > 1 )
          {
            if ( a6 )
            {
              v61 = sub_170C40(*(_DWORD *)(v49 + 4));
              v62 = sub_26BB80(v61);
              sub_26BC70(v62);
              sub_26E954(v62);
              sub_FC7D4();
            }
            else
            {
              if ( a7 != 2 )
                sub_946E0("Cannot reference virtual member function \"%s\"", a4);
              sub_26BB80(*(_DWORD *)(v49 + 4));
            }
          }
          else
          {
            sub_21D6B0(v69, *(char **)v49, 0, 1, 0);
            if ( v69[0] )
            {
              v63 = ((int (__fastcall *)(const char **, _DWORD, _DWORD))loc_15B3A0)(v69[0], 0, 0);
              if ( a6 )
              {
                v64 = sub_170C40(*(_DWORD *)(v49 + 4));
                v65 = sub_26BB80(v64);
                sub_26BC70(v65);
                sub_26E954(v65);
                ((void (__fastcall *)(int))loc_26C09C)(v63);
                sub_FC7D4();
              }
            }
          }
          return;
        }
      }
      else
      {
        v22 = &word_3B4A2C;
      }
LABEL_32:
      v27 = *v22 - 1;
      if ( v27 < 0 )
      {
LABEL_42:
        sub_261834(v18, a4, a6, a7);
      }
      else
      {
        v28 = v18;
        v29 = 24 * v27;
        while ( 1 )
        {
          v30 = *(_DWORD *)(v28 + 24) + v29;
          if ( (*(_WORD *)(v28 + 2) & 0x380) == 0x80
            && (v32 = *(_DWORD *)(v28 + 28), (__int16 *)v32 != &word_3B4A2C)
            && (v33 = *(_DWORD *)(v32 + 16)) != 0
            && (((int)*(unsigned __int8 *)(v33 + (v27 >> 3)) >> (v27 & 7)) & 1) != 0 )
          {
            v31 = a2;
          }
          else
          {
            v31 = a2 + *(_QWORD *)v30 / 8LL;
          }
          if ( sub_263B48(a1, v31, *(_DWORD *)(v30 + 12), a4, v19, a6, a7) )
            break;
          --v27;
          v29 -= 24;
          v28 = a3[6];
          if ( v27 == -1 )
          {
            v18 = a3[6];
            goto LABEL_42;
          }
        }
      }
      return;
    }
    v15 = *(_DWORD *)(v9 + 24) + v13;
    v16 = *(const char **)(v15 + 16);
    if ( v16 )
    {
      if ( !strcmp(v16, a4) )
        break;
    }
    --v10;
    v13 -= 24;
  }
  if ( !sub_174F0C(v15) )
  {
    v34 = *(_DWORD *)(a3[6] + 24) + v13;
    if ( (*(_DWORD *)(v34 + 8) & 0xFFFFFFF0) != 0 )
      sub_946E0("pointers to bitfield members not allowed");
    if ( a6 )
    {
      v53 = sub_170BD4(*(_DWORD *)(v34 + 12), a1);
      v54 = *(_DWORD *)(a3[6] + 24);
      v55 = *(_DWORD *)(v54 + v13);
      v56 = *(_DWORD *)(v54 + v13 + 4);
      HIDWORD(v57) = v56 >> 3;
      LODWORD(v57) = (v55 >> 3) | (v56 << 29);
      sub_26DAF4(v53, a2, v57 + a2, (unsigned __int64)(v57 + a2) >> 32);
      return;
    }
    if ( a7 )
    {
      sub_26BB80(*(_DWORD *)(v34 + 12));
      return;
    }
    v35 = sub_263ACC((int)off_46D5A4[0]);
    if ( v35 )
    {
      v36 = sub_264340(a1, a4, 0, 1, 0);
      v37 = (_DWORD *)sub_26BC70(v36);
      v38 = sub_171258(v37);
      v39 = v38;
      if ( v38 && **(_BYTE **)(v38 + 24) == 17 )
      {
        v40 = (_DWORD *)((int (__fastcall *)(int))loc_1708E0)(v38);
        v41 = sub_1700C0(v40);
        v42 = ((int (__fastcall *)(_DWORD *, int, int))loc_2638F0)(v41, v35, 1);
        v43 = sub_26EB1C(v36);
        v44 = sub_1700C0(*(_DWORD **)(*(_DWORD *)(v39 + 24) + 20));
        v45 = sub_26EB1C(v42);
        v46 = sub_26DC9C(v44, v45 + v43);
        sub_26210C(v46);
        return;
      }
      sub_94700(
        (int)"valops.c",
        3360,
        "%s: Assertion `%s' failed.",
        "value* value_struct_elt_for_reference(type*, int, type*, const char*, type*, int, noside)",
        "type != NULL && TYPE_CODE (type) == TYPE_CODE_MEMBERPTR");
    }
    sub_946E0("Cannot reference non-static field \"%s\"", a4);
  }
  v60 = ((int (__fastcall *)(_DWORD *, int))loc_26D23C)(a3, v10);
  if ( a6 )
LABEL_86:
    sub_2616BC(v60);
}
