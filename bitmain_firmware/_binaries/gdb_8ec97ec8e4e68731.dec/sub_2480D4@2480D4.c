void __fastcall sub_2480D4(__int64 a1)
{
  int *v1; // r0
  int *v2; // r11
  int v3; // r4
  int v4; // r5
  int i; // r7
  const char *v6; // r6
  int v7; // r10
  int v8; // r3
  char *v9; // r0
  int v10; // r2
  void (__fastcall *v11)(int, int, _DWORD); // r6
  int v12; // r7
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r6
  int v18; // r3
  const char *v19; // r0
  unsigned int v20; // r6
  _DWORD *v21; // r0
  char *v22; // r0
  int v23; // r0
  const char *v24; // r0
  char *v25; // r0
  char *v26; // r0
  int v27; // r1
  const char *v28; // r0
  char *v29; // r6
  char *v30; // r0
  void *v31; // r0
  const char *v32; // r0
  void *v33; // r0
  const char *v34; // [sp+8h] [bp-44h]
  int v35; // [sp+14h] [bp-38h] BYREF
  int v36; // [sp+18h] [bp-34h] BYREF
  int v37[2]; // [sp+1Ch] [bp-30h] BYREF
  void *ptr; // [sp+24h] [bp-28h] BYREF
  void *v39; // [sp+28h] [bp-24h]
  _DWORD v40[7]; // [sp+30h] [bp-1Ch] BYREF

  v34 = (const char *)a1;
  v35 = a1;
  if ( !(_DWORD)a1 || !*(_BYTE *)a1 )
LABEL_67:
    sub_946E0("requires an argument (function, line or *addr) to define a scope", HIDWORD(a1));
  sub_19DBE0(&v36, &v35, (int)off_46D5A4[0], 0);
  sub_19B938(&ptr, v36, 1u, 0, 0, 0);
  if ( v39 != ptr )
  {
    sub_D07B4((int *)ptr);
    v1 = sub_C2574(*((_DWORD *)ptr + 5));
    v2 = v1;
    if ( !v1 )
      goto LABEL_59;
    v3 = 0;
    do
    {
      sub_258BD4(v1);
      v1 = (int *)sub_C28A8(v2, v40);
      v4 = (int)v1;
      if ( v1 )
      {
        for ( i = v3; ; i = v3 )
        {
          sub_258BD4(v1);
          if ( !v3 )
            sub_259F10("Scope for %s:\n", v34);
          ++v3;
          if ( dword_46D448 )
            v6 = (const char *)sub_21B3C4(v4);
          else
            v6 = *(const char **)v4;
          if ( v6 && *v6 )
          {
            v7 = sub_2209C0(v4);
            sub_259F10("Symbol %s is ", v6);
            v8 = *(unsigned __int8 *)(v4 + 32) >> 3;
            v9 = (char *)off_46DBB8 + 16 * v8;
            v10 = *((_DWORD *)v9 + 1);
            if ( v10 )
            {
              v11 = *(void (__fastcall **)(int, int, _DWORD))(v10 + 12);
              v12 = *v2;
              v13 = (_DWORD *)sub_242F8C();
              v11(v4, v12, *v13);
            }
            else
            {
              v16 = *((_DWORD *)off_46DBB8 + 4 * v8);
              switch ( v16 )
              {
                case 1:
                  v29 = sub_988AC(*(_QWORD *)(v4 + 8));
                  v30 = sub_98B08(*(_DWORD *)(v4 + 8), *(_DWORD *)(v4 + 12));
                  sub_259F10("a constant with value %s (%s)", v29, v30);
                  break;
                case 2:
                  sub_259F10("in static storage at address ");
                  goto LABEL_34;
                case 3:
                  v27 = (**((int (__fastcall ***)(int, int))v9 + 3))(v4, v7);
                  if ( (*(_BYTE *)(v4 + 33) & 2) != 0 )
                  {
                    v28 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v7, v27);
                    sub_259F10("an argument in register $%s", v28);
                  }
                  else
                  {
                    v32 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v7, v27);
                    sub_259F10("a local variable in register $%s", v32);
                  }
                  break;
                case 4:
                  v26 = sub_988AC(*(_QWORD *)(v4 + 8));
                  sub_259F10("an argument at stack/frame offset %s", v26);
                  break;
                case 5:
                  v25 = sub_988AC(*(_QWORD *)(v4 + 8));
                  sub_259F10("a reference argument at offset %s", v25);
                  break;
                case 6:
                  v23 = (**((int (__fastcall ***)(int, int))v9 + 3))(v4, v7);
                  v24 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v7, v23);
                  sub_259F10("the address of an argument, in register $%s", v24);
                  break;
                case 7:
                  v22 = sub_988AC(*(_QWORD *)(v4 + 8));
                  sub_259F10("a local variable at frame offset %s", v22);
                  break;
                case 8:
                  sub_259F10("a typedef.\n");
                  goto LABEL_17;
                case 9:
                  sub_259F10("a label at address ");
LABEL_34:
                  v19 = (const char *)sub_25AC8C(v7, *(_DWORD *)(v4 + 8));
                  goto LABEL_26;
                case 10:
                  sub_259F10("a function at address ");
                  v19 = (const char *)sub_25AC8C(v7, **(_DWORD **)(v4 + 8));
                  goto LABEL_26;
                case 11:
                  sub_259F10("constant bytes: ");
                  v14 = *(_DWORD **)(v4 + 24);
                  if ( !v14 )
                    goto LABEL_17;
                  if ( v14[5] )
                  {
                    v20 = 0;
                    do
                    {
                      v21 = (_DWORD *)sub_242F8C();
                      sub_25A418(*v21, " %02x", *(unsigned __int8 *)(*(_DWORD *)(v4 + 8) + v20));
                      v14 = *(_DWORD **)(v4 + 24);
                      ++v20;
                    }
                    while ( v14[5] > v20 );
                  }
                  goto LABEL_16;
                case 12:
                  sub_1B141C(v37, *(char **)v4, 0, 0);
                  v17 = v37[0];
                  if ( v37[0] )
                  {
                    sub_259F10("static storage at address ");
                    v18 = *(__int16 *)(v17 + 22);
                    if ( v18 == -1 )
                    {
                      a1 = sub_94700((int)"tracepoint.c", 2636, "Section index is uninitialized");
                      goto LABEL_67;
                    }
                    v19 = (const char *)sub_25AC8C(
                                          v7,
                                          *(_DWORD *)(v17 + 8) + *(_DWORD *)(*(_DWORD *)(v37[1] + 144) + 4 * v18));
LABEL_26:
                    sub_259F10("%s", v19);
                  }
                  else
                  {
                    sub_259F10("Unresolved Static");
                  }
                  break;
                case 13:
                  sub_259F10("optimized out.\n");
                  goto LABEL_17;
                case 14:
                  sub_94700(
                    (int)"tracepoint.c",
                    2643,
                    "%s: %s",
                    "void info_scope_command(const char*, int)",
                    "LOC_COMPUTED variable missing a method");
                  v33 = ptr;
                  if ( ptr )
                    sub_339E64(ptr);
                  if ( v36 )
                    v33 = (void *)((int (__fastcall *)(int *))loc_19D154)(&v36);
                  sub_338FFC(v33);
                default:
                  sub_259F10("a bogus symbol, class %d.\n", v16);
                  v3 = i;
                  goto LABEL_17;
              }
            }
            v14 = *(_DWORD **)(v4 + 24);
            if ( v14 )
            {
LABEL_16:
              v15 = sub_171258(v14);
              sub_259F10(", length %d.\n", *(_DWORD *)(v15 + 20));
            }
          }
LABEL_17:
          v1 = (int *)sub_C28E4((int)v40);
          v4 = (int)v1;
          if ( !v1 )
            break;
        }
      }
      if ( v2[2] )
        break;
      v2 = (int *)v2[3];
    }
    while ( v2 );
    if ( v3 )
    {
      v31 = ptr;
      if ( !ptr )
        goto LABEL_49;
    }
    else
    {
LABEL_59:
      sub_259F10("Scope for %s contains no locals or arguments.\n", v34);
      v31 = ptr;
      if ( !ptr )
      {
LABEL_49:
        if ( v36 )
          ((void (__fastcall *)(int *))loc_19D154)(&v36);
        return;
      }
    }
    sub_339E64(v31);
    goto LABEL_49;
  }
  if ( v39 )
    sub_339E64(v39);
  if ( v36 )
    ((void (__fastcall *)(int *))loc_19D154)(&v36);
}
