int __fastcall sub_26160C(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  int v4; // r4
  _DWORD *v5; // r5
  int v6; // r1

  v2 = (_DWORD *)sub_26BC70(a1);
  v3 = sub_171258(v2);
  v4 = sub_2615A8(a1);
  if ( *(_DWORD *)nullsub_31(v4) != 1 )
    sub_946E0("Attempt to take address of value not located in memory.");
  v5 = sub_1700C0(*(_DWORD **)(*(_DWORD *)(v3 + 24) + 20));
  v6 = ((int (__fastcall *)(int))loc_26C09C)(v4);
  return sub_26DC9C(v5, v6);
}
