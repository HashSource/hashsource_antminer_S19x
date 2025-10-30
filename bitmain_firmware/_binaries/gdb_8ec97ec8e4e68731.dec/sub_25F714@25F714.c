int __fastcall sub_25F714(_DWORD *a1, int a2, int a3)
{
  int v6; // r5

  if ( **(_BYTE **)(sub_171258(a1) + 24) == 10 )
    sub_946E0("Attempt to dereference a generic pointer.");
  v6 = sub_26DD30(a1, 0, a2);
  if ( !a3 )
    ((void (*)(void))loc_26E00C)();
  return v6;
}
