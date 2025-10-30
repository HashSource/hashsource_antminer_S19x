int __fastcall sub_89EA4(_DWORD *a1)
{
  _BOOL4 v1; // r6

  if ( !a1[285] )
    return -1;
  v1 = *a1 <= 768;
  if ( *a1 == 256 )
    v1 = 0;
  if ( v1 )
    return -1;
  else
    return (*(int (**)(void))(*(_DWORD *)(a1[1] + 100) + 44))();
}
