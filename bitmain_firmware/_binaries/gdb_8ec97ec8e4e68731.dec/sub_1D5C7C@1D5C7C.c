int __fastcall sub_1D5C7C(int a1, int a2, unsigned int a3, int a4, unsigned int a5, int a6, int a7)
{
  int v9; // r5
  int v10; // r0
  bool v11; // zf
  bool v12; // zf
  int v13; // r4
  _DWORD *v15; // r0
  _DWORD v16[2]; // [sp+8h] [bp-10h] BYREF
  int v17[2]; // [sp+10h] [bp-8h] BYREF

  v9 = *(_DWORD *)sub_242FDC(a1);
  v10 = sub_2578AC(v9, 0);
  if ( dword_487D4C )
  {
    v15 = (_DWORD *)sub_242FC8(v10);
    v10 = sub_2594B0(*v15, "[record-btrace] call-history (0x%x): [%u; %u)\n", a7, a3, a5);
  }
  v11 = a4 == 0;
  if ( !a4 )
    v11 = 1;
  if ( !v11 )
    goto LABEL_17;
  v12 = a6 == 0;
  if ( !a6 )
    v12 = 1;
  if ( !v12 )
LABEL_17:
    sub_946E0("Bad range.");
  if ( a3 > a5 )
    sub_946E0("Bad range.");
  v13 = sub_1D49EC(v10) + 252;
  if ( !sub_E1E08(v16, v13, a3) )
    sub_946E0("Range out of bounds.");
  if ( sub_E1E08(v17, v13, a5) )
    sub_E1C60(v17, 1);
  else
    sub_E1C24(v17, v13);
  ((void (__fastcall *)(int, int, _DWORD *, int *, int))loc_1D5850)(v9, v13, v16, v17, a7);
  ((void (__fastcall *)(int, _DWORD *, int *))loc_E1E9C)(v13, v16, v17);
  return sub_25734C(v9, 0);
}
