void __fastcall sub_426E4(void *a1)
{
  double v1; // d0
  __int64 v2; // r0
  double v3; // r0
  __int64 v4; // r0
  double v5; // r0
  __int64 v6; // r0
  __int64 v7; // r0
  double v8; // [sp+8h] [bp-854h]
  char v10[2048]; // [sp+18h] [bp-844h] BYREF
  _BYTE v11[8]; // [sp+818h] [bp-44h] BYREF
  int v12; // [sp+820h] [bp-3Ch] BYREF
  int v13; // [sp+828h] [bp-34h] BYREF
  int v14; // [sp+830h] [bp-2Ch] BYREF
  void *ptr; // [sp+838h] [bp-24h]
  int *v16; // [sp+83Ch] [bp-20h]
  __int64 v17; // [sp+840h] [bp-1Ch]
  double v18; // [sp+848h] [bp-14h]
  double v19; // [sp+850h] [bp-Ch]

  v8 = v1;
  if ( v1 == 0.0 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      strcpy(v10, "Diff zero passed to set_target");
      sub_1DB6C(3, v10, 0);
    }
    v8 = 1.0;
  }
  v19 = 2.69595353e67 / v8;
  v18 = 2.69595353e67 / v8 / 6.27710174e57;
  v17 = sub_682D0(LODWORD(v18), HIDWORD(v18));
  v16 = &v14;
  sub_2CDE4();
  *(_QWORD *)v16 = v2;
  v3 = sub_68204(v17, HIDWORD(v17));
  v19 = v19 - v3 * 6.27710174e57;
  v18 = v19 / 3.40282367e38;
  v17 = sub_682D0(COERCE_UNSIGNED_INT64(v19 / 3.40282367e38), HIDWORD(COERCE_UNSIGNED_INT64(v19 / 3.40282367e38)));
  v16 = &v13;
  sub_2CDE4();
  *(_QWORD *)v16 = v4;
  v5 = sub_68204(v17, HIDWORD(v17));
  v19 = v19 - v5 * 3.40282367e38;
  v18 = v19 / 1.84467441e19;
  v17 = sub_682D0(COERCE_UNSIGNED_INT64(v19 / 1.84467441e19), HIDWORD(COERCE_UNSIGNED_INT64(v19 / 1.84467441e19)));
  v16 = &v12;
  sub_2CDE4();
  *(_QWORD *)v16 = v6;
  v18 = sub_68204(v17, HIDWORD(v17)) * 1.84467441e19;
  v19 = v19 - v18;
  v17 = sub_682D0(LODWORD(v19), HIDWORD(v19));
  v16 = (int *)v11;
  sub_2CDE4();
  *(_QWORD *)v16 = v7;
  if ( byte_865D0 )
  {
    ptr = sub_1FE6C((int)v11, 32);
    if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
    {
      snprintf(v10, 0x800u, "Generated target %s", (const char *)ptr);
      sub_1DB6C(7, v10, 0);
    }
    free(ptr);
  }
  sub_2AF08(a1, v11, 0x20u, "cgminer.c", "set_target", 8395);
}
