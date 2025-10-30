int __fastcall sub_DD974(_DWORD *a1, int *a2)
{
  int v4; // r1
  int v5; // r7
  _DWORD *v6; // r5
  _DWORD *v8; // r6
  int v9; // r3
  _DWORD *v10; // r6
  int v11; // r3
  int v12; // r3
  _DWORD *v13; // [sp+4h] [bp-8h] BYREF

  v4 = *a2;
  if ( (unsigned int)(a1[3] - 27) > 2 )
    sub_C71F8(v4);
  else
    ((void (*)(void))loc_C945C)();
  v5 = *a2;
  sub_E0464(&v13, a2);
  v6 = v13;
  if ( !v13 )
    goto LABEL_9;
  if ( !v13[1] )
  {
    v8 = v13;
    (*(void (__fastcall **)(_DWORD *))(*v13 + 8))(v13);
    v9 = v6[2];
    v6[2] = v9 - 1;
    if ( v9 == 1 )
      (*(void (__fastcall **)(_DWORD *))(*v8 + 12))(v8);
LABEL_9:
    v10 = (_DWORD *)a1[12];
    a1[11] = v5;
    a1[12] = v6;
    if ( !v10 )
      return sub_1B9D50(a1);
    goto LABEL_10;
  }
  v10 = (_DWORD *)a1[12];
  a1[11] = v5;
  a1[12] = v6;
  if ( !v10 )
    return sub_1B9D50(a1);
LABEL_10:
  v11 = v10[1];
  v10[1] = v11 - 1;
  if ( v11 == 1 )
  {
    (*(void (__fastcall **)(_DWORD *))(*v10 + 8))(v10);
    v12 = v10[2];
    v10[2] = v12 - 1;
    if ( v12 == 1 )
      (*(void (__fastcall **)(_DWORD *))(*v10 + 12))(v10);
  }
  return sub_1B9D50(a1);
}
