void __fastcall sub_279770(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  __int64 v8; // r0
  int v9; // r7
  int v10; // r10
  int v11; // r0
  const char *v12; // r6
  unsigned int v13; // r3
  _UNKNOWN **v14; // r6
  __int64 v15; // r8
  const char *v16; // r1
  int v17; // r2
  int v18; // r6
  _DWORD *v19; // r0
  const char *v20; // r1
  int v21; // r0
  __int64 (__fastcall *v22)(int, int, int, _DWORD, _DWORD, _DWORD, _UNKNOWN **); // r4
  int v23; // r0
  __int64 v24; // r0
  int v25; // r3
  const char *v26; // r3
  int v27; // r5
  void (__fastcall *v28)(int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int); // r6
  int v29; // r0
  int v30; // r3
  int v31; // r0
  const char *v32; // r1
  const char *v33; // r1
  const char *v34; // r1
  int v35; // r5
  int v36; // r0
  void (__fastcall *v37)(int, int, _DWORD, _DWORD, int, int); // r4
  int v38; // r0
  const char *v39; // r1
  int v40; // r0
  int v41; // r0
  int v42; // [sp+24h] [bp-20h]
  int v43; // [sp+28h] [bp-1Ch]
  int v44; // [sp+2Ch] [bp-18h]
  void (__fastcall *v45)(int, int); // [sp+2Ch] [bp-18h]
  _DWORD v47[2]; // [sp+38h] [bp-Ch] BYREF

  LODWORD(v8) = sub_2209DC(a2);
  v9 = *(_DWORD *)(v8 + 12);
  v10 = *(unsigned __int16 *)(a2 + 34);
  if ( a1[6] )
  {
    v11 = a1[6];
    v47[0] = a2;
    LODWORD(v8) = sub_323E3C(v11, v47);
    if ( (_DWORD)v8 )
    {
      v12 = *(const char **)(v8 + 4);
      if ( v12 )
      {
        *(_DWORD *)(v8 + 4) = 0;
        sub_946E0("%s", v12);
      }
    }
  }
  v13 = *(unsigned __int8 *)(a2 + 32);
  v14 = &off_46DBB8;
  if ( *((_DWORD *)off_46DBB8 + 4 * (v13 >> 3)) == 9 )
  {
    v15 = 0;
  }
  else
  {
    v8 = sub_27A820(a1, *(_DWORD *)(a2 + 24));
    v13 = *(unsigned __int8 *)(a2 + 32);
    v15 = v8;
  }
  if ( (v13 & 7) == 2 )
  {
    v35 = *a1;
    v36 = a2;
    v37 = *(void (__fastcall **)(int, int, _DWORD, _DWORD, int, int))(*(_DWORD *)(v35 + 4) + 16);
    v38 = sub_21B3C4(v36);
    v37(v35, v38, v15, HIDWORD(v15), v9, v10);
  }
  else
  {
    switch ( *((_DWORD *)off_46DBB8 + 4 * (v13 >> 3)) )
    {
      case 0:
        if ( dword_46D448 )
          v26 = (const char *)sub_21B3C4(a2);
        else
          v26 = *(const char **)a2;
        sub_94700((int)"compile/compile-c-symbols.c", 210, "LOC_UNDEF found for \"%s\".", v26);
        goto LABEL_31;
      case 1:
LABEL_31:
        if ( **(_BYTE **)(*(_DWORD *)(a2 + 24) + 24) != 5 )
        {
          v27 = *a1;
          v28 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, int, _DWORD, int, int))(*(_DWORD *)(v27 + 4) + 92);
          v29 = sub_21B3C4(a2);
          v28(v27, *(_DWORD *)(a2 + 8), v15, HIDWORD(v15), v29, *(_DWORD *)(a2 + 8), v9, v10);
        }
        return;
      case 2:
        v14 = 0;
        v43 = 1;
        goto LABEL_23;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        goto LABEL_21;
      case 8:
        v14 = 0;
        v43 = 2;
        goto LABEL_23;
      case 9:
        v14 = 0;
        v43 = 3;
        goto LABEL_23;
      case 0xA:
        if ( !a4 )
        {
          v14 = 0;
          v43 = 0;
        }
        v42 = **(_DWORD **)(a2 + 8);
        if ( a4 )
        {
          v30 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 24);
          v14 = (_UNKNOWN **)(*(_BYTE *)(v30 + 2) & 4);
          if ( (*(_BYTE *)(v30 + 2) & 4) != 0 )
          {
            v14 = 0;
            v43 = 0;
            v45 = *(void (__fastcall **)(int, int))off_46D9C8;
            v31 = sub_16F654(v8);
            v45(v31, v42);
          }
          else
          {
            v43 = *(_BYTE *)(v30 + 2) & 4;
          }
        }
        goto LABEL_23;
      case 0xB:
        if ( dword_46D448 )
          v33 = (const char *)sub_21B3C4(a2);
        else
          v33 = *(const char **)a2;
        sub_946E0("Unsupported LOC_CONST_BYTES for symbol \"%s\".", v33);
      case 0xC:
        goto LABEL_14;
      case 0xD:
        if ( dword_46D448 )
          v32 = (const char *)sub_21B3C4(a2);
        else
          v32 = *(const char **)a2;
        sub_946E0("Symbol \"%s\" cannot be used for compilation evaluation as it is optimized out.", v32);
      case 0xE:
        if ( a5 )
        {
LABEL_21:
          sub_2794D0(v47, a2);
          v14 = (_UNKNOWN **)v47[0];
          if ( a1[1] == 2 )
          {
            if ( v47[0] )
              goto LABEL_24;
            v43 = 1;
          }
          else
          {
            v43 = 1;
          }
        }
        else
        {
          if ( dword_46D448 )
            v16 = (const char *)sub_21B3C4(a2);
          else
            v16 = *(const char **)a2;
          sub_946B0(
            "Symbol \"%s\" is thread-local and currently can only be referenced from the current thread in compiled code.",
            v16);
LABEL_14:
          v17 = sub_15B388();
          if ( v17 )
          {
            v17 = sub_15F7E8(0);
            if ( !v17 )
            {
              if ( dword_46D448 )
                v39 = (const char *)sub_21B3C4(a2);
              else
                v39 = *(const char **)a2;
              sub_946E0("Symbol \"%s\" cannot be used because there is no selected frame", v39);
            }
          }
          v18 = ((int (__fastcall *)(int, int, int))loc_15B3A0)(a2, a3, v17);
          nullsub_31();
          if ( *v19 != 1 )
          {
            if ( dword_46D448 )
              v20 = (const char *)sub_21B3C4(a2);
            else
              v20 = *(const char **)a2;
            sub_946E0("Symbol \"%s\" cannot be used for compilation evaluation as its address has not been found.", v20);
          }
          v41 = v18;
          v43 = 1;
          v14 = 0;
          ((void (__fastcall *)(int))loc_26C09C)(v41);
        }
LABEL_23:
        v21 = a2;
        v44 = *a1;
        v22 = *(__int64 (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, _UNKNOWN **))(*(_DWORD *)(*a1 + 4) + 8);
        v23 = sub_21B3C4(v21);
        v24 = v22(v44, v23, v43, 0, v15, HIDWORD(v15), v14);
        v25 = HIDWORD(v24);
        HIDWORD(v24) = *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 12);
        ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, int, int))HIDWORD(v24))(*a1, HIDWORD(v24), v24, v25, a4);
        if ( !v14 )
          return;
LABEL_24:
        free(v14);
        break;
      case 0xF:
        if ( dword_46D448 )
          v34 = (const char *)sub_21B3C4(a2);
        else
          v34 = *(const char **)a2;
        sub_946E0("Fortran common block is unsupported for compilation evaluaton of symbol \"%s\".", v34);
      default:
        v40 = sub_94700(
                (int)"compile/compile-c-symbols.c",
                279,
                "%s: %s",
                "void convert_one_symbol(compile_c_instance*, block_symbol, int, int)",
                "Unreachable case in convert_one_symbol.");
        if ( &off_46DBB8 )
          free(&off_46DBB8);
        sub_338FFC(v40);
    }
  }
}
