int __fastcall sub_D02E0(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  int result; // r0
  int v15; // r2
  int v16; // [sp+2Ch] [bp-8h] BYREF
  int varg_r1; // [sp+4Ch] [bp+18h]
  int varg_r2; // [sp+50h] [bp+1Ch]
  int varg_r3; // [sp+54h] [bp+20h]

  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  sub_CCB74(&v16, a12);
  ((void (__fastcall *)(int, int, int, int, int, int, int, int, int, int, int, int, int, int))loc_D017C)(
    v16,
    a1,
    varg_r1,
    varg_r2,
    varg_r3,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13);
  result = v16;
  v15 = dword_478348;
  if ( dword_478348 )
  {
    while ( *(_DWORD *)(v15 + 8) )
      v15 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v15 + 8) = v16;
  }
  else
  {
    dword_478348 = v16;
  }
  return result;
}
