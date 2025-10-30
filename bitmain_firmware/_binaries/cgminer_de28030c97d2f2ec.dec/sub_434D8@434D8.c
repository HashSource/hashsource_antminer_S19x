void __fastcall sub_434D8(void *a1)
{
  double v1; // d0
  double v2; // r0
  double v3; // r0
  double v4; // [sp+8h] [bp-854h]
  char v6[2048]; // [sp+18h] [bp-844h] BYREF
  __int64 v7; // [sp+818h] [bp-44h] BYREF
  __int64 v8; // [sp+820h] [bp-3Ch] BYREF
  __int64 v9; // [sp+828h] [bp-34h] BYREF
  __int64 v10; // [sp+830h] [bp-2Ch] BYREF
  void *ptr; // [sp+838h] [bp-24h]
  __int64 *v12; // [sp+83Ch] [bp-20h]
  __int64 v13; // [sp+840h] [bp-1Ch]
  double v14; // [sp+848h] [bp-14h]
  double v15; // [sp+850h] [bp-Ch]

  v4 = v1;
  if ( v1 == 0.0 )
  {
    if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
    {
      strcpy(v6, "Diff zero passed to set_target");
      sub_1E4EC(3, v6, 0);
    }
    v4 = 1.0;
  }
  v15 = 2.69595353e67 / v4;
  v14 = 2.69595353e67 / v4 / 6.27710174e57;
  v13 = sub_68F40(LODWORD(v14), HIDWORD(v14));
  v12 = &v10;
  v10 = v13;
  v2 = sub_68E74(v13, HIDWORD(v13));
  v15 = v15 - v2 * 6.27710174e57;
  v14 = v15 / 3.40282367e38;
  v13 = sub_68F40(COERCE_UNSIGNED_INT64(v15 / 3.40282367e38), HIDWORD(COERCE_UNSIGNED_INT64(v15 / 3.40282367e38)));
  v12 = &v9;
  v9 = v13;
  v3 = sub_68E74(v13, HIDWORD(v13));
  v15 = v15 - v3 * 3.40282367e38;
  v14 = v15 / 1.84467441e19;
  v13 = sub_68F40(COERCE_UNSIGNED_INT64(v15 / 1.84467441e19), HIDWORD(COERCE_UNSIGNED_INT64(v15 / 1.84467441e19)));
  v12 = &v8;
  v8 = v13;
  v14 = sub_68E74(v13, HIDWORD(v13)) * 1.84467441e19;
  v15 = v15 - v14;
  v13 = sub_68F40(LODWORD(v15), HIDWORD(v15));
  v12 = &v7;
  v7 = v13;
  if ( byte_87768 )
  {
    ptr = sub_20744((int)&v7, 32);
    if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
    {
      snprintf(v6, 0x800u, "Generated target %s", (const char *)ptr);
      sub_1E4EC(7, v6, 0);
    }
    free(ptr);
  }
  sub_2BEFC(a1, &v7, 0x20u, "cgminer.c", "set_target", 8395);
}
