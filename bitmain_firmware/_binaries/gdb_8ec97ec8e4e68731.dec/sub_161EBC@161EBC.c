int __fastcall sub_161EBC(int a1, _DWORD *a2, int a3)
{
  int v3; // r4
  int v4; // r5
  int *v5; // r0
  int v6; // r2
  int v7; // r3
  int v9; // [sp+4h] [bp-8h] BYREF

  v3 = sub_231488(*a2, a3, &v9);
  if ( v3 == -1 )
  {
    v4 = v9;
    v5 = _errno_location();
    v7 = v4 - 1;
    if ( (unsigned int)(v4 - 1) > 0x5A )
      v7 = -1;
    else
      LOWORD(v6) = -21564;
    if ( (unsigned int)(v4 - 1) <= 0x5A )
    {
      HIWORD(v6) = 58;
      v7 = *(char *)(v6 + v7);
    }
    *v5 = v7;
    ((void (__fastcall *)(int))loc_2A6C48)(1);
  }
  return v3;
}
