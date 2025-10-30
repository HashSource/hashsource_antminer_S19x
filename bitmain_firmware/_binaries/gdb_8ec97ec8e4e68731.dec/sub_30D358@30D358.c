void *__fastcall sub_30D358(__int64 a1, size_t a2)
{
  __int64 v2; // kr00_8
  __int64 v4; // r0
  char *v5; // r3
  _BYTE *v6; // r2
  char v7; // t1
  void *result; // r0

  v2 = a1;
  HIDWORD(a1) = a2;
  sub_30D298(a1);
  v4 = *(_QWORD *)v2;
  v5 = (char *)(*(_DWORD *)(v2 + 4) - 1);
  if ( (unsigned int)v5 >= *(_DWORD *)v2 )
  {
    v6 = (_BYTE *)(HIDWORD(v4) + a2 - 1);
    do
    {
      v7 = *v5--;
      *v6-- = v7;
      LODWORD(v4) = *(_DWORD *)v2;
    }
    while ( *(_DWORD *)v2 <= (unsigned int)v5 );
  }
  result = memcpy((void *)v4, (const void *)HIDWORD(v2), a2);
  *(_DWORD *)(v2 + 4) += a2;
  return result;
}
