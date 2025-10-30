int __fastcall sub_2D6C2C(int a1, int a2, _DWORD *a3)
{
  int v5; // r1
  int v6; // r3
  int result; // r0
  _DWORD *v8; // r2

  if ( !(*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 444) + 392) + 40))() )
    return -1;
  v5 = *(_DWORD *)(a2 + 76);
  v6 = *(_DWORD *)(a2 + 68);
  if ( v5 )
  {
    v8 = a3;
    for ( result = 0; result != v5; ++result )
    {
      *v8++ = v6;
      v6 += 16;
    }
    a3 += result;
  }
  else
  {
    result = 0;
  }
  *a3 = 0;
  return result;
}
