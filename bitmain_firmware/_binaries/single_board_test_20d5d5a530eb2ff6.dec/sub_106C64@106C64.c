int __fastcall sub_106C64(int a1, void *a2, _DWORD *a3)
{
  int v3; // r4
  const void *v7; // r7
  size_t v8; // r0

  v3 = *(_DWORD *)(a1 + 24);
  if ( a2 )
  {
    if ( v3 )
    {
      if ( *a3 > 0xFu )
      {
        v7 = (const void *)sub_AE2B4(*(_DWORD *)(a1 + 24));
        v8 = sub_AE2A8(v3);
        memcpy(a2, v7, v8);
        *a3 = 16;
        return 1;
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *a3 = 16;
    return 1;
  }
}
