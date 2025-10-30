int __fastcall sub_2A89C8(int a1)
{
  int v1; // r3
  int result; // r0
  int v3; // r4

  v1 = *(_DWORD *)(a1 + 12);
  if ( !v1 )
  {
    v3 = -1;
    goto LABEL_5;
  }
  result = (*(int (**)(void))(v1 + 24))();
  v3 = result;
  if ( result < 0 )
  {
LABEL_5:
    ((void (__fastcall *)(int))loc_2A6C48)(1);
    return v3;
  }
  return result;
}
