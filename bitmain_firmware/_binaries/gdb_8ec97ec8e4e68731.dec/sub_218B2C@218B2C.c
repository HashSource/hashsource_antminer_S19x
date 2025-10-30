bool __fastcall sub_218B2C(_DWORD **a1, int a2, int a3)
{
  if ( a3 )
    return 0;
  if ( **a1 )
    return re_exec(a2) != 0;
  return 1;
}
