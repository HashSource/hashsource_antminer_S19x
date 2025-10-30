__int64 __fastcall sub_27A820(int *a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  int v6; // r8
  int v7; // r2
  int v8; // r0
  __int64 v9; // r6
  __int64 v10; // r0
  int v11; // r3
  int v12; // r6
  char *v13; // r0
  int v14; // r3
  char *v15; // r11
  int v16; // r10
  int v17; // r6
  int v18; // r3
  __int64 v19; // r0
  __int64 (__fastcall *v20)(int, _DWORD); // r1
  int v21; // r9
  __int64 v22; // r0
  __int64 v23; // r0
  int v24; // r3
  int v25; // r10
  int v26; // r1
  int v27; // lr
  int v28; // r1
  int v29; // r3
  __int64 (*v30)(void); // r3
  int v31; // r3
  int v32; // r1
  void (__fastcall *v33)(int, _DWORD, _DWORD, _DWORD); // r1
  __int64 v34; // r0
  int v35; // r3
  int v36; // r8
  int v37; // r1
  int v38; // r0
  int v39; // r0
  int v40; // r0
  int v41; // r1
  __int64 v42; // r0
  int v43; // r0
  int v44; // [sp+4h] [bp-50h]
  int v45; // [sp+18h] [bp-3Ch]
  __int64 v46; // [sp+20h] [bp-34h] BYREF
  _DWORD *v47; // [sp+28h] [bp-2Ch] BYREF
  __int64 v48; // [sp+38h] [bp-1Ch] BYREF
  _BYTE v49[16]; // [sp+40h] [bp-14h] BYREF

  v3 = (_DWORD *)sub_171258(a2);
  v47 = v3;
  v4 = sub_323E3C(a1[5], &v47);
  if ( v4 )
    return *(_QWORD *)(v4 + 8);
  v6 = v3[4] & 0x83;
  if ( v6 )
  {
    sub_170554();
    sub_27A820(a1, v8);
    v9 = ((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 80))(*a1);
  }
  else
  {
    v7 = v3[6];
    switch ( *(_BYTE *)v7 )
    {
      case 1:
        v34 = sub_27A820(a1, *(_DWORD *)(v7 + 20));
        v35 = HIDWORD(v34);
        HIDWORD(v34) = *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 20);
        v9 = ((__int64 (__fastcall *)(int, _DWORD, _DWORD, int))HIDWORD(v34))(*a1, HIDWORD(v34), v34, v35);
        break;
      case 2:
        v36 = *(_DWORD *)(*(_DWORD *)(v7 + 24) + 12);
        sub_27A820(a1, *(_DWORD *)(v7 + 20));
        v37 = *(_DWORD *)(*(_DWORD *)(v36 + 24) + 24);
        if ( *(_DWORD *)v37 != 1 )
        {
          v38 = *a1;
          goto LABEL_36;
        }
        if ( *(_QWORD *)(v37 + 8) )
        {
          v38 = *a1;
          goto LABEL_36;
        }
        if ( (unsigned int)(*(_DWORD *)(v37 + 16) - 3) > 1 )
        {
          if ( sub_171B30((int)v3, &v46, &v48) && v46 )
          {
            sub_94700(
              (int)"compile/compile-c-types.c",
              149,
              "%s: Assertion `%s' failed.",
              "gcc_type convert_array(compile_c_instance*, type*)",
              "low_bound == 0");
            v43 = v48;
            if ( (_BYTE *)v48 != v49 )
              sub_339E64((void *)v48);
            sub_338FFC(v43);
          }
          v40 = *a1;
          v41 = *(_DWORD *)(*a1 + 4);
          if ( (*(_BYTE *)(v3[6] + 2) & 1) != 0 )
            v42 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v41 + 88))(v40);
          else
            v42 = ((__int64 (__fastcall *)(int))*(_DWORD *)(v41 + 72))(v40);
          v9 = v42;
        }
        else
        {
          if ( (*(_BYTE *)(v3[6] + 2) & 1) != 0 )
          {
            v38 = *a1;
            goto LABEL_36;
          }
          sub_278DD4((char **)&v48, v37 + 16);
          v9 = ((__int64 (__fastcall *)(int))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 76))(*a1);
          if ( (_BYTE *)v48 != v49 )
            sub_339E64((void *)v48);
        }
        break;
      case 3:
      case 4:
        v29 = *(_DWORD *)(*a1 + 4);
        if ( *(_BYTE *)v7 == 3 )
          v30 = *(__int64 (**)(void))(v29 + 24);
        else
          v30 = *(__int64 (**)(void))(v29 + 28);
        v9 = v30();
        sub_27A7A4(a1[5], (int)v3, v9);
        v31 = v3[6];
        if ( *(__int16 *)(v31 + 4) > 0 )
        {
          v45 = 0;
          do
          {
            ++v6;
            sub_27A820(a1, *(_DWORD *)(*(_DWORD *)(v31 + 24) + v45 + 12));
            v32 = *(_DWORD *)(v3[6] + 24) + v45;
            v45 += 24;
            (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)(*a1 + 4) + 32))(
              *a1,
              *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 32),
              v9,
              HIDWORD(v9),
              *(_DWORD *)(v32 + 16),
              v44);
            v31 = v3[6];
          }
          while ( *(__int16 *)(v31 + 4) > v6 );
        }
        v33 = *(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(*a1 + 4) + 36);
        v33(*a1, v33, v9, HIDWORD(v9));
        break;
      case 5:
        v21 = *a1;
        v22 = ((__int64 (__fastcall *)(int, int, _DWORD))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 56))(
                *a1,
                *(_BYTE *)(v7 + 1) & 1,
                v3[5]);
        v23 = ((__int64 (__fastcall *)(int, _DWORD, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)(v21 + 4) + 40))(
                v21,
                *(_DWORD *)(*(_DWORD *)(v21 + 4) + 40),
                v22,
                HIDWORD(v22));
        v24 = v3[6];
        v9 = v23;
        if ( *(__int16 *)(v24 + 4) > 0 )
        {
          v25 = 0;
          do
          {
            v26 = *(_DWORD *)(v24 + 24);
            ++v6;
            v27 = *(_DWORD *)(v26 + v25);
            v28 = v26 + v25;
            v25 += 24;
            (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)(v21 + 4) + 44))(
              v21,
              *(_DWORD *)(*(_DWORD *)(v21 + 4) + 44),
              v9,
              HIDWORD(v9),
              *(_DWORD *)(v28 + 16),
              v27);
            v24 = v3[6];
          }
          while ( *(__int16 *)(v24 + 4) > v6 );
        }
        (*(void (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)(v21 + 4) + 48))(
          v21,
          *(_DWORD *)(*(_DWORD *)(v21 + 4) + 48),
          v9,
          HIDWORD(v9));
        break;
      case 7:
        v12 = *(_DWORD *)(v7 + 20);
        if ( !v12 )
        {
          if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
          {
            v12 = *(_DWORD *)(sub_1780C4(*(_DWORD *)(v7 + 16)) + 12);
          }
          else
          {
            sub_1780B4();
            v12 = *(_DWORD *)(v39 + 12);
          }
          sub_946B0("function has unknown return type; assuming int");
        }
        sub_27A820(a1, v12);
        LODWORD(v48) = *(__int16 *)(v3[6] + 4);
        v13 = (char *)sub_93028(8 * v48);
        v14 = v3[6];
        v15 = v13;
        HIDWORD(v48) = v13;
        if ( *(__int16 *)(v14 + 4) > 0 )
        {
          v16 = 0;
          while ( 1 )
          {
            v17 = 8 * v6++;
            v18 = *(_DWORD *)(v14 + 24) + v16;
            v16 += 24;
            v19 = sub_27A820(a1, *(_DWORD *)(v18 + 12));
            v14 = v3[6];
            *(_QWORD *)&v15[v17] = v19;
            if ( *(__int16 *)(v14 + 4) <= v6 )
              break;
            v15 = (char *)HIDWORD(v48);
          }
        }
        v20 = *(__int64 (__fastcall **)(int, _DWORD))(*(_DWORD *)(*a1 + 4) + 52);
        v9 = v20(*a1, v20);
        if ( HIDWORD(v48) )
          free((void *)HIDWORD(v48));
        break;
      case 8:
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 56))();
        break;
      case 9:
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 60))();
        break;
      case 0xA:
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 64))();
        break;
      case 0xE:
        if ( (*(_BYTE *)(v7 + 2) & 0x10) != 0 )
          sub_1780C4(*(_DWORD *)(v7 + 16));
        else
          sub_1780B4();
        sub_946B0("variable has unknown type; assuming int");
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 56))();
        break;
      case 0x15:
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(*a1 + 4) + 68))();
        break;
      case 0x16:
        v10 = sub_27A820(a1, *(_DWORD *)(v7 + 20));
        v11 = HIDWORD(v10);
        HIDWORD(v10) = *(_DWORD *)(*(_DWORD *)(*a1 + 4) + 84);
        v9 = ((__int64 (__fastcall *)(int, _DWORD, _DWORD, int))HIDWORD(v10))(*a1, HIDWORD(v10), v10, v11);
        break;
      default:
        v38 = *a1;
LABEL_36:
        v9 = ((__int64 (*)(void))*(_DWORD *)(*(_DWORD *)(v38 + 4) + 96))();
        break;
    }
  }
  sub_27A7A4(a1[5], (int)v3, v9);
  return v9;
}
