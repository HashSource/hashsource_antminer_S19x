int __fastcall sub_BD1E8(int a1, int a2, int a3)
{
  int v3; // r3
  bool v4; // zf
  int result; // r0

  v3 = **(char **)(*(_DWORD *)a2 + 24);
  v4 = v3 == 1;
  if ( v3 != 1 )
    v4 = v3 == 8;
  if ( !v4 )
    sub_946E0("Invalid type of operand to `!'.");
  result = sub_C09B8(a1, 14);
  *(_DWORD *)a2 = a3;
  return result;
}
