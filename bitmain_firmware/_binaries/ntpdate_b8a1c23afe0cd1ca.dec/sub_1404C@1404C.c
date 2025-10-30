void *__fastcall sub_1404C(int a1)
{
  int v2; // r1
  size_t v3; // r5
  void *result; // r0
  __int64 v5; // r2
  int v6; // r3

  if ( !a1 || *(_DWORD *)a1 != 1114990113 )
    sub_1073C();
  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 12) - v2;
  result = memmove(*(void **)(a1 + 4), (const void *)(*(_DWORD *)(a1 + 4) + v2), v3);
  v5 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 12) = v3;
  *(_DWORD *)(a1 + 16) = 0;
  if ( HIDWORD(v5) <= (unsigned int)v5 )
    v6 = 0;
  else
    v6 = HIDWORD(v5) - v5;
  *(_DWORD *)(a1 + 20) = v6;
  return result;
}
