int __fastcall sub_20F440(int a1)
{
  int *v1; // r0
  int *v2; // r0
  int *v4; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = -1;
  if ( a1 )
  {
    v5 = -(int)sub_14CC00(a1);
    v1 = (int *)sub_15F7E8((_BOOL4)"No stack.");
    v2 = sub_20F3B0(v1, &v5);
  }
  else
  {
    v4 = (int *)sub_15F7E8((_BOOL4)"No stack.");
    v2 = sub_20F3B0(v4, &v5);
    if ( v5 )
      sub_946E0("Bottom (innermost) frame selected; you cannot go down.");
  }
  return sub_15E10C((int)v2);
}
