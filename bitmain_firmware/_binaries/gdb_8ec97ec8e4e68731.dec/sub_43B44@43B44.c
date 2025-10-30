int __fastcall sub_43B44(
        int a1,
        int a2,
        const char *a3,
        char *a4,
        const void *a5,
        unsigned __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  unsigned __int64 v8; // r6
  int v14; // r0
  unsigned int v15; // r0
  int v16; // r0
  int v17; // r0
  int v18; // r11
  int v19; // r3
  __int64 v20; // r0
  int v21; // [sp+4h] [bp-70h]
  unsigned __int64 v22; // [sp+20h] [bp-54h]
  int v23; // [sp+2Ch] [bp-48h]
  _BYTE v24[68]; // [sp+30h] [bp-44h] BYREF

  v8 = a6;
  switch ( a2 )
  {
    case 7:
      return ((int (__fastcall *)(int, int, const char *, char *, const void *))loc_BC048)(a1, 7, a3, a4, a5);
    case 15:
      v20 = ((__int64 (__fastcall *)(const char *, char *, _DWORD, _DWORD, _DWORD, _DWORD))loc_49320)(
              a3,
              a4,
              a6,
              HIDWORD(a6),
              a7,
              HIDWORD(a7));
      *a8 = v20;
      return v20 != 0;
    case 1:
      return sub_432B8(a3, a4, a5, SHIDWORD(a7), a6, a7, a8);
    case 2:
      v14 = sub_16F654(a1);
      v15 = ((int (__fastcall *)(int))loc_16666C)(v14);
      if ( v15 <= 0x3F )
        v8 = a6 & __PAIR64__(~((unsigned __int64)(-1LL << v15) >> 32), ~(-1 << v15));
      if ( a7 < 12 )
        return ((int (__fastcall *)(int, int, const char *, char *, const void *, int, _DWORD, _DWORD, _DWORD, _DWORD, __int64 *))off_472194)(
                 a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 v21,
                 v8,
                 HIDWORD(v8),
                 a7,
                 HIDWORD(a7),
                 a8);
      v16 = sub_98F68(&dword_4878EC);
      sub_93170(v24, 64, "/proc/%ld/mem", v16);
      v17 = sub_967B4(v24, (a4 == 0) | 0x20000, 0);
      v18 = v17;
      if ( v17 == -1 )
        return ((int (__fastcall *)(int, int, const char *, char *, const void *, int, _DWORD, _DWORD, _DWORD, _DWORD, __int64 *))off_472194)(
                 a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 v21,
                 v8,
                 HIDWORD(v8),
                 a7,
                 HIDWORD(a7),
                 a8);
      v21 = HIDWORD(v8);
      v19 = a4 ? pread64(v17, a4) : pwrite64(v17, a5);
      v23 = v19;
      close(v18);
      v22 = v23 + 1LL;
      if ( v22 <= 1 )
      {
        return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))off_472194)(
                 a1,
                 a2,
                 a3,
                 a4,
                 a5,
                 v21,
                 v8,
                 HIDWORD(v8),
                 a7,
                 HIDWORD(a7),
                 a8);
      }
      else
      {
        *a8 = v23;
        return 1;
      }
    default:
      return ((int (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))off_472194)(
               a1,
               a2,
               a3,
               a4,
               a5,
               v21,
               v8,
               HIDWORD(v8),
               a7,
               HIDWORD(a7),
               a8);
  }
}
