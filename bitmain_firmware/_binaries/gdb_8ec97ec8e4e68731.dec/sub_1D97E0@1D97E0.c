int __fastcall sub_1D97E0(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _BOOL4 v7; // r7
  int v8; // lr
  int v9; // r6
  _BOOL4 v10; // r0
  int result; // r0
  int v12; // r11
  int v13; // r0
  int v14; // r0

  v7 = a5;
  v8 = off_46DAB8[1];
  LOWORD(v9) = (unsigned __int16)&dword_4899A0;
  v10 = dword_48794C != 1;
  dword_48808C = dword_48794C;
  if ( v8 )
    v10 = 0;
  dword_488090 = a5;
  dword_4880E4 = 1;
  if ( v10 )
  {
    HIWORD(v9) = 72;
    v12 = (*(int (__fastcall **)(int, int, int, int))(v9 + 0x1C8))(v9, a2, a3, a4);
    v13 = sub_1DDBBC(v12);
    ((void (__fastcall *)(int, int))loc_1D9670)(v13, a6);
    if ( !a5 )
    {
      if ( ((int (__fastcall *)(int))loc_16A0D4)(v12) )
      {
        v14 = ((int (*)(void))loc_23DBE4)();
        if ( sub_23DD7C(v14) )
          dword_488090 = 1;
        else
          v7 = sub_DCAA4(v12) == 0;
      }
      else
      {
        v7 = 1;
      }
    }
    sub_230A78(0, 0);
    (*(void (__fastcall **)(_DWORD, int, int, int, _BOOL4, int))(*a1 + 48))(*a1, a2, a3, a4, v7, a6);
  }
  else
  {
    HIWORD(v9) = (unsigned int)&dword_4899A0 >> 16;
  }
  result = (*(int (__fastcall **)(int *))(v9 + 344))(&dword_4899A0);
  if ( result )
    return sub_232914(1);
  return result;
}
