int __fastcall sub_244A8(int a1, int a2)
{
  unsigned int *v4; // r0

  if ( *(_DWORD *)a2 )
    return **(_DWORD **)a2 - *(_DWORD *)(*(_DWORD *)a2 + 4);
  v4 = sub_24218(a1);
  *(_DWORD *)a2 = v4;
  return *v4 - v4[1];
}
