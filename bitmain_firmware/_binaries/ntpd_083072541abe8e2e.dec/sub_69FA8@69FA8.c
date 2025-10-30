char *__fastcall sub_69FA8(char *result)
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
      result = sub_64E00((_BYTE *)&dword_0 + 3, "******** freerecvbuff non-zero usage: %d *******", v2);
    v4 = dword_10721C;
    dword_10721C = (int)v1;
    ++dword_107208;
    *v1 = v4;
  }
  return result;
}
