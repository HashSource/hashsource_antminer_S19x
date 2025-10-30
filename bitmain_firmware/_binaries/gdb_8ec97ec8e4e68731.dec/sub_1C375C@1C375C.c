_DWORD *__fastcall sub_1C375C(_DWORD *a1, int a2)
{
  __int64 v4; // r0
  void *v5; // r3
  void *v6; // r0

  *(_DWORD *)(*(_DWORD *)(a2 + 4) + 8) = *(_DWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = 0;
  v5 = sub_93050((void *)v4, 16 * (HIDWORD(v4) + 2));
  v6 = *(void **)(a2 + 4);
  *(_DWORD *)(a2 + 4) = v5;
  if ( v6 )
  {
    free(v6);
    v5 = *(void **)(a2 + 4);
  }
  *(_DWORD *)(a2 + 4) = 0;
  *a1 = v5;
  return a1;
}
