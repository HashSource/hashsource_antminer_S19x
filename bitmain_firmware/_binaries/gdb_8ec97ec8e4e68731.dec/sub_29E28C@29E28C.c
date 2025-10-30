int __fastcall sub_29E28C(int a1, void (__fastcall **a2)(int, __int64 *), unsigned int a3)
{
  int v4; // r5
  __int64 v5; // r6
  int v6; // r8
  int v7; // r3
  __int16 *v8; // r2
  char *v9; // r2
  int v11; // r2
  int v14; // r11
  bool v15; // zf
  __int16 *v16; // r2
  char *v17; // r2
  int v18; // r10
  int v19; // r10
  __int16 *v20; // r2
  bool v21; // zf
  int v22; // r3
  __int16 *v23; // r2

  v4 = a3 & 0x1000000;
  v5 = *(_QWORD *)a2;
  v6 = a3 & 0x800000;
  if ( (a3 & 0x20F0000) == 0xF0000 )
  {
    v14 = a3 & 0xFFF;
    ((void (__fastcall *)(_DWORD, const char *))v5)(HIDWORD(v5), "[pc");
    if ( v4 )
    {
      v15 = v14 == 0;
      if ( !v14 )
        v15 = (a3 & 0xA00000) == 0x800000;
      if ( !v15 )
      {
        v16 = (__int16 *)"";
        if ( !v6 )
          v16 = &word_3C1464;
        ((void (__fastcall *)(_DWORD, char *, __int16 *, int))v5)(HIDWORD(v5), ", #%s%d", v16, v14);
      }
      if ( !v6 )
        v14 = -v14;
      v17 = "";
      v18 = a1 + 8;
      if ( (a3 & 0x200000) != 0 )
        v17 = "!";
      v19 = v18 + v14;
      ((void (__fastcall *)(_DWORD, const char *, char *))v5)(HIDWORD(v5), "]%s", v17);
    }
    else
    {
      v20 = &word_3C1464;
      if ( v6 )
        v20 = (__int16 *)"";
      v19 = a1 + 8;
      ((void (__fastcall *)(_DWORD, const char *, __int16 *, int))v5)(HIDWORD(v5), "], #%s%d", v20, v14);
    }
    ((void (__fastcall *)(_DWORD, char *))v5)(HIDWORD(v5), "\t; ");
    a2[19](v19, (__int64 *)a2);
    return 0;
  }
  else
  {
    ((void (*)(_DWORD, const char *, ...))v5)(
      HIDWORD(v5),
      "[%s",
      (&off_3FDE3C[18 * dword_4707E4 + 2])[HIWORD(a3) & 0xF]);
    v7 = a3 & 0x2000000;
    if ( v4 )
    {
      if ( v7 )
      {
        v8 = (__int16 *)"";
        if ( !v6 )
          v8 = &word_3C1464;
        v4 = 0;
        ((void (__fastcall *)(_DWORD, char *, __int16 *))v5)(HIDWORD(v5), ", %s", v8);
        sub_29E138(a3, (int (*)(int, const char *, ...))v5, SHIDWORD(v5), 1);
      }
      else
      {
        v4 = a3 & 0xFFF;
        v21 = v4 == 0;
        if ( (a3 & 0xFFF) == 0 )
          v21 = (a3 & 0xA00000) == 0x800000;
        v22 = !v21;
        if ( v21 )
        {
          v4 = v22;
        }
        else
        {
          v23 = (__int16 *)"";
          if ( !v6 )
            v23 = &word_3C1464;
          ((void (__fastcall *)(_DWORD, char *, __int16 *, unsigned int))v5)(HIDWORD(v5), ", #%s%d", v23, a3 & 0xFFF);
        }
      }
      v9 = "!";
      if ( (a3 & 0x200000) == 0 )
        v9 = "";
      ((void (__fastcall *)(_DWORD, const char *, char *))v5)(HIDWORD(v5), "]%s", v9);
    }
    else
    {
      v15 = v7 == 0;
      LOWORD(v11) = (unsigned __int16)"";
      LOWORD(v7) = (unsigned __int16)&word_3C1464;
      if ( v15 )
      {
        v4 = a3 & 0xFFF;
        HIWORD(v11) = (unsigned int)"" >> 16;
        if ( !v6 )
        {
          HIWORD(v7) = (unsigned int)&word_3C1464 >> 16;
          v11 = v7;
        }
        ((void (__fastcall *)(_DWORD, const char *, int, unsigned int))v5)(HIDWORD(v5), "], #%s%d", v11, a3 & 0xFFF);
      }
      else
      {
        HIWORD(v11) = (unsigned int)"" >> 16;
        if ( !v6 )
        {
          HIWORD(v7) = (unsigned int)&word_3C1464 >> 16;
          v11 = v7;
        }
        ((void (__fastcall *)(_DWORD, const char *, int))v5)(HIDWORD(v5), "], %s", v11);
        sub_29E138(a3, (int (*)(int, const char *, ...))v5, SHIDWORD(v5), 1);
      }
    }
    if ( v6 )
      return v4;
    else
      return -v4;
  }
}
