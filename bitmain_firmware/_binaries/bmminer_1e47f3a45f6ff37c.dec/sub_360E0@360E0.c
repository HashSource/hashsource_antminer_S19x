int __fastcall sub_360E0(int a1)
{
  double v1; // d0
  __int64 v3; // d9
  double v4; // d8
  __int64 v5; // kr00_8
  double v6; // d8
  __int64 v7; // kr08_8
  double v8; // r0
  __int64 v9; // r0
  const char *v11; // r0
  char *v12; // r6
  int v13; // r3
  _QWORD v14[4]; // [sp+8h] [bp-824h] BYREF
  char s[2052]; // [sp+28h] [bp-804h] BYREF

  if ( v1 == 0.0 )
  {
    if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 2 )
    {
      v3 = 4294901760LL;
      strcpy(s, "Diff zero passed to set_target");
      sub_3B6AC(3, s, 0, *(_DWORD *)"et");
    }
    else
    {
      v3 = 4294901760LL;
    }
    v9 = 0;
    v5 = 0;
    v7 = 0;
  }
  else
  {
    v3 = sub_8FE80(
           COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58),
           HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v1 * 1.59309191e-58)));
    v4 = 2.69595353e67 / v1 - COERCE_DOUBLE(sub_8FDB4(v3, HIDWORD(v3))) * 6.27710174e57;
    v5 = sub_8FE80(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39), HIDWORD(COERCE_UNSIGNED_INT64(v4 * 2.93873588e-39)));
    v6 = v4 - COERCE_DOUBLE(sub_8FDB4(v5, HIDWORD(v5))) * 3.40282367e38;
    v7 = sub_8FE80(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20), HIDWORD(COERCE_UNSIGNED_INT64(v6 * 5.42101086e-20)));
    v8 = COERCE_DOUBLE(sub_8FDB4(v7, HIDWORD(v7)));
    v9 = sub_8FE80(
           COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19),
           HIDWORD(COERCE_UNSIGNED_INT64(v6 - v8 * 1.84467441e19)));
  }
  v14[3] = v3;
  v14[2] = v5;
  v14[1] = v7;
  v14[0] = v9;
  if ( byte_4B9A22 )
  {
    v11 = (const char *)sub_3D370(v14, 32);
    v12 = (char *)v11;
    if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v11);
      sub_3B6AC(7, s, 0, v13);
    }
    free(v12);
  }
  return ((int (__fastcall *)(int, _QWORD *, int, const char *, const char *, int))sub_3EA8C)(
           a1,
           v14,
           32,
           "bmminer.c",
           "set_target",
           1145);
}
