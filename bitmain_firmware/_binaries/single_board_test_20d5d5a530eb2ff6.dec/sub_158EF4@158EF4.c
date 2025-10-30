int __fastcall sub_158EF4(_DWORD *a1, _DWORD *a2)
{
  int result; // r0

  if ( sub_C6CD4(a1, a2) || sub_B85B0(a2[3]) )
    return 1;
  result = sub_C7110(a1, a2);
  if ( result )
    return sub_174BC8(a2[3], a2[2], a2[3]);
  return result;
}
