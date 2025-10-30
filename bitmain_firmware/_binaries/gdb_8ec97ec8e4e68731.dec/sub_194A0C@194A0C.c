void sub_194A0C()
{
  char ***v0; // r5
  char ***v1; // r4
  _DWORD *v2; // r0
  char *v3; // r11
  _DWORD *v4; // r7
  char *v5; // r6
  char **v6; // r3
  char **v7; // t1
  _DWORD *v8; // r3
  char *v9; // r11
  const char **v10; // r7
  const char **v11; // r11
  const char *v12; // r6
  const char *v13; // t1
  const char **i; // r4
  const char *v15; // r5
  char ***v16; // r6
  char **v17; // t1
  char *v18; // r2
  int v19; // r7
  int v20; // r0
  const char **v21; // r3
  char **v22; // t1
  const char *v23; // r11
  const char *v24; // r7
  int v25; // r0
  char ***v26; // [sp+24h] [bp-28h]
  int (**v27)(); // [sp+2Ch] [bp-20h] BYREF
  const char *v28; // [sp+30h] [bp-1Ch]
  int v29; // [sp+34h] [bp-18h]
  char v30; // [sp+38h] [bp-14h] BYREF

  dword_487A0C = (int)sub_16EBC0((int)sub_193B78);
  sub_533F8(
    "check",
    -1,
    (int)sub_193BF0,
    (int)"Set the status of the type/range checker.",
    &dword_474774,
    (int)"set check ",
    0,
    (int **)&dword_47475C);
  sub_54724((int)&word_3FD7C8, (unsigned __int8 *)"check", -1, 1, &dword_47475C);
  sub_54724((int)"ch", (unsigned __int8 *)"check", -1, 1, &dword_47475C);
  sub_533F8(
    "check",
    -1,
    (int)sub_193BD8,
    (int)"Show the status of the type/range checker.",
    &dword_474770,
    (int)"show check ",
    0,
    (int **)&dword_47474C);
  v0 = off_46D5A4;
  sub_54724((int)&word_3FD7C8, (unsigned __int8 *)"check", -1, 1, &dword_47474C);
  sub_54724((int)"ch", (unsigned __int8 *)"check", -1, 1, &dword_47474C);
  v1 = off_46D5A4;
  sub_534EC(
    "range",
    4,
    (int)&off_3C12B8,
    (int)&dword_4879FC,
    "Set range checking.  (on/warn/off/auto)",
    "Show range checking.  (on/warn/off/auto)",
    0,
    (int)sub_193D38,
    (int)sub_194034,
    (int **)&dword_474774,
    (int **)&dword_474770);
  sub_534EC(
    "case-sensitive",
    4,
    (int)&off_3C12CC,
    (int)&dword_4879F8,
    "Set case sensitivity in name search.  (on/off/auto)",
    "Show case sensitivity in name search.  (on/off/auto)",
    "For Fortran the default is off; for other languages the default is on.",
    (int)sub_193C70,
    (int)&loc_194100,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  v2 = (_DWORD *)sub_98450(68);
  v3 = (char *)(v2 + 3);
  *v2 = "auto";
  v4 = v2;
  v5 = (char *)(v2 + 3);
  dword_487A10 = (int)v2;
  v2[1] = "local";
  v2[2] = "unknown";
  do
  {
    v7 = v1[1];
    ++v1;
    v6 = v7;
    if ( (unsigned int)v7[2] > 1 )
    {
      *(_DWORD *)v5 = *v6;
      v5 += 4;
    }
  }
  while ( v1 != &off_46D5E0 );
  *(_DWORD *)v5 = 0;
  if ( v3 != v5 )
  {
    sub_1950DC(v2 + 3, v5, 2 * (31 - __clz((v5 - v3) >> 2)), sub_193A28);
    if ( v5 - v3 <= 64 )
    {
      sub_194ED4(v3, v5, sub_193A28);
    }
    else
    {
      sub_194ED4(v3, v4 + 19, sub_193A28);
      v8 = v4 + 19;
      if ( v5 != (char *)(v4 + 19) )
      {
        v9 = (char *)(v4 + 20);
        v10 = (const char **)(v4 + 18);
        v11 = (const char **)((char *)v8 + v5 - v9);
        v26 = v1;
        do
        {
          v13 = v10[1];
          ++v10;
          v12 = v13;
          for ( i = v10; ; --i )
          {
            v15 = *(i - 1);
            if ( strcmp(v12, v15) >= 0 )
              break;
            *i = v15;
          }
          *i = v12;
        }
        while ( v10 != v11 );
        v0 = off_46D5A4;
        v1 = v26;
      }
    }
  }
  v16 = off_46D5A4;
  do
  {
    v17 = v16[1];
    ++v16;
    v18 = v17[7];
    if ( v18 && *(_DWORD *)v18 )
    {
      v19 = 4;
      do
      {
        sub_215F54();
        v20 = *(_DWORD *)&(*v16)[7][v19];
        v19 += 4;
      }
      while ( v20 );
    }
  }
  while ( v16 != v1 );
  sub_256760(&v27);
  v27 = &off_3F2924;
  v28 = &v30;
  v29 = 0;
  v30 = 0;
  sub_25678C(
    &v27,
    "Set the current source language.\n"
    "The currently understood settings are:\n"
    "\n"
    "local or auto    Automatic setting based on source file\n");
  do
  {
    v22 = v0[1];
    ++v0;
    v21 = (const char **)v22;
    if ( (unsigned int)v22[2] > 1 )
    {
      v23 = *v21;
      v24 = *v21 + 1;
      v25 = toupper(*(unsigned __int8 *)*v21);
      sub_25678C(&v27, "%-16s Use the %c%s language\n", v23, v25, v24);
    }
  }
  while ( v0 != v16 );
  sub_534EC(
    "language",
    4,
    dword_487A10,
    (int)&dword_487A00,
    v28,
    "Show the current source language.",
    0,
    (int)&loc_193E2C,
    (int)sub_193F84,
    (int **)&dword_47475C,
    (int **)&dword_47474C);
  sub_256478(&v27);
  dword_487A00 = sub_327254("auto");
  sub_327254("auto");
  dword_4879FC = sub_327254("auto");
  dword_4879F8 = sub_327254("auto");
  off_46D5A4[0] = (char **)off_46D5AC;
  sub_193C2C();
}
