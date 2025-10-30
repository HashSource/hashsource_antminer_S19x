int __fastcall sub_A457C(_DWORD *a1, char *a2, int a3)
{
  int result; // r0
  int v6; // [sp+Ch] [bp-6Ch] BYREF
  _BYTE v7[104]; // [sp+10h] [bp-68h] BYREF

  v6 = 0;
  result = sub_BBEDC(a2, 58, 1, (int)sub_A23FC, (int)&v6);
  if ( result )
  {
    result = 1;
    if ( a1 )
      return sub_A44F0(a1, v7, v6, a3);
  }
  return result;
}
