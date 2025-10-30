int __fastcall sub_2CD800(int a1)
{
  int result; // r0
  int v3; // r5
  void *v4; // r0
  int v5; // r3

  result = (*(int (**)(void))(*(_DWORD *)(a1 + 4) + 120))();
  if ( result )
  {
    v3 = *(_DWORD *)(a1 + 160);
    v4 = sub_2AD09C(a1, 0x14u);
    v5 = *(_DWORD *)(a1 + 160);
    *(_DWORD *)(v3 + 2344) = v4;
    return *(_DWORD *)(v5 + 2344) != 0;
  }
  return result;
}
