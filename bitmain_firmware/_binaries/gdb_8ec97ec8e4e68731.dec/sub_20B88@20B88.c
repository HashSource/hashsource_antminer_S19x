__int64 __fastcall sub_20B88(int a1, int a2)
{
  int v3; // r0
  _DWORD *v5; // r0
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v3 = ((int (__fastcall *)(int, int, __int64 *))loc_1DFAFC)(a1, a2, &v6);
  if ( dword_487978 )
  {
    v5 = (_DWORD *)sub_242FC8(v3);
    sub_2594B0(*v5, "displaced: read r%d value %.8lx\n", a2, (_DWORD)v6);
  }
  return v6;
}
