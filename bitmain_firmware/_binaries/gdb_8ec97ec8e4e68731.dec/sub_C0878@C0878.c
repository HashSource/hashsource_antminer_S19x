char *__fastcall sub_C0878(char *result, int a2)
{
  __int64 v2; // r2
  size_t v3; // r1
  _DWORD *v4; // r4

  v2 = *(_QWORD *)(result + 4);
  LODWORD(v2) = a2 + v2;
  if ( (int)v2 > SHIDWORD(v2) )
  {
    v3 = 2 * HIDWORD(v2);
    v4 = result;
    if ( (int)v2 > 2 * HIDWORD(v2) )
      v3 = v2 + 10;
    *((_DWORD *)result + 2) = v3;
    result = (char *)sub_93050(*(void **)result, v3);
    *v4 = result;
  }
  return result;
}
