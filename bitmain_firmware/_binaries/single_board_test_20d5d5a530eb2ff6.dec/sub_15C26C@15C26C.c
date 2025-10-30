int __fastcall sub_15C26C(int a1, int a2, int a3)
{
  int *v5; // r0
  int v7; // [sp+4h] [bp-8h] BYREF

  v5 = (int *)sub_B66C8(a1);
  if ( *(_DWORD *)(*v5 + 8) > a3 )
    return 0;
  if ( sub_D16E4(v5, a2, &v7) <= 0 )
    return -1;
  return v7;
}
