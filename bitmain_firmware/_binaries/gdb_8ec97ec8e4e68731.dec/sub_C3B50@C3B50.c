int __fastcall sub_C3B50(int a1)
{
  __int64 v1; // r2
  int v2; // r1
  const char *v4; // r0
  unsigned int *v5; // r4
  unsigned int *v6; // r6
  unsigned int v7; // t1
  char *v8; // r0

  v1 = *(_QWORD *)(a1 + 136);
  v2 = *(_DWORD *)(a1 + 24);
  if ( HIDWORD(v1) == (_DWORD)v1 )
  {
    if ( *(_BYTE *)(a1 + 148) )
      return sub_259F10("Catchpoint %d (any signal)");
    else
      return sub_259F10("Catchpoint %d (standard signals)");
  }
  else
  {
    if ( (unsigned int)(HIDWORD(v1) - v1) <= 7 )
      LOWORD(v4) = -12440;
    else
      LOWORD(v4) = -12464;
    HIWORD(v4) = 55;
    sub_259F10(v4, v2);
    v5 = *(unsigned int **)(a1 + 136);
    v6 = *(unsigned int **)(a1 + 140);
    while ( v6 != v5 )
    {
      v7 = *v5++;
      v8 = sub_C3A2C(v7);
      sub_259F10(" %s", v8);
    }
    return sub_259F10(")");
  }
}
