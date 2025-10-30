char *__fastcall sub_6AF28(char *result)
{
  _DWORD *v1; // r4
  int v2; // r2
  int v3; // r1
  int v4; // r2

  v1 = result;
  if ( result )
  {
    v2 = *((_DWORD *)result + 552) - 1;
    *((_DWORD *)result + 552) = v2;
    if ( v2 )
      result = sub_65D40((_BYTE *)&dword_0 + 3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v3 = dword_108240;
    dword_108240 = (int)v1;
    v4 = dword_10822C + 1;
    *v1 = v3;
    dword_10822C = v4;
  }
  return result;
}
