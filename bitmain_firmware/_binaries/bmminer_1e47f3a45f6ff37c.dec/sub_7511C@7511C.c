int __fastcall sub_7511C(int a1, const void *a2, size_t a3)
{
  size_t v4; // r3
  void *dest; // [sp+10h] [bp-Ch]
  size_t v10; // [sp+14h] [bp-8h]

  if ( *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4) > a3 )
    goto LABEL_11;
  if ( *(int *)(a1 + 8) >= 0 && a3 != -1 && *(_DWORD *)(a1 + 4) <= -2 - a3 )
  {
    v4 = 2 * *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) + a3 + 1 >= v4 )
      v4 = *(_DWORD *)(a1 + 4) + a3 + 1;
    v10 = v4;
    dest = sub_74DA0(v4);
    if ( !dest )
      return -1;
    memcpy(dest, *(const void **)a1, *(_DWORD *)(a1 + 4));
    sub_74DE8(*(void **)a1);
    *(_DWORD *)a1 = dest;
    *(_DWORD *)(a1 + 8) = v10;
LABEL_11:
    memcpy((void *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)), a2, a3);
    *(_DWORD *)(a1 + 4) += a3;
    *(_BYTE *)(*(_DWORD *)a1 + *(_DWORD *)(a1 + 4)) = 0;
    return 0;
  }
  return -1;
}
