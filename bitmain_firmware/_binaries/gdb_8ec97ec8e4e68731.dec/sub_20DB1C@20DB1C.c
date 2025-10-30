int *__fastcall sub_20DB1C(int a1)
{
  int *result; // r0
  int v2[10]; // [sp+0h] [bp-54h] BYREF
  int v3[11]; // [sp+28h] [bp-2Ch] BYREF

  result = (int *)((int (__fastcall *)(int *, int))loc_15E200)(v2, a1);
  if ( v2[1] )
    return sub_203290(v3, v2);
  return result;
}
