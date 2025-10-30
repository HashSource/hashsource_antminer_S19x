int __fastcall sub_4073C(int a1, int a2, int a3)
{
  int v3; // r0
  _DWORD *v4; // r3
  int vars8[3]; // [sp+1Ch] [bp+8h] BYREF

  v3 = ps_getpid_0(vars8);
  v4 = (_DWORD *)dword_471BF4;
  if ( !dword_471BF4 )
    return (int)v4;
  while ( v3 != v4[1] )
  {
    v4 = (_DWORD *)*v4;
    if ( !v4 )
      return (int)v4;
  }
  sub_3EF58(vars8[0], vars8[1], vars8[2]);
  sub_3EF58(a1, a2, a3);
  return 1;
}
