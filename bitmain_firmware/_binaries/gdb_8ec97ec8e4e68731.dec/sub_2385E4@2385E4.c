void __fastcall sub_2385E4(_DWORD *a1, int a2, char *a3)
{
  _DWORD *v3; // r5
  void *v4; // r7
  int v5; // r3
  int *v7; // r0
  int *v8; // r3
  int i; // r2
  int v10; // r1
  int v11; // r2
  _DWORD *v12; // r3
  int v13; // r8
  int *v14; // r9
  int v15; // r6
  void *v16; // r0
  char *s; // [sp+8h] [bp-2Ch] BYREF
  int v18; // [sp+Ch] [bp-28h] BYREF
  int *v19; // [sp+10h] [bp-24h] BYREF
  int v20; // [sp+14h] [bp-20h] BYREF
  void *ptr[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v22[20]; // [sp+20h] [bp-14h] BYREF

  v5 = a1[7];
  v18 = a2;
  s = a3;
  if ( v5 != 21 )
  {
    sub_94700(
      (int)"target-descriptions.c",
      1593,
      "%s: Assertion `%s' failed.",
      "void tdesc_add_enum_value(tdesc_type_with_fields*, int, const char*)",
      "type->kind == TDESC_TYPE_ENUM");
    v16 = ptr[0];
    if ( ptr[0] != v4 )
      sub_339E64(ptr[0]);
    sub_338FFC(v16);
  }
  v7 = dword_48A294;
  if ( dword_48A2B0 != 3 )
  {
    v8 = dword_48A294;
    for ( i = 1; i != 17; ++i )
    {
      v10 = v8[15];
      if ( v10 == 3 )
      {
        v7 = &dword_48A294[8 * i];
        goto LABEL_7;
      }
      v8 += 8;
    }
    ((void (__fastcall *)(int *, int, int, int *))loc_234FE4)(dword_48A294, v10, 17, v8);
    goto LABEL_16;
  }
LABEL_7:
  v3 = (_DWORD *)a1[9];
  v11 = -1;
  v12 = (_DWORD *)a1[10];
  v19 = v7;
  v20 = -1;
  if ( v3 == v12 )
  {
LABEL_16:
    sub_23BDC4(a1 + 8, v3, &s, &v19, &v18, &v20);
    return;
  }
  ptr[0] = v22;
  if ( s )
    v11 = (int)&s[strlen(s)];
  sub_2350F8(ptr, s, v11);
  if ( v3 )
  {
    v13 = v18;
    v14 = v19;
    v15 = v20;
    *v3 = v3 + 2;
    sub_2350F8(v3, (_BYTE *)ptr[0], (int)ptr[0] + (unsigned int)ptr[1]);
    v3[6] = v14;
    v3[7] = v13;
    v3[8] = v15;
  }
  if ( ptr[0] != v22 )
    sub_339E64(ptr[0]);
  a1[9] += 36;
}
