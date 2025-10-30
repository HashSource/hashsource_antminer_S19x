int __fastcall sub_FAA20(int a1)
{
  int result; // r0
  _DWORD *v3; // r3
  int *v4; // r1
  int v5; // r6
  int v6; // r5

  result = (int)sub_E0740((void *)0x34);
  v3 = (_DWORD *)result;
  if ( result )
  {
    v4 = *(int **)a1;
    *(_DWORD *)result = 2048;
    result = 1;
    v5 = *v4;
    v3[9] = -1;
    v3[2] = 2;
    v3[8] = -2;
    if ( v5 == 912 )
      v6 = 6;
    else
      v6 = 1;
    v3[5] = v6;
    *(_DWORD *)(a1 + 36) = 2;
    *(_DWORD *)(a1 + 20) = v3;
    *(_DWORD *)(a1 + 32) = v3 + 3;
  }
  return result;
}
