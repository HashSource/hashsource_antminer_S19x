int __fastcall sub_35A98(int a1)
{
  double v1; // d0
  __int64 v3; // r6
  double v4; // d8
  __int64 v5; // kr00_8
  double v6; // d8
  __int64 v7; // kr08_8
  double v8; // r0
  __int64 v9; // r0
  char *v11; // r6
  int v12; // r3
  _QWORD v13[4]; // [sp+8h] [bp-824h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 2 )
    {
      v3 = 4294901760LL;
      strcpy(s, "Diff zero passed to set_target");
      sub_3AF5C(3, s, 0, *(_DWORD *)"et");
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
    v3 = sub_8CB18(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v4 = 2.69595353e67 / v1 - sub_8CA4C(v3, HIDWORD(v3)) * 6.27710174e57;
    v5 = sub_8CB18(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
    v6 = v4 - sub_8CA4C(v5, HIDWORD(v5)) * 3.40282367e38;
    v7 = sub_8CB18(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
    v8 = sub_8CA4C(v7, HIDWORD(v7));
    v9 = sub_8CB18(
           COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19),
           HIDWORD(COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19)));
  }
  v13[3] = v3;
  v13[2] = v5;
  v13[1] = v7;
  v13[0] = v9;
  if ( byte_4B6CA6 )
  {
    v11 = (char *)sub_3CB70(v13, 32);
    if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v11);
      sub_3AF5C(7, s, 0, v12);
    }
    free(v11);
  }
  return ((int (__fastcall *)(int, _QWORD *, int, const char *, const char *, int))sub_3E3A8)(
           a1,
           v13,
           32,
           "bmminer.c",
           "set_target",
           1145);
}
