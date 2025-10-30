int __fastcall sub_2D05DC(int a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 140);
  v2 = *(_DWORD *)(v1 + 60);
  v3 = *(_DWORD *)(v1 + 76);
  if ( v2 )
  {
    if ( v3 )
    {
      sub_2A6BBC("elf.c", 3031);
      return *(_DWORD *)(*(_DWORD *)(a1 + 140) + 60);
    }
    return v2;
  }
  return v3;
}
