_DWORD *__fastcall sub_160D78(int a1, int a2)
{
  int *v4; // r4
  int v5; // r2
  _DWORD *result; // r0

  v4 = *(int **)(((int (__fastcall *)(int, int))loc_16EC88)(a1, dword_487768) + 4);
  v5 = *v4;
  if ( *v4 )
  {
    while ( *(_DWORD *)(v5 + 4) )
      v5 = *(_DWORD *)(v5 + 4);
    v4 = (int *)(v5 + 4);
  }
  result = (_DWORD *)sub_163938(a1, 8u);
  *v4 = (int)result;
  *result = a2;
  return result;
}
