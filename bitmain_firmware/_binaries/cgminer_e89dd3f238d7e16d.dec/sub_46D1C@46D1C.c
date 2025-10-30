int __fastcall sub_46D1C(int a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a1 + 356) )
  {
    v3 = *(_DWORD *)(a1 + 356);
    if ( sub_34A50(v3, 0) )
    {
      sub_35858((void **)&v3, "cgminer.c", "__get_queued", 9495);
      sub_35B2C();
    }
    else
    {
      sub_45F6C(a1, v3);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v3;
}
