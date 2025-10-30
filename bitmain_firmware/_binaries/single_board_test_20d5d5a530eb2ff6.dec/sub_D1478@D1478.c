int __fastcall sub_D1478(int *a1)
{
  if ( !a1 )
    return 1;
  if ( *a1 )
  {
    if ( *(_DWORD *)(*a1 + 32) && !((int (*)(void))sub_D8DB8)() )
      (*(void (__fastcall **)(int *))(*a1 + 32))(a1);
    if ( a1[3] && *(int *)(*a1 + 40) > 0 && !sub_D8DB8(a1, 4) )
    {
      sub_E0758(a1[3], *(_DWORD *)(*a1 + 40), (size_t)"crypto/evp/digest.c");
      a1[3] = 0;
    }
  }
  if ( !sub_D8DB8(a1, 1024) )
    sub_DB4BC(a1[4]);
  sub_CDDF8(a1[1]);
  sub_E07F8((int)a1, 0x18u);
  return 1;
}
