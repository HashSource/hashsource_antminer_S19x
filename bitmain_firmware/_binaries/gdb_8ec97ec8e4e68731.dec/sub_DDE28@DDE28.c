void __fastcall sub_DDE28(
        int a1,
        int a2,
        int *a3,
        int a4,
        void **a5,
        int *a6,
        _DWORD *a7,
        _DWORD *a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17,
        char a18)
{
  int *v21; // r8
  int *v22; // r4
  int v23; // r0
  int v24; // r6
  unsigned int v25; // r2
  int *v26; // r0
  void *v27; // r3
  void *v28; // r0
  const char *v29; // r1
  void *v30; // r4
  bool v31; // zf
  int v32; // r1
  int v33; // r3
  int v34; // r0
  __int64 v35; // r0
  int v36; // r2
  int v37; // r3
  char v38; // r2
  int v39; // r0
  __int64 v40; // r0
  int v41; // r1
  void *v42; // r3
  int v43; // r0
  unsigned __int8 *v44; // r6
  _BYTE *v45; // r0
  const char *v46; // r0
  unsigned int v47; // [sp+28h] [bp-34h]
  const char *v49; // [sp+44h] [bp-18h] BYREF
  void *ptr[5]; // [sp+48h] [bp-14h] BYREF

  if ( a9 == 2 )
  {
    v39 = sub_C6A54();
    LODWORD(v40) = off_489A04(&dword_4899A0, 2, v39 + 1, 0);
    if ( !(_DWORD)v40 )
      goto LABEL_49;
    if ( (int)v40 < 0 )
      sub_946E0("Hardware breakpoints used exceeds limit.");
  }
  if ( !a4 )
  {
    v40 = sub_94700(
            (int)"breakpoint.c",
            8883,
            "%s: Assertion `%s' failed.",
            "void init_breakpoint_sal(breakpoint*, gdbarch*, gdb::array_view<const symtab_and_line>, event_location_up&&,"
            " gdb::unique_xmalloc_ptr<char>, gdb::unique_xmalloc_ptr<char>, gdb::unique_xmalloc_ptr<char>, bptype, bpdisp"
            ", int, int, int, const breakpoint_ops*, int, int, int, unsigned int, int)",
            "!sals.empty ()");
LABEL_49:
    sub_946E0("No hardware breakpoint support in the target.", HIDWORD(v40));
  }
  v21 = &a3[10 * a4];
  if ( a3 != v21 )
  {
    v22 = a3;
    while ( 1 )
    {
      if ( a15 )
      {
        v34 = sub_CFD40(*v22, v22[1], v22[2], v22[3]);
        if ( !v34 )
          v34 = a2;
        sub_C879C(v34, *v22, v22[5], v22[3], a11);
        if ( a3 == v22 )
        {
LABEL_26:
          ((void (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_D017C)(
            a1,
            a2,
            *a3,
            a3[1],
            a3[2],
            a3[3],
            a3[4],
            a3[5],
            a3[6],
            a3[7],
            a3[8],
            a3[9],
            a9,
            a14);
          LODWORD(v35) = *a7;
          *(_DWORD *)(a1 + 112) = a11;
          v36 = a16;
          if ( a16 )
            v36 = 1;
          *(_DWORD *)(a1 + 16) = v36;
          HIDWORD(v35) = *a8;
          v37 = 0;
          *(_DWORD *)(a1 + 116) = a12;
          *a7 = 0;
          v38 = (char)a8;
          *(_QWORD *)(a1 + 100) = v35;
          *(_DWORD *)(a1 + 36) = a13;
          *a8 = 0;
          if ( (a17 & 1) != 0 )
          {
            v38 = 1;
            v37 = *(_DWORD *)(a1 + 28);
          }
          *(_DWORD *)(a1 + 20) = a10;
          if ( (a17 & 1) != 0 )
            *(_BYTE *)(v37 + 39) = v38;
          if ( a9 == 29 )
          {
            if ( *(_UNKNOWN **)(a1 + 4) == &unk_47864C )
            {
              v43 = ((int (__fastcall *)(_DWORD))loc_19D228)(*(_DWORD *)(a1 + 76));
              v44 = (unsigned __int8 *)sub_9360C(v43 + 3);
              v45 = sub_93610(v44);
              v46 = sub_93330(v44, v45 - v44);
              *(_DWORD *)(a1 + 160) = v46;
              sub_259F10("Probed static tracepoint marker \"%s\"\n", v46);
            }
            else if ( ((int (__fastcall *)(int *, int, void **))off_489BFC)(&dword_4899A0, v22[5], ptr) )
            {
              *(_DWORD *)(a1 + 160) = sub_327254(ptr[2]);
              sub_24D520(ptr);
              sub_259F10("Probed static tracepoint marker \"%s\"\n", *(const char **)(a1 + 160));
            }
            else
            {
              sub_946B0("Couldn't determine the static tracepoint marker to probe");
            }
          }
          v24 = *(_DWORD *)(a1 + 28);
          goto LABEL_11;
        }
      }
      else if ( a3 == v22 )
      {
        goto LABEL_26;
      }
      v23 = sub_CFF88(a1, (int)v22);
      v24 = v23;
      if ( (a17 & 1) != 0 )
        *(_BYTE *)(v23 + 39) = 1;
LABEL_11:
      if ( *(_DWORD *)(a1 + 100) )
      {
        v25 = *(_DWORD *)(v24 + 52);
        v49 = *(const char **)(a1 + 100);
        v47 = v25;
        v26 = sub_C2574(v25);
        sub_1C427C(ptr, &v49, v47, v26, 0);
        v27 = ptr[0];
        ptr[0] = 0;
        v28 = *(void **)(v24 + 20);
        *(_DWORD *)(v24 + 20) = v27;
        if ( v28 )
        {
          free(v28);
          if ( ptr[0] )
            free(ptr[0]);
        }
        if ( *v49 )
          sub_946E0("Garbage '%s' follows condition", v49);
      }
      v29 = *(const char **)(a1 + 104);
      if ( a9 == 30 )
      {
        if ( !v29 )
          sub_946E0("Format string required");
        v22 += 10;
        sub_DDBA8((_DWORD *)a1);
        if ( v21 == v22 )
          break;
      }
      else
      {
        if ( v29 )
          sub_946E0("Garbage '%s' at end of command", v29);
        v22 += 10;
        if ( v21 == v22 )
          break;
      }
    }
  }
  v30 = *a5;
  v31 = *a5 == 0;
  *(_BYTE *)(a1 + 33) = a18 & 1;
  if ( v31 )
  {
    sub_19CD50(ptr, *(_DWORD *)(*(_DWORD *)(a1 + 28) + 52), v30);
    v41 = *(_DWORD *)(a1 + 76);
    v42 = ptr[0];
    ptr[0] = v30;
    *(_DWORD *)(a1 + 76) = v42;
    if ( v41 )
    {
      ((void (__fastcall *)(int))loc_19D154)(a1 + 76);
      if ( ptr[0] )
        ((void (__fastcall *)(void **))loc_19D154)(ptr);
    }
  }
  else
  {
    *a5 = 0;
    v32 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 76) = v30;
    if ( v32 )
      ((void (__fastcall *)(int))loc_19D154)(a1 + 76);
  }
  v33 = *a6;
  *a6 = 0;
  *(_DWORD *)(a1 + 80) = v33;
}
