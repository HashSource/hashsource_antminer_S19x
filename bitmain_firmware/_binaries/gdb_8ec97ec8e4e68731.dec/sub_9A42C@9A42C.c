int __fastcall sub_9A42C(int a1, int a2)
{
  int v2; // r3
  int v3; // r12
  int v4; // r2

  if ( a2 <= 0 )
    return 0;
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 8 * v2++);
    v4 = **(char **)(*(_DWORD *)(v3 + 24) + 24);
    if ( v4 != 7 && (v4 != 5 || *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v3 + 32) >> 3)) != 1) )
      break;
    if ( a2 == v2 )
      return 0;
  }
  return 1;
}
