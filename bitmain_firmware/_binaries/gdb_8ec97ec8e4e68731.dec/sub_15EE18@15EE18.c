int __fastcall sub_15EE18(int a1, int a2, unsigned int a3, int a4, char *a5, _DWORD *a6, _BOOL4 *a7)
{
  int v11; // r8
  int v12; // r0
  int v13; // r4
  int v14; // r9
  int v15; // r3
  int v16; // r9
  int v17; // r5
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r9
  _BOOL4 v22; // r0
  int v23; // r0
  signed int v24; // r4
  int v27; // [sp+14h] [bp-18h]
  char v28[4]; // [sp+1Ch] [bp-10h] BYREF
  char v29[4]; // [sp+20h] [bp-Ch] BYREF
  char v30[8]; // [sp+24h] [bp-8h] BYREF

  v11 = sub_15DB40(*(int **)(a1 + 76));
  while ( ((int (__fastcall *)(int, int))loc_1DD420)(v11, a2) <= a3 )
  {
    v12 = ((int (__fastcall *)(int, int))loc_1DD420)(v11, a2++);
    a3 -= v12;
  }
  v13 = -a3;
  v14 = ((int (__fastcall *)(int))loc_166E9C)(v11);
  v15 = v14 + ((int (__fastcall *)(int))loc_166F48)(v11);
  if ( a2 < v15 )
  {
    v16 = a2;
    v27 = a2;
    v17 = -a3;
    v18 = v15;
    do
    {
      v19 = ((int (__fastcall *)(int, int))loc_1DD420)(v11, v16);
      if ( !v19 )
        break;
      ++v16;
      v17 += v19;
    }
    while ( v18 != v16 );
    v13 = v17;
    a2 = v27;
  }
  if ( a4 > v13 )
LABEL_27:
    sub_946E0("Bad debug information detected: Attempt to read %d bytes from registers.", a4);
  if ( a4 <= 0 )
  {
LABEL_25:
    *a6 = 0;
    *a7 = 0;
    return 1;
  }
  while ( 1 )
  {
    v24 = ((int (__fastcall *)(int, int))loc_1DD420)(v11, a2) - a3;
    if ( v24 >= a4 )
      v24 = a4;
    if ( ((int (__fastcall *)(int, int))loc_1DD420)(v11, a2) != v24 )
      break;
    ((void (__fastcall *)(int, int, _DWORD *, _BOOL4 *, char *, char *, char *, char *))loc_15E7F8)(
      a1,
      a2,
      a6,
      a7,
      v28,
      v29,
      v30,
      a5);
    if ( *a6 || *a7 )
      return 0;
LABEL_18:
    a4 -= v24;
    a5 += v24;
    ++a2;
    a3 = 0;
    if ( a4 <= 0 )
      goto LABEL_25;
  }
  v20 = ((int (__fastcall *)(_DWORD, int))loc_15E374)(*(_DWORD *)(a1 + 76), a2);
  v21 = v20;
  if ( !v20 )
  {
    sub_94700(
      (int)"frame.c",
      1443,
      "%s: Assertion `%s' failed.",
      "int get_frame_register_bytes(frame_info*, int, CORE_ADDR, int, gdb_byte*, int*, int*)",
      "value != NULL");
    goto LABEL_27;
  }
  *a6 = sub_26ED18(v20);
  v22 = sub_26E65C(v21) == 0;
  *a7 = v22;
  if ( *a6 )
    v22 = 1;
  if ( !v22 )
  {
    v23 = sub_26E738(v21);
    memcpy(a5, (const void *)(v23 + a3), v24);
    sub_26C3B8(v21);
    ((void (__fastcall *)(int))loc_26C200)(v21);
    goto LABEL_18;
  }
  sub_26C3B8(v21);
  ((void (__fastcall *)(int))loc_26C200)(v21);
  return 0;
}
