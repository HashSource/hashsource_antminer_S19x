int __fastcall sub_26E694(int a1, int *a2)
{
  int result; // r0

  if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    ((void (*)(void))loc_26E00C)();
  result = *a2;
  if ( *a2 )
    return *(_DWORD *)result == 1
        && !*(_QWORD *)(result + 8)
        && 8 * *(_DWORD *)(*(_DWORD *)(a1 + 68) + 20) == *(_QWORD *)(result + 16);
  return result;
}
