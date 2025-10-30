int __fastcall sub_6A600(const char *a1, int a2)
{
  int v2; // r4
  int v3; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r10
  int v7; // r11
  int result; // r0
  int v11; // r3
  int v12; // r4
  int v13; // r8
  __int64 v14; // r2
  void *v15; // r7
  size_t v16; // r0
  size_t v17; // r9
  int v18; // r2
  int v19; // r3
  int v20; // r7
  int v21; // r0
  bool v22; // zf
  int v23; // r3
  _DWORD *v24; // r0
  _DWORD *v25; // r9
  _DWORD *v26; // r8
  int v27; // r0
  int v28; // r4
  const char *v29; // r9
  const char *v30; // r0
  __int64 v31; // r0
  int v32; // lr
  int v33; // r4
  int v34; // r0
  int v35; // r7
  int v36; // r6
  int v37; // r9
  int v38; // r0
  int v39; // r3
  int v40; // r11
  int v41; // r5
  int v42; // r10
  _DWORD *v43; // r0
  int v44; // r3
  int v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // r9
  int v49; // r3
  bool v50; // zf
  int v51; // r0
  int v52; // r6
  __int64 v53; // r0
  int v54; // [sp+Ch] [bp-7Ch]
  _BYTE v55[44]; // [sp+20h] [bp-68h] BYREF
  int v56; // [sp+4Ch] [bp-3Ch]
  int v57; // [sp+50h] [bp-38h]
  const char *v58; // [sp+54h] [bp-34h]
  int v59; // [sp+58h] [bp-30h]
  int v60; // [sp+5Ch] [bp-2Ch]
  int v61; // [sp+60h] [bp-28h]
  int v62; // [sp+64h] [bp-24h]
  int v63; // [sp+68h] [bp-20h]
  int v64; // [sp+6Ch] [bp-1Ch]
  int v65; // [sp+80h] [bp-8h] BYREF
  int v66; // [sp+84h] [bp-4h]

  sub_1B240C(&v65, a2);
  result = v65;
  if ( !v65 )
    return result;
  v11 = *(__int16 *)(v65 + 22);
  if ( v11 != -1 )
  {
    v12 = v66;
    if ( *(_DWORD *)(v65 + 8) + *(_DWORD *)(*(_DWORD *)(v66 + 144) + 4 * v11) != a2 )
      return 0;
    if ( v11 < 0 )
      __und(0);
    result = strcmp(**(const char ***)(*(_DWORD *)(v66 + 168) + 12 * v11), ".plt");
    if ( result )
    {
      v13 = sub_1B6B24(v12, dword_4748B8);
      if ( !v13 )
      {
        v13 = sub_323980(1, &loc_6AAB8, sub_6A554, 0, v12 + 48, sub_25AEEC, nullsub_44);
        sub_1B6B1C(v12, dword_4748B8, v13);
      }
      v14 = *(_QWORD *)(v12 + 60);
      if ( (unsigned int)(HIDWORD(v14) - v14) <= 3 )
      {
        obstack_newchunk((struct obstack *)(v12 + 48), 4);
        LODWORD(v14) = *(_DWORD *)(v12 + 60);
      }
      *(_DWORD *)v14 = a2;
      v15 = (void *)(*(_DWORD *)(v12 + 60) + 4);
      *(_DWORD *)(v12 + 60) = v15;
      v16 = strlen(a1);
      v17 = v16;
      if ( v16 + 1 > *(_DWORD *)(v12 + 64) - (int)v15 )
      {
        obstack_newchunk((struct obstack *)(v12 + 48), v16 + 1);
        v15 = *(void **)(v12 + 60);
      }
      memcpy(v15, a1, v17);
      v18 = *(_DWORD *)(v12 + 60);
      *(_DWORD *)(v12 + 60) = v18 + v17 + 1;
      *(_BYTE *)(v18 + v17) = 0;
      v19 = *(_DWORD *)(v12 + 60);
      v20 = *(_DWORD *)(v12 + 56);
      v21 = *(_DWORD *)(v12 + 64);
      v22 = v19 == v20;
      if ( v19 == v20 )
        LOBYTE(v18) = *(_BYTE *)(v12 + 88);
      v23 = (v19 + *(_DWORD *)(v12 + 72)) & ~*(_DWORD *)(v12 + 72);
      *(_DWORD *)(v12 + 60) = v23;
      if ( v22 )
        *(_BYTE *)(v12 + 88) = v18 | 2;
      if ( v23 - *(_DWORD *)(v12 + 52) > (unsigned int)(v21 - *(_DWORD *)(v12 + 52)) )
      {
        v23 = v21;
        *(_DWORD *)(v12 + 60) = v21;
      }
      *(_DWORD *)(v12 + 56) = v23;
      v24 = (_DWORD *)sub_324030(v13, v20, 1);
      v25 = (_DWORD *)*v24;
      v26 = v24;
      if ( *v24 )
      {
        v27 = sub_1B7250(v12);
        v28 = v27;
        if ( *v25 != a2 )
        {
          v29 = (const char *)sub_25AC8C(v27, *v25);
          v30 = (const char *)sub_25AC8C(v28, a2);
          sub_946B0(
            "gnu-indirect-function \"%s\" has changed its resolved function_address from %s to %s",
            a1,
            v29,
            v30);
        }
      }
      *v26 = v20;
      return 1;
    }
    return result;
  }
  v31 = sub_94700("elfread.c", 669, "Section index is uninitialized");
  v56 = v2;
  v57 = a2;
  v58 = a1;
  v59 = v3;
  v60 = v4;
  v61 = v5;
  v62 = v6;
  v63 = v7;
  v64 = v32;
  v33 = v31;
  v34 = sub_15F70C(v31, HIDWORD(v31));
  v35 = sub_15ECB4(v34);
  v36 = *(_DWORD *)(sub_1780B4(v35) + 160);
  v37 = *(_DWORD *)(*(_DWORD *)(v36 + 24) + 20);
  v38 = sub_1DDB40(dword_4878EC, dword_4878F0, dword_4878F4);
  v39 = *(_DWORD *)(v33 + 12);
  if ( v39 == 33 )
  {
    v40 = v38;
    while ( 1 )
    {
      v41 = *(_DWORD *)(v33 + 108);
      if ( v41 == v33 )
        break;
      if ( v39 != 32 )
      {
        if ( v39 != 33 )
        {
          sub_94700("elfread.c", 968, "handle_inferior_event: Invalid gnu-indirect-function breakpoint type %d", v39);
          goto LABEL_42;
        }
        ((void (__fastcall *)(int))loc_DB0B0)(v33);
      }
      v39 = *(_DWORD *)(v41 + 12);
      v33 = v41;
    }
    if ( v39 != 32 )
      goto LABEL_45;
    if ( **(_DWORD **)(v33 + 28) )
      goto LABEL_44;
    v42 = sub_26BB80(v36);
    v43 = (_DWORD *)nullsub_31(v42);
    v44 = *(_DWORD *)(v33 + 28);
    *v43 = 1;
    sub_26C178(v42, *(_DWORD *)(v44 + 72));
    v54 = sub_26BB80(v37);
    v45 = sub_26BCB8();
    ((void (__fastcall *)(int, int, int, int, int, _DWORD))loc_168BA4)(v35, v42, v37, v40, v45, 0);
    v46 = sub_26EBA8(v54);
    v47 = ((int (__fastcall *)(int, int, int *))loc_169ED8)(v35, v46, &dword_4899A0);
    v48 = ((int (__fastcall *)(int, int))loc_169FA0)(v35, v47);
    v49 = *(_DWORD *)(v33 + 72);
    v50 = v49 == 0;
    if ( v49 )
      v50 = dword_487D2C == v49;
    if ( v50 )
    {
      v51 = ((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(v33 + 76));
      sub_6A600(v51, v48);
      *(_DWORD *)(v33 + 12) = 1;
      v52 = dword_487D2C;
      sub_21DEAC(v55, v48);
      sub_D0F0C(v33, v52, v55, 1, 0, 0);
      __asm { POP             {R4-R11,PC} }
    }
  }
  else
  {
LABEL_42:
    sub_94700(
      "elfread.c",
      954,
      "%s: Assertion `%s' failed.",
      "void elf_gnu_ifunc_resolver_return_stop(breakpoint*)",
      "b->type == bp_gnu_ifunc_resolver_return");
  }
  sub_94700(
    "elfread.c",
    991,
    "%s: Assertion `%s' failed.",
    "void elf_gnu_ifunc_resolver_return_stop(breakpoint*)",
    "current_program_space == b->pspace || b->pspace == NULL");
LABEL_44:
  sub_94700(
    "elfread.c",
    976,
    "%s: Assertion `%s' failed.",
    "void elf_gnu_ifunc_resolver_return_stop(breakpoint*)",
    "b->loc->next == NULL");
LABEL_45:
  v53 = sub_94700(
          "elfread.c",
          975,
          "%s: Assertion `%s' failed.",
          "void elf_gnu_ifunc_resolver_return_stop(breakpoint*)",
          "b->type == bp_gnu_ifunc_resolver");
  return sub_324230(v53 + 4, HIDWORD(v53));
}
