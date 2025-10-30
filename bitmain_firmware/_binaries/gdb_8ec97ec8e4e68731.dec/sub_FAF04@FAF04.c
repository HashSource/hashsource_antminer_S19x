int __fastcall sub_FAF04(
        _DWORD *a1,
        int a2,
        const char *a3,
        void *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v11; // r0
  int v12; // r4
  __int64 v14; // r0
  __int64 v15; // r0
  int v16; // r0
  unsigned int v17; // r4
  size_t n; // r4
  int v19; // r0
  unsigned int v20; // r4
  int v21; // r0
  unsigned int v22; // r4
  char v23[8]; // [sp+20h] [bp-6Ch] BYREF
  unsigned __int64 v24; // [sp+28h] [bp-64h]
  unsigned __int64 v25; // [sp+30h] [bp-5Ch]
  int v26; // [sp+38h] [bp-54h]
  int v27; // [sp+3Ch] [bp-50h]
  __int64 v28; // [sp+40h] [bp-4Ch]

  switch ( a2 )
  {
    case 1:
      goto LABEL_2;
    case 2:
      return sub_95540(a4, a5, a6, a7, (_QWORD *)a8, *(_DWORD *)dword_47AD00, *(_DWORD *)(dword_47AD00 + 4), 0);
    case 7:
      if ( !a4 )
        return -1;
      v16 = sub_2AD7AC(dword_47ACB8, ".auxv");
      if ( !v16 )
        return -1;
      v17 = *(_DWORD *)(v16 + 36);
      if ( v17 <= a6 )
        return 0;
      n = v17 - a6;
      if ( n > a7 )
        n = a7;
      if ( !n )
        return 0;
      if ( sub_2ADEDC(dword_47ACB8, v16, a4, a7, a6, SHIDWORD(a6), n) )
        goto LABEL_47;
      sub_946B0("Couldn't read NT_AUXV note in core file.");
      return -1;
    case 8:
      if ( !a4 )
        return -1;
      v19 = sub_2AD7AC(dword_47ACB8, ".wcookie");
      if ( !v19 )
        return -1;
      v20 = *(_DWORD *)(v19 + 36);
      if ( v20 <= a6 )
        return 0;
      n = v20 - a6;
      if ( n > a7 )
        n = a7;
      if ( !n )
        return 0;
      if ( sub_2ADEDC(dword_47ACB8, v19, a4, a7, a6, SHIDWORD(a6), n) )
        goto LABEL_47;
      sub_946B0("Couldn't read StackGhost cookie in core file.");
      return -1;
    case 12:
      if ( !dword_47ACBC )
        goto LABEL_2;
      if ( ((int (*)(void))loc_16B4B4)() )
      {
        if ( !a5 )
        {
          LODWORD(v14) = ((int (__fastcall *)(int, void *, _DWORD, _DWORD, _DWORD, _DWORD))loc_16B500)(
                           dword_47ACBC,
                           a4,
                           a6,
                           HIDWORD(a6),
                           a7,
                           HIDWORD(a7));
          goto LABEL_15;
        }
        return -1;
      }
LABEL_11:
      if ( dword_47ACBC && ((int (*)(void))loc_16B5D8)() )
      {
        if ( !a5 )
        {
          v14 = ((__int64 (__fastcall *)(int, void *, _DWORD, _DWORD, _DWORD, _DWORD))loc_16B624)(
                  dword_47ACBC,
                  a4,
                  a6,
                  HIDWORD(a6),
                  a7,
                  HIDWORD(a7));
LABEL_15:
          *(_QWORD *)a8 = v14;
          return v14 != 0;
        }
        return -1;
      }
LABEL_2:
      v11 = (int)a3;
      if ( a3 )
        v11 = 1;
      if ( a4 )
        v12 = v11;
      else
        v12 = 0;
      if ( !v12 )
      {
        if ( a4 )
        {
          v24 = a6;
          *(_DWORD *)v23 = a4;
          v26 = 0;
          v27 = 0;
          v25 = a7;
          v28 = 0;
          sub_2ADCFC(dword_47ACB8, sub_FB380, v23);
          if ( v28 )
          {
            *(_QWORD *)a8 = v28;
            return 1;
          }
          return 0;
        }
        return -1;
      }
      sub_93170(v23, 0x64u, "SPU/%s", a3);
      v21 = sub_2AD7AC(dword_47ACB8, v23);
      if ( !v21 )
        return -1;
      v22 = *(_DWORD *)(v21 + 36);
      if ( v22 <= a6 )
        return 0;
      n = v22 - a6;
      if ( n > a7 )
        n = a7;
      if ( !n )
        return 0;
      if ( sub_2ADEDC(dword_47ACB8, v21, a4, a7, a6, SHIDWORD(a6), n) )
      {
LABEL_47:
        *(_DWORD *)a8 = n;
        *(_DWORD *)(a8 + 4) = 0;
        return 1;
      }
      else
      {
        sub_946B0("Couldn't read SPU section in core file.");
        return -1;
      }
    case 14:
      goto LABEL_11;
    case 16:
      if ( !a4 )
        return -1;
      if ( !dword_47ACBC )
        return -1;
      if ( !((int (*)(void))loc_16B914)() )
        return -1;
      LODWORD(v15) = ((int (__fastcall *)(int, void *, _DWORD, _DWORD, _DWORD, _DWORD))loc_16B960)(
                       dword_47ACBC,
                       a4,
                       a6,
                       HIDWORD(a6),
                       a7,
                       HIDWORD(a7));
      if ( v15 < 0 )
        return -1;
      *(_QWORD *)a8 = v15;
      return v15 != 0;
    default:
      return (*(int (__fastcall **)(_DWORD))(*a1 + 388))(*a1);
  }
}
