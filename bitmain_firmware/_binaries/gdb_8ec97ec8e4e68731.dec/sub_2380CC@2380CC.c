void __fastcall sub_2380CC(_DWORD *a1, char *a2, int a3)
{
  void *v3; // r7
  int v4; // r3
  _DWORD *v5; // r5
  int v6; // r2
  _DWORD *v7; // r3
  int v10; // r9
  int v11; // r8
  int v12; // r6
  void *v13; // r0
  int v14; // [sp+8h] [bp-2Ch] BYREF
  char *v15; // [sp+Ch] [bp-28h] BYREF
  int v16; // [sp+10h] [bp-24h] BYREF
  int v17; // [sp+14h] [bp-20h] BYREF
  void *ptr[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v19[20]; // [sp+20h] [bp-14h] BYREF

  v4 = a1[7];
  v15 = a2;
  v14 = a3;
  if ( (unsigned int)(v4 - 18) > 1 )
  {
    sub_94700(
      (int)"target-descriptions.c",
      1539,
      "%s: Assertion `%s' failed.",
      "void tdesc_add_field(tdesc_type_with_fields*, const char*, tdesc_type*)",
      "type->kind == TDESC_TYPE_UNION || type->kind == TDESC_TYPE_STRUCT");
    v13 = ptr[0];
    if ( ptr[0] != v3 )
      sub_339E64(ptr[0]);
    sub_338FFC(v13);
  }
  v5 = (_DWORD *)a1[9];
  v6 = -1;
  v7 = (_DWORD *)a1[10];
  v16 = -1;
  v17 = -1;
  if ( v5 == v7 )
  {
    sub_23B2B4(a1 + 8, v5, &v15, &v14, &v16, &v17);
  }
  else
  {
    ptr[0] = v19;
    if ( a2 )
      v6 = (int)&a2[strlen(a2)];
    sub_2350F8(ptr, a2, v6);
    if ( v5 )
    {
      v10 = v14;
      v11 = v16;
      v12 = v17;
      *v5 = v5 + 2;
      sub_2350F8(v5, (_BYTE *)ptr[0], (int)ptr[0] + (unsigned int)ptr[1]);
      v5[6] = v10;
      v5[7] = v11;
      v5[8] = v12;
    }
    if ( ptr[0] != v19 )
      sub_339E64(ptr[0]);
    a1[9] += 36;
  }
}
