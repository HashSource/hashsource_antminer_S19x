int __fastcall sub_1DC57C(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, size_t a9)
{
  _BOOL4 v12; // r1
  int v13; // r0
  const char *v14; // r0
  int v15; // r1
  int v16; // r0
  int **v17; // r0
  int v18; // r1
  int *v19; // r12
  bool v20; // zf
  _DWORD *v21; // r0

  if ( dword_48809C )
    return (*(int (__fastcall **)(_DWORD, int))(*a1 + 388))(*a1, a2);
  v12 = (unsigned int)(a2 - 2) <= 1;
  if ( !a5 )
    v12 = 0;
  if ( !v12 )
    return (*(int (__fastcall **)(_DWORD, int))(*a1 + 388))(*a1, a2);
  if ( off_46DAB8[1] || dword_48794C == 1 )
  {
    v13 = sub_16F654(a2 - 2);
    v14 = (const char *)sub_25AC8C(v13, a7);
    if ( !sub_25A3E4(
            "Because GDB is in replay mode, writing to memory will make the execution log unusable from this point onward"
            ".  Write memory at address %s?",
            v14) )
      sub_946E0("Process record canceled the operation.", v15, a3, a4);
    sub_1D9280(off_46DAB8 + 1);
  }
  if ( dword_4880E0 == dword_46DABC && dword_46DAC0 )
    sub_1D8CFC();
  dword_4880A4 = 0;
  dword_4880A0 = 0;
  if ( !sub_1DC3D4(a7, a9) && !((int (*)(void))loc_1DC504)() )
  {
    v17 = (int **)dword_4880A4;
    v18 = dword_4880E0;
    v19 = off_46DAB8;
    off_46DAB8[1] = dword_4880A4;
    *v17 = v19;
    v20 = v18 == dword_46DABC;
    if ( v18 != dword_46DABC )
      ++v18;
    off_46DAB8 = (int *)dword_4880A0;
    if ( v20 )
      ((void (*)(void))loc_1D9548)();
    else
      dword_4880E0 = v18;
    return (*(int (__fastcall **)(_DWORD, int))(*a1 + 388))(*a1, a2);
  }
  v16 = dword_4880A0;
  if ( dword_4880A0 )
    sub_1D9360((int *)dword_4880A0);
  if ( dword_487D4C )
  {
    v21 = (_DWORD *)sub_242FC8(v16);
    sub_2594B0(*v21, "Process record: failed to record execution log.");
  }
  return -1;
}
