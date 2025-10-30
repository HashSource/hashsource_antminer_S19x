__int64 __fastcall sub_230340(
        int a1,
        unsigned int a2,
        const char *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        void (__fastcall *a7)(_DWORD, _DWORD),
        int a8)
{
  int v10; // r8
  int v11; // r0
  __int64 v12; // r4
  __int64 v13; // r0
  int v14; // r0
  int v16; // [sp+4h] [bp-38h]
  __int64 v19; // [sp+30h] [bp-Ch] BYREF

  if ( a2 - 2 <= 3 )
  {
    v11 = sub_16F654(a1);
    v10 = ((int (__fastcall *)(int))loc_16EA14)(v11);
  }
  else
  {
    v10 = 1;
  }
  if ( a7 )
    ((void (__fastcall *)(_DWORD, _DWORD, int))a7)(0, 0, a8);
  if ( a6 < 1 )
    return a6;
  v12 = 0;
  while ( 1 )
  {
    v14 = sub_22F850(
            __SPAIR64__(a2, a1),
            a3,
            0,
            a4 + v10 * v12,
            v16,
            v12 + a5,
            (unsigned __int64)(v12 + a5) >> 32,
            a6 - v12,
            &v19);
    if ( v14 != 1 )
      break;
    v13 = v19;
    if ( a7 )
    {
      a7(v19, HIDWORD(v19));
      v13 = v19;
    }
    v12 += v13;
    sub_258BD4(v13);
    if ( v12 >= a6 )
      return a6;
  }
  if ( v14 )
    return -1;
  return v12;
}
