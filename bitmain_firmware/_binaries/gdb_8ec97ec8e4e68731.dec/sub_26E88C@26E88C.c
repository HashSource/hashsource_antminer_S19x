_BYTE *__fastcall sub_26E88C(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _BYTE *v8; // r7
  int v9; // r0
  __int64 v10; // r8

  if ( *(_DWORD *)a1 == 1 && (*(_BYTE *)(a1 + 4) & 2) != 0 )
  {
    v8 = sub_26BB08(a2);
  }
  else
  {
    v8 = sub_26BB80(a2);
    v9 = (int)a2;
    v10 = *((_QWORD *)v8 + 9);
    sub_170058(v9);
    sub_26E83C((int)v8, 0, v10, SHIDWORD(v10), a1);
  }
  *((_QWORD *)v8 + 4) = __PAIR64__(a4, a3) + *(_QWORD *)(a1 + 32) + *(_QWORD *)(a1 + 72);
  ((void (__fastcall *)(_BYTE *, int))loc_26C744)(v8, a1);
  return v8;
}
