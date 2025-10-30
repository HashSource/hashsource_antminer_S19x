unsigned int __fastcall sub_2C3C7C(unsigned int result, _DWORD *a2)
{
  _DWORD *v2; // r3
  unsigned int v3; // r2
  char **v4; // r12

  v2 = *(_DWORD **)(result + 28);
  if ( v2[11] == 4 )
  {
    result = v2[328];
    v3 = *(_DWORD *)(a2[15] + 8);
    if ( v3 <= result )
    {
      result = v2[329];
      v4 = *(char ***)(result + 4 * v3);
      if ( v4 != &off_470950 && (a2[5] & 0x10) != 0 )
      {
        *(_DWORD *)(v2[323] + 8 * a2[1]) = v4;
        *(_DWORD *)(result + 4 * v3) = a2;
      }
    }
  }
  return result;
}
