int __fastcall sub_1E3660(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD v4[3]; // [sp+4h] [bp-Ch] BYREF

  v4[0] = a1;
  v4[1] = a2;
  v4[2] = a3;
  if ( sub_98F78(v4, dword_488C70) )
    return 1;
  result = ps_getpid_0((int)v4);
  if ( result )
    return sub_98F68((int)v4) == 0;
  return result;
}
