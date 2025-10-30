int __fastcall sub_47AE0(int a1)
{
  int v3; // [sp+Ch] [bp-8h] BYREF

  v3 = 0;
  if ( *(_DWORD *)(a1 + 356) )
  {
    v3 = *(_DWORD *)(a1 + 356);
    if ( sub_35AAC(v3, 0) )
    {
      sub_36898((void **)&v3, "cgminer.c", "__get_queued", 9495);
      sub_36B64();
    }
    else
    {
      sub_46D68(a1, v3);
    }
    *(_DWORD *)(a1 + 356) = 0;
  }
  return v3;
}
