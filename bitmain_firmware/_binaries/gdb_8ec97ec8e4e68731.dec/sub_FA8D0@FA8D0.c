int __fastcall sub_FA8D0(int a1, int a2, int a3, __int64 *a4)
{
  int v7; // r3
  __int64 v8; // r0
  _BYTE v10[8]; // [sp+0h] [bp-8h] BYREF

  if ( sub_230020(a1, v10, a2) )
    return 0;
  v8 = sub_15C250(v10, a2, a3);
  v7 = 1;
  *a4 = v8;
  return v7;
}
