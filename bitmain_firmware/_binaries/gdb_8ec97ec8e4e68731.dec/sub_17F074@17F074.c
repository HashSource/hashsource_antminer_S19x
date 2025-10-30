int *__fastcall sub_17F074(int a1)
{
  int v1; // r5
  unsigned int v2; // r5
  int v3; // r4
  int *result; // r0
  _DWORD v5[11]; // [sp+20h] [bp-2Ch] BYREF

  v1 = sub_15F70C(a1);
  ((void (__fastcall *)(_DWORD *, int))loc_15E200)(v5, v1);
  sub_188198(v1, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v5[7], v5[8], v5[9]);
  v2 = sub_15DDFC(v1);
  v3 = ((int (*)(void))loc_23DBE4)();
  result = sub_C3460(v2);
  *(_DWORD *)(v3 + 68) = result;
  return result;
}
