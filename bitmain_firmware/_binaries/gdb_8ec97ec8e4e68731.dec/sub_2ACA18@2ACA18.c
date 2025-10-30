_DWORD *__fastcall sub_2ACA18(int a1, int a2)
{
  _DWORD *v4; // r4

  v4 = sub_2AC474();
  if ( v4 )
  {
    *v4 = sub_327254(a1);
    if ( a2 )
      v4[1] = *(_DWORD *)(a2 + 4);
    *((_BYTE *)v4 + 40) &= 0xE7u;
    sub_2AA874((int)v4, 1);
  }
  return v4;
}
