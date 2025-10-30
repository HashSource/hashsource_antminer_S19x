int __fastcall sub_31E7E8(__int64 a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  int v3; // r6
  size_t v4; // r4
  size_t v5; // r4

  v1 = (_DWORD *)a1;
  LODWORD(a1) = *(_DWORD *)a1;
  if ( (_DWORD)a1 )
  {
    v2 = v1[1];
    if ( v1[2] - v2 < SHIDWORD(a1) )
    {
      v3 = v2 - a1;
      v4 = 2 * (HIDWORD(a1) + v2 - a1);
      LODWORD(a1) = sub_93050((void *)a1, v4);
      *v1 = a1;
      v1[1] = a1 + v3;
      v1[2] = a1 + v4;
    }
  }
  else
  {
    if ( SHIDWORD(a1) < 32 )
      v5 = 32;
    else
      v5 = HIDWORD(a1);
    LODWORD(a1) = sub_93028(v5);
    HIDWORD(a1) = a1 + v5;
    *v1 = a1;
    *(_QWORD *)(v1 + 1) = a1;
  }
  return a1;
}
