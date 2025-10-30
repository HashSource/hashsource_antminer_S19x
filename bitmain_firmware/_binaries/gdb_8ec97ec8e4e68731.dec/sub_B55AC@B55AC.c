int __fastcall sub_B55AC(int a1, int a2)
{
  __int64 v4; // [sp+0h] [bp-14h] BYREF
  __int64 v5; // [sp+8h] [bp-Ch] BYREF

  if ( !a1 && sub_172880(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 24) + 24) + 12)) )
    return 0;
  if ( sub_171B30(a2, &v4, &v5) )
  {
    if ( v5 >= v4 )
      return v5 + 1 - v4;
    return 0;
  }
  sub_946B0("unable to get bounds of array, assuming null array");
  return 0;
}
