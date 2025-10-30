bool __fastcall sub_161E40(int a1, int a2)
{
  int v2; // r12

  v2 = *(_DWORD *)(a1 + 164);
  if ( *(_DWORD *)(v2 + 4) != *(_DWORD *)(a2 + 4) )
    return 0;
  if ( *(_QWORD *)(v2 + 8) == *(_QWORD *)(a2 + 8)
    && *(_QWORD *)(v2 + 16) == *(_QWORD *)(a2 + 16)
    && *(_QWORD *)(v2 + 24) == *(_QWORD *)(a2 + 24) )
  {
    return strcmp(*(const char **)a1, *(const char **)a2) == 0;
  }
  return 0;
}
