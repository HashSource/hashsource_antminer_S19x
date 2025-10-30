_DWORD *__fastcall sub_237FB4(int a1, char *s, int a3)
{
  void *v3; // r4
  void *v4; // r5
  int v8; // r2
  _DWORD *v9; // r0
  _BYTE *v10; // r3
  _DWORD *v11; // r4
  void *v12; // r2
  _BYTE *v13; // r0
  void *v15; // r0
  _DWORD *v16; // [sp+Ch] [bp-20h] BYREF
  void *ptr[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v18[20]; // [sp+18h] [bp-14h] BYREF

  if ( a3 <= 0 )
  {
    sub_94700(
      (int)"target-descriptions.c",
      1523,
      "%s: Assertion `%s' failed.",
      "tdesc_type_with_fields* tdesc_create_enum(tdesc_feature*, const char*, int)",
      "size > 0");
    sub_33AC04(v3);
    v15 = ptr[0];
    if ( ptr[0] != v4 )
      sub_339E64(ptr[0]);
    sub_338FFC(v15);
  }
  ptr[0] = v18;
  if ( s )
    v8 = (int)&s[strlen(s)];
  else
    v8 = -1;
  sub_2350F8(ptr, s, v8);
  v9 = sub_9836C(0x30u);
  v10 = ptr[0];
  v11 = v9;
  v12 = ptr[1];
  *v9 = &off_3E9AD4;
  v9[1] = v9 + 3;
  sub_2350F8(v9 + 1, v10, (int)v12 + (_DWORD)v10);
  v13 = ptr[0];
  v11[11] = a3;
  v16 = v11;
  *v11 = off_3E9B1C;
  *(_QWORD *)(v11 + 7) = 21;
  v11[9] = 0;
  v11[10] = 0;
  if ( v13 != v18 )
    sub_339E64(v13);
  sub_23B27C(a1 + 40, &v16);
  return v16;
}
