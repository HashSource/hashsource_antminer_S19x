int __fastcall sub_261670(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int v4; // r1

  if ( *(_DWORD *)nullsub_31(a1) != 1 )
    sub_946E0("Attempt to take address of value not located in memory.");
  v2 = (_DWORD *)sub_26BC70(a1);
  v3 = sub_1700C0(v2);
  v4 = ((int (__fastcall *)(int))loc_26C09C)(a1);
  return sub_26DC9C(v3, v4);
}
