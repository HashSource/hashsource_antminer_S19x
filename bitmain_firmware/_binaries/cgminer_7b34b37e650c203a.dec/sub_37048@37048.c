void **__fastcall sub_37048(int a1)
{
  int v1; // r3
  void **v3; // r3
  void **v5; // [sp+4h] [bp-Ch] BYREF

  v1 = *(_DWORD *)(a1 + 356);
  if ( !v1 )
    return 0;
  v5 = *(void ***)(a1 + 356);
  if ( sub_367EC(v1, 0) )
  {
    sub_2CEA0(&v5, "cgminer.c", "__get_queued", 9419);
    sub_2F9C0();
  }
  else
  {
    sub_2E034(a1, (int)v5);
  }
  v3 = v5;
  *(_DWORD *)(a1 + 356) = 0;
  return v3;
}
