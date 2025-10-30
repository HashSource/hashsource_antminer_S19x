int __fastcall sub_1E6604(int a1)
{
  int v3; // r0
  int v4; // r1
  int v5[2]; // [sp+14h] [bp-8h] BYREF

  if ( strcmp((const char *)dword_487A40, "target:") )
    return 0;
  v3 = ((int (__fastcall *)(int))loc_1E2198)(11);
  if ( !v3 )
  {
    v4 = sub_1E62F8(a1, 0, "just probing", 0, 448, 0, v5);
    if ( v4 >= 0 )
      sub_1E6548(a1, v4, v5);
    v3 = ((int (__fastcall *)(int, int))loc_1E2198)(11, v4);
  }
  if ( v3 != 2 )
    return 0;
  if ( !dword_488CEC )
  {
    sub_946B0("remote target does not support file transfer, attempting to access files from local filesystem.");
    dword_488CEC = 1;
  }
  return 1;
}
