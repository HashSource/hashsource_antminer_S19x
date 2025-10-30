char *__fastcall sub_D66C(char *result)
{
  _DWORD *v1; // r4
  int v2; // r2
  bool v3; // zf
  int v4; // r1

  v1 = result;
  if ( result )
  {
    v2 = *((_DWORD *)result + 552) - 1;
    v3 = *((_DWORD *)result + 552) == 1;
    *((_DWORD *)result + 552) = v2;
    if ( !v3 )
      result = sub_A828((_BYTE *)&dword_0 + 3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v4 = dword_33334;
    dword_33334 = (int)v1;
    ++dword_33320;
    *v1 = v4;
  }
  return result;
}
