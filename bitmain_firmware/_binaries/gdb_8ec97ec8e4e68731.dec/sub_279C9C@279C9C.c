void __fastcall sub_279C9C(int *a1, int a2, int a3, char *a4)
{
  int v4; // r6
  void *v7; // r6
  int v8; // r7
  int v9; // r0
  bool v10; // zf
  int v11; // r7
  int v12; // r9
  int *v13; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r3
  int *v17; // r0
  const char **v18; // r8
  int v19; // r2
  const char *v20; // r7
  int v21; // r9
  int v22; // r10
  int v23; // r0
  int v24; // r8
  __int64 (__fastcall *v25)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD); // r9
  int v26; // r0
  __int64 v27; // r0
  int v28; // r3
  int v29; // r0
  void (__fastcall *v30)(int, const char *); // r10
  int v31; // r0
  int *v32; // r0
  __int64 v33; // kr00_8
  __int64 v34; // r0
  int v35; // r0
  int v36; // r0
  __int64 v37; // [sp+20h] [bp-24h]
  const char **v38; // [sp+28h] [bp-1Ch] BYREF
  int v39; // [sp+2Ch] [bp-18h]
  const char **v40; // [sp+30h] [bp-14h]
  int v41; // [sp+34h] [bp-10h]
  const char **v42; // [sp+38h] [bp-Ch] BYREF
  int v43; // [sp+3Ch] [bp-8h]

  if ( a3 == 1 )
  {
    v12 = 2;
  }
  else if ( a3 )
  {
    if ( a3 != 2 )
    {
      v33 = sub_94700(
              (int)"compile/compile-c-symbols.c",
              435,
              "%s: %s",
              "void gcc_convert_symbol(void*, gcc_c_context*, gcc_c_oracle_request, const char*)",
              "Unrecognized oracle request.");
      sub_92E40(v4);
      v34 = v33;
LABEL_41:
      if ( HIDWORD(v34) != 1 )
      {
        sub_339E78(v34);
        sub_92E60();
      }
      v35 = sub_339E78(v34);
      v36 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)(*a1 + 4) + 96))(*a1, *(_DWORD *)(v35 + 8));
      sub_339EF8(v36);
      goto LABEL_19;
    }
    v12 = 4;
  }
  else
  {
    v12 = 1;
  }
  v7 = sub_92E28();
  sub_21D6B0(&v38, a4, a1[2], v12, 0);
  if ( v38 )
  {
    v8 = v39;
    v40 = v38;
    v41 = v39;
    v9 = sub_C2668(v39);
    v10 = v8 == v9;
    if ( v8 != v9 )
      v10 = v9 == 0;
    v11 = !v10;
    if ( v10 )
    {
      if ( !dword_48AA50 )
      {
LABEL_15:
        sub_279770(a1, (int)v40, v41, 0, v11);
LABEL_16:
        sub_92E40((int)v7);
        return;
      }
    }
    else
    {
      sub_21D6B0(&v42, a4, 0, v12, 0);
      if ( v42 )
      {
        v14 = v43;
        v15 = sub_C2668(v43);
        v16 = dword_48AA50;
        if ( v14 != v15 )
        {
          if ( dword_48AA50 )
          {
            v32 = (int *)sub_242FC8();
            sub_2594B0(*v32, "gcc_convert_symbol \"%s\": global symbol\n", a4);
          }
          sub_279770(a1, (int)v42, v43, 1, 0);
          v16 = dword_48AA50;
        }
      }
      else
      {
        v16 = dword_48AA50;
      }
      v11 = 1;
      if ( !v16 )
        goto LABEL_15;
    }
    v17 = (int *)sub_242FC8();
    sub_2594B0(*v17, "gcc_convert_symbol \"%s\": local symbol\n", a4);
    goto LABEL_15;
  }
  if ( v12 == 1 )
  {
    sub_1B141C((int *)&v42, a4, (const char *)v38, 0);
    v18 = v42;
    if ( v42 )
    {
      v19 = *((__int16 *)v42 + 11);
      if ( v19 != -1 )
      {
        v20 = &v42[2][*(_DWORD *)(*(_DWORD *)(v43 + 144) + 4 * v19)];
        switch ( (_BYTE)v42[8] & 0xF )
        {
          case 1:
          case 7:
          case 8:
            v21 = *(_DWORD *)(sub_1780C4(v43) + 68);
            v22 = 0;
            break;
          case 2:
            v29 = sub_1780C4(v43);
            v21 = *(_DWORD *)(v29 + 72);
            v30 = *(void (__fastcall **)(int, const char *))off_46D9C8;
            v31 = sub_16F654(v29);
            v30(v31, v20);
            v22 = 0;
            break;
          case 3:
            v21 = *(_DWORD *)(sub_1780C4(v43) + 76);
            v22 = 0;
            break;
          case 4:
          case 5:
          case 9:
          case 0xA:
            v21 = *(_DWORD *)(sub_1780C4(v43) + 80);
            v22 = 1;
            break;
          default:
            v21 = *(_DWORD *)(sub_1780C4(v43) + 84);
            v22 = 1;
            break;
        }
        v37 = sub_27A820(a1, v21);
        v23 = (int)v18;
        v24 = *a1;
        v25 = *(__int64 (__fastcall **)(int, int, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*a1 + 4) + 8);
        v26 = sub_21B3C4(v23);
        v27 = v25(v24, v26, v22, 0, v37, HIDWORD(v37), 0);
        v28 = HIDWORD(v27);
        HIDWORD(v27) = *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 12);
        ((void (__fastcall *)(int, _DWORD, _DWORD, int, int))HIDWORD(v27))(*a1, HIDWORD(v27), v27, v28, 1);
        goto LABEL_16;
      }
      v34 = sub_94700((int)"compile/compile-c-symbols.c", 366, "Section index is uninitialized");
      goto LABEL_41;
    }
  }
  sub_92E40((int)v7);
LABEL_19:
  if ( dword_48AA50 )
  {
    v13 = (int *)sub_242FC8();
    sub_2594B0(*v13, "gcc_convert_symbol \"%s\": lookup_symbol failed\n", a4);
  }
}
