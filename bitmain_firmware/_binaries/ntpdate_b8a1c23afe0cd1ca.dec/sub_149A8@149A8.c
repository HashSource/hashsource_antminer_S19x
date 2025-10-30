unsigned int __fastcall sub_149A8(_DWORD *a1, char *s)
{
  unsigned int v4; // r6
  int v5; // r0
  unsigned int result; // r0

  if ( !a1 || *a1 != 1114990113 )
    sub_1073C();
  if ( !s )
    sub_1073C();
  v4 = strlen(s);
  v5 = a1[3];
  if ( a1[2] - v5 < v4 )
    sub_1073C();
  memcpy((void *)(a1[1] + v5), s, v4);
  result = a1[3] + v4;
  a1[3] = result;
  return result;
}
