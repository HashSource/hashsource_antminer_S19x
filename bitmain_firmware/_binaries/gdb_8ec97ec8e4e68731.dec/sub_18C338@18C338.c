_DWORD *__fastcall sub_18C338(_DWORD *a1)
{
  int v1; // r2
  int v2; // r1

  v1 = a1[3];
  v2 = *(_DWORD *)(v1 + 144);
  if ( *(_DWORD *)(v1 + 116) && v2 == 5 )
    *(_DWORD *)(v1 + 116) = 0;
  if ( !*(_BYTE *)(dword_487948 + v2) )
    *(_DWORD *)(v1 + 144) = *(unsigned __int8 *)(dword_487948 + v2);
  return sub_18B478(a1);
}
