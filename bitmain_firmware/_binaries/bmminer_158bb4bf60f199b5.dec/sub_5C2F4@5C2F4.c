void **__fastcall sub_5C2F4(int a1)
{
  int v1; // r3
  void **v3; // r3
  void **v5; // [sp+4h] [bp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 356);
  if ( !v1 )
    return 0;
  v5 = *(void ***)(a1 + 356);
  if ( sub_5B638(v1, 0) )
  {
    sub_53380(&v5, "cgminer.c", "__get_queued", 9413);
    sub_55AA4();
  }
  else
  {
    sub_54514(a1, (int)v5);
  }
  v3 = v5;
  *(_DWORD *)(a1 + 356) = 0;
  return v3;
}
