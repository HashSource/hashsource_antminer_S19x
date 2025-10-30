void __fastcall sub_238204(_DWORD *a1, char *a2, int a3, int a4, int a5)
{
  void *v5; // r7
  int v7; // r0
  _BOOL4 v8; // r0
  _DWORD *v9; // r5
  int v11; // r2
  int v12; // r9
  int v13; // r8
  int v14; // r6
  void *v15; // r0
  int v16; // [sp+Ch] [bp-28h] BYREF
  int v17; // [sp+10h] [bp-24h] BYREF
  char *v18; // [sp+14h] [bp-20h] BYREF
  void *ptr[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v20[20]; // [sp+20h] [bp-14h] BYREF

  v7 = a1[7];
  v18 = a2;
  v17 = a3;
  v16 = a4;
  if ( ((v7 - 18) & 0xFFFFFFFD) != 0 )
  {
LABEL_16:
    sub_94700(
      (int)"target-descriptions.c",
      1551,
      "%s: Assertion `%s' failed.",
      "void tdesc_add_typed_bitfield(tdesc_type_with_fields*, const char*, int, int, tdesc_type*)",
      "type->kind == TDESC_TYPE_STRUCT || type->kind == TDESC_TYPE_FLAGS");
    v15 = ptr[0];
    if ( ptr[0] != v5 )
      sub_339E64(ptr[0]);
    sub_338FFC(v15);
  }
  v8 = a3 <= a4;
  if ( a3 < 0 )
    v8 = 0;
  if ( !v8 )
  {
    sub_94700(
      (int)"target-descriptions.c",
      1552,
      "%s: Assertion `%s' failed.",
      "void tdesc_add_typed_bitfield(tdesc_type_with_fields*, const char*, int, int, tdesc_type*)",
      "start >= 0 && end >= start");
    goto LABEL_16;
  }
  v9 = (_DWORD *)a1[9];
  if ( v9 == (_DWORD *)a1[10] )
  {
    sub_23B664(a1 + 8, v9, &v18, &a5, &v17, &v16);
  }
  else
  {
    ptr[0] = v20;
    if ( a2 )
      v11 = (int)&a2[strlen(a2)];
    else
      v11 = -1;
    sub_2350F8(ptr, a2, v11);
    if ( v9 )
    {
      v12 = a5;
      v13 = v17;
      v14 = v16;
      *v9 = v9 + 2;
      sub_2350F8(v9, (_BYTE *)ptr[0], (int)ptr[0] + (unsigned int)ptr[1]);
      v9[6] = v12;
      v9[7] = v13;
      v9[8] = v14;
    }
    if ( ptr[0] != v20 )
      sub_339E64(ptr[0]);
    a1[9] += 36;
  }
}
