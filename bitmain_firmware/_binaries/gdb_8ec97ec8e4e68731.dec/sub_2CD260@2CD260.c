int __fastcall sub_2CD260(int a1, int a2)
{
  int (*v2)(void); // r5
  int v3; // r4
  int v5; // [sp+4h] [bp-8h] BYREF

  v2 = *(int (**)(void))(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 96);
  if ( (char **)a2 == &off_470950 )
  {
    v3 = -15;
    goto LABEL_4;
  }
  v3 = *(_DWORD *)(a2 + 20) & 0x1000;
  if ( v3 )
  {
    v3 = -14;
LABEL_4:
    if ( !v2 )
      return v3;
    v5 = v3;
    if ( !((int (__fastcall *)(int, int, int *))v2)(a1, a2, &v5) )
      return v3;
    return v5;
  }
  if ( (char **)a2 == &off_4708A8 )
    goto LABEL_4;
  if ( !v2 || (v5 = -257, !v2()) )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(15);
    return -257;
  }
  return v5;
}
