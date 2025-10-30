void __fastcall sub_2D950(void *a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // d8
  __int64 v5; // kr00_8
  double v6; // d8
  __int64 v7; // kr08_8
  double v8; // r0
  __int64 v9; // r0
  char *v10; // r6
  _QWORD v11[4]; // [sp+8h] [bp-824h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_74500 || byte_68BD4 || dword_67DB4 > 2 )
    {
      v3 = 4294901760LL;
      strcpy(s, "Diff zero passed to set_target");
      sub_20F58(3, s, 0);
      v9 = 0;
      v5 = 0;
      v7 = 0;
    }
    else
    {
      v9 = 0;
      v3 = 4294901760LL;
      v5 = 0;
      v7 = 0;
    }
  }
  else
  {
    v3 = sub_4A1D8(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v4 = 2.69595353e67 / v1 - sub_4A10C(v3, HIDWORD(v3)) * 6.27710174e57;
    v5 = sub_4A1D8(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
    v6 = v4 - sub_4A10C(v5, HIDWORD(v5)) * 3.40282367e38;
    v7 = sub_4A1D8(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
    v8 = sub_4A10C(v7, HIDWORD(v7));
    v9 = sub_4A1D8(
           COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19),
           HIDWORD(COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19)));
  }
  v11[3] = v3;
  v11[2] = v5;
  v11[1] = v7;
  v11[0] = v9;
  if ( byte_68BD5 )
  {
    v10 = sub_22C24((int)v11, 32);
    if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v10);
      sub_20F58(7, s, 0);
    }
    free(v10);
  }
  sub_254E8(a1, v11, 0x20u, (int)"cgminer.c", (int)"set_target", 8316);
}
