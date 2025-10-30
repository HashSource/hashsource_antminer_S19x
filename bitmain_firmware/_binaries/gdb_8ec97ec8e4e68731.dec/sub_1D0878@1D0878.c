_DWORD *__fastcall sub_1D0878(_DWORD *a1, int a2)
{
  int v2; // r3
  int v4; // r2
  void (*v5)(void); // r3
  _DWORD *v6; // r6
  _DWORD *v7; // r5
  const char *v9; // r0
  int v10; // r0
  _DWORD *v11; // r0

  v2 = a1[3];
  if ( (v2 & 0x10) != 0 )
    return a1;
  v4 = a1[33];
  a1[3] = v2 | 0x10;
  v5 = *(void (**)(void))(v4 + 12);
  if ( !v5 )
    return a1;
  v6 = a1 + 27;
  v7 = a1 + 30;
  if ( !a2 )
  {
    v5();
    sub_1D28E4(v6);
    sub_1D28E4(v7);
    return a1;
  }
  v9 = (const char *)sub_1B87A8((int)a1);
  v10 = sub_259858("Reading symbols from %s...", v9);
  v11 = (_DWORD *)sub_242F8C(v10);
  sub_25680C(*v11);
  (*(void (__fastcall **)(_DWORD *))(a1[33] + 12))(a1);
  sub_1D28E4(v6);
  sub_1D28E4(v7);
  if ( !sub_1B7AA4(a1) )
  {
    sub_259B58("");
    sub_259858("(no debugging symbols found)...");
    sub_259B58("");
  }
  sub_259858("done.\n");
  return a1;
}
