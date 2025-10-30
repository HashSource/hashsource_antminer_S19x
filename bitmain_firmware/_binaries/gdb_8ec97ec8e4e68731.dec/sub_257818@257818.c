void __fastcall sub_257818(int a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r1
  _DWORD *v6; // r12
  void *ptr; // [sp+4h] [bp-8h]

  v4 = sub_9836C(8u);
  v5 = *(_DWORD **)(a1 + 12);
  v6 = *(_DWORD **)(a1 + 16);
  *v4 = a2;
  ptr = v4;
  v4[1] = 0;
  if ( v5 == v6 )
  {
    sub_257AB8(a1 + 8);
    v4 = ptr;
  }
  else
  {
    if ( v5 )
    {
      ptr = 0;
      *v5 = v4;
      v4 = ptr;
    }
    *(_DWORD *)(a1 + 12) = v5 + 1;
  }
  if ( v4 )
    sub_33AC04(v4);
}
