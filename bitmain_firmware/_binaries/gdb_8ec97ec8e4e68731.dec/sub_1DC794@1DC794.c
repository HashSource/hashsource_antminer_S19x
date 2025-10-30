int __fastcall sub_1DC794(int a1, int a2, int a3)
{
  int v6; // r4
  int v8; // r0
  const char *v9; // r0
  int v10; // r0
  int *v11; // r1
  int **v12; // r2
  int v13; // r3
  bool v14; // zf
  int v15; // r10
  int v16; // r0
  int v17; // r1

  v6 = dword_48809C;
  if ( dword_48809C )
    return (*(int (**)(void))(*(_DWORD *)a1 + 64))();
  if ( off_46DAB8[1] || dword_48794C == 1 )
  {
    if ( a3 < 0 )
    {
      v15 = sub_25A3E4(
              "Because GDB is in replay mode, changing the value of a register will make the execution log unusable from "
              "this point onward.  Change all registers?");
      if ( v15 )
        goto LABEL_6;
      while ( 1 )
      {
        v16 = sub_1DD58C(a2);
        if ( v15 >= ((int (__fastcall *)(int))loc_166E9C)(v16) )
          break;
        v17 = v15++;
        ((void (__fastcall *)(int, int))loc_1DD9F4)(a2, v17);
      }
    }
    else
    {
      v8 = sub_1DD58C(a2);
      v9 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(v8, a3);
      if ( sub_25A3E4(
             "Because GDB is in replay mode, changing the value of a register will make the execution log unusable from t"
             "his point onward.  Change register %s?",
             v9) )
      {
LABEL_6:
        sub_1D9280(off_46DAB8 + 1);
        goto LABEL_7;
      }
      ((void (__fastcall *)(int, int))loc_1DD9F4)(a2, a3);
    }
    sub_946E0("Process record canceled the operation.");
  }
LABEL_7:
  if ( dword_4880E0 == dword_46DABC && dword_46DAC0 )
    sub_1D8CFC();
  dword_4880A4 = 0;
  dword_4880A0 = 0;
  if ( a3 < 0 )
  {
    while ( 1 )
    {
      v10 = sub_1DD58C(a2);
      if ( ((int (__fastcall *)(int))loc_166E9C)(v10) <= v6 )
        break;
      if ( sub_1DC2E4(a2, v6) )
        goto LABEL_20;
      ++v6;
    }
  }
  else if ( sub_1DC2E4(a2, a3) )
  {
LABEL_20:
    if ( dword_4880A0 )
      sub_1D9360((int *)dword_4880A0);
    sub_946E0("Process record: failed to record execution log.");
  }
  if ( ((int (*)(void))loc_1DC504)() )
    goto LABEL_20;
  v11 = off_46DAB8;
  v12 = (int **)dword_4880A4;
  v13 = dword_4880E0;
  off_46DAB8[1] = dword_4880A4;
  *v12 = v11;
  v14 = v13 == dword_46DABC;
  if ( v13 != dword_46DABC )
    ++v13;
  off_46DAB8 = (int *)dword_4880A0;
  if ( v14 )
    ((void (*)(void))loc_1D9548)();
  else
    dword_4880E0 = v13;
  return (*(int (**)(void))(*(_DWORD *)a1 + 64))();
}
